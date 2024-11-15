#include <iostream>
using namespace std;
class  heap{
    public:
    int arr[100];
    int size = 0;

    void insert(int val){
        int index;
        int parent;
        size = size + 1;
        index = size;
        arr[index] = val;
        while (index>1){
           parent = index/2;
           if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index = parent;
           }else{
            return;
           }
        }
    }
    void print(){
        for (int i = 1; i <=size; i++)
        {
            cout << arr[i] << " ";
        }
        
    }
    
};

int main(){
    heap h;
    h.insert(25);
    h.insert(45);
    h.print();
}

