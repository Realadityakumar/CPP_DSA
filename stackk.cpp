#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n;
    cin >> n;
    int inp;
    for (int i = 0; i < n; i++){
        cin >> inp;
        s.push(inp);
    }
    stack<int> temp = s;
    int temp2;
    stack<int> reverse;
    while (!temp.empty()){
        // if(temp.top()%2!=0){
        // }
        temp2 = temp.top();
        reverse.push(temp2);
        cout << temp2 << " ";
        temp.pop();
    }
    cout << " trying to reverse it" << endl;
    stack<int> temp3 = reverse;
    while (!temp3.empty()){
        // if(temp.top()%2!=0){
        // }
        cout << temp3.top() << " ";
        temp3.pop();
    }
    
}