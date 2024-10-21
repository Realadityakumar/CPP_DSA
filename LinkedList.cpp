#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head  = temp ;
}
void insertAtPostion(Node* &head, Node* &tail, int position,int data){
    //Step One -- if the position is at first
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    // Let's see for different pos
    Node* temp = head;
    int cnt = 1;//finding the node to make change 
    while (cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    // now we have to create a new node and assign the address of upcoming block
fasdfasd
    Node* nodetoinsert = new Node(data);

    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
   nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;fadsfafasd
    
    //hello wordd
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,11);
    insertAtPostion(head,tail,1,15);
    cout << head -> data;
}