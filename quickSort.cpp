#include <iostream>
using namespace std;
int  partition(int arr[],int s,int e){
    //assigning an first array elemenent 
    int pivot = arr[s];
    int cnt = 0;
    for (int i = 0; i <=e; i++){
        if (arr[i]<=pivot){
            cnt++;
        }
    }
    //now as we got the count how much elements are smalller than pivot, so now we will place it at correct position
    int pivotindex = s + cnt;
    swap(arr[pivotindex],arr[s]);

    //left and right part 
    int i =s, j = e;
    // itirating thorugh left and right side of element
    while(i < pivotindex && j > pivotindex){
            while (arr[i] <= pivot)
            {
               i++;
            }
            while(arr[j] > pivot){
                j--;
            }
            if( i < pivotindex && j > pivotindex){
                swap(arr[i++],arr[j--]);
            }
        return pivotindex;
    }
    
}
void quickSort(int arr[],int s, int e){
    //1.  base case
    if(s >=e){
        return;
    }
    //2. we have to do partition
    int p = partition(arr,s,e);
    //3.leftside  sorting
    quickSort(arr,s,p-1);
    //4.rightside  sorting
    quickSort(arr,p+1,s);
}
int main(){
    int arr[6] = {1,9,2,4,8,6};
    int n = 6;
    quickSort(arr,0,n-1);

}