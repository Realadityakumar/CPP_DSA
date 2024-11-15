#include <iostream>
using namespace std;
int partition(int arr[],int s,int e){
    //3.create a pivot
    int pivot = arr[s];
    //4.now check how many more numbers are there which are greater than this
    int cnt = 0;
    for (int i = 0; i <= e; i++)
    {
        if(arr[i]>pivot){
            cnt++;
        }
    }
    // create pivotindex
    int pivotindex = s+cnt;
    int i = s;
    int j = e;
    while (i>pivotindex && j<pivotindex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] >= pivot)
    }
    {
        /* code */
    }
    
}
void quickSort(int arr[],int s,int e){
    //1. base case
    if(s >= e){
        return;
    }
    //2. partion
    int p = partition(arr,s,e)
}
int main(){
    int arr[6] = {2,1,9,4,3,7};
    int n = 6;
    quickSort(arr,0,n-1);
}