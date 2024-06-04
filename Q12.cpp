// Butterfly Patter -- Gave up on this, it's so complex i will handle it later.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        int space = 2*n - 2*i-1;
        for (int j = 1; i <=space; i++)
        {
            cout << " ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout << endl;
        
        
    }
    
}