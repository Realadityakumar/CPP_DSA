//Print star pattern
#include <iostream>
using namespace std;
int main(){
    int row,col;
    cin >> row >> col;
    for(int i = 0;i<row;i++){
        for(int i = 0;i<col;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}