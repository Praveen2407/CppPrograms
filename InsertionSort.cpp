/****************************
Praveen R
****************************/

#include <iostream>
using namespace std;

void insertionSort(int a[], int n){
    
    int value; int tmp;
    for(int i=0;i<n;i++){
        value = a[i];
        tmp = i;
        while( (tmp > 0) && (a[tmp-1] > value)){
            a[tmp] = a[tmp-1];
            tmp--;
        }
        a[tmp] = value;
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

    insertionSort(ary,size);
    cout << "\nSorted Elements : ";
    for(int i=0;i<size;i++){
        cout << ary[i];
    }
    
    return 0;
}
