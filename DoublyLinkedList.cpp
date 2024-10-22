#include <iostream>
using namespace std;

// creating the base code for doublylinked list
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = nullptr;
        this->next = nullptr;
    }
    // Deconstructor
    ~Node()
    {
        int value = this->data; // getting the value of the node which we want to delete
        if (next != nullptr)
        { // basiclly we need to check if the next pointer is pointing to something or not
            delete next;
            next = nullptr;
        };
        cout << "Memory is free" << value << endl;
    }
};
// Now let's insert
void insertAthead(Node *&tail, Node *&head, int d)
{
    //  here in doubly lisnked list we have to handle the two case to insert nodes in list

    // emptylist
    if (head == nullptr)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    // if the list already exist
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node *&tail, Node *&head, int d)
{
    // if the there is empty list
    if (tail == nullptr)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    // if the list already exist
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void deleted(int pos, Node *&head)
{
    // here we have two handle two condtions if the position is 1 and other if position<1.
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = nullptr;
        head = temp->next;
        temp->next = nullptr;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = nullptr;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->prev = NULL;
        curr->next = NULL;
    }
}

int main()
{
    Node *tail = nullptr;
    Node *head = nullptr;
    insertAthead(tail, head, 1);
    cout << head->data;
}