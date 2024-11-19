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
    //deletion
    void deleteFromHeap(){
        if(size == 0){
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i<size){
            int leftindex = 2*i;
            int rightindex = 2*i + 1;
            if(leftindex<size && arr[leftindex] > arr[i]){
                swap(arr[leftindex],arr[i]);
                i = leftindex;
            }
            else if(rightindex < size && arr[rightindex]>arr[i]){
                swap(arr[rightindex],arr[i]);
                i = rightindex;
            }
            else{
                break;
            }
        }
        
    }
    //heapify
    void heapify(int arr[],int n,int i){
        int largest = i;  // define the largest variable
        int left = 2*i;
        int right = 2 * i + 1;
        // comparing if the left or right is greate who ever is greater just swap with it and recall the function
        if(left <= n && arr[largest]<arr[left]){
            largest = left;
        }
        if(right <= n && arr[largest]<arr[right]){
            largest = right;
        }
        if(largest != i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
    // heap sort
    void heapSort(int arr[],int n){
        int size = n;
        while (size>1)
        {
        swap(arr[1],arr[n]);
        size--;
        heapify(arr,size,1);
        }
        
        
    }

};

int main(){
     heap h;
    // h.insert(25);
    // h.insert(45);
    // h.insert(23);
    // h.insert(65);
    // h.insert(34);
    // h.deleteFromHeap();
    int arr[100] = {-1,1,5,4,8,6,7,9};
    int n = 8;
    // for (int i = n/2 ; i > 0; i--){
    //     h.heapify(arr,n,i);
    // }
    for (int i = n/2; i > 0; i--){
        h.heapify(arr,n,i);
    }
    
    h.heapSort(arr,n);
        for (int i = 1; i <=n; i++)
        {
            cout << arr[i] << " ";
        }
        
    
}

