/******************************
Praveen R
Selection sort
pick a lowet number's index in an array and swap with 'I'th element
******************************/

#include <iostream>
using namespace std;

void selectionSort(int a[],int n){
    
    for(int i=0;i<n-1;i++){
        
        int min = i;
        for(int j=i+1;j<n;j++){
            if( a[j] < a[min])
                min = j;
        }
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}
int main(){
    int size = 5;
    int ary[size];
    cout<<"enter the values\n";
    for(int i=0;i<size;i++){
        cin >> ary[i];
    }
    cout << "Unsorted Elements : ";
    for(int i=0;i<size;i++){
        cout << ary[i];
    }
    selectionSort(ary,size);
    cout << "\nSorted Elements : ";
    for(int i=0;i<size;i++){
        cout << ary[i];
    }
    
    return 0;
}
