/********************************
Praveen R
QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.
*********************************/

#include <iostream>
using namespace std;

int partitionSort(int *A,int start, int end){
    
    int pivot = A[end];
    int index = start;
    for(int i =0 ;i<end;i++){
        if(A[i] <= pivot){
            swap(A[i],A[index]);index++;
        }
    }
    swap(A[index],A[end]);
    
    return index;
}

void quickSort(int *A, int start, int end){
    if(start < end){
        int pindex = partitionSort(A,start,end);
        quickSort(A,start,pindex-1);
        quickSort(A,pindex+1,end);
    }
}
int main(){
    int size = 6;
    int ary[size];
    cout<<"enter the values\n";
    for(int i=0;i<size;i++){
        cin >> ary[i];
    }
    cout << "Unsorted Elements : ";
    for(int i=0;i<size;i++){
        cout << ary[i];
    }
  //  int ary[] = {7,2,1,6,8,5,3,4};
    quickSort(ary,0,size);
    cout << "\nSorted Elements : ";
    for(int i=0;i<size;i++){
        cout << ary[i];
    }
    
    return 0;
}
