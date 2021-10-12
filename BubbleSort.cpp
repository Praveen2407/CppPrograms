/***********************
Praveen R
Time Compl : O(n2)
************************/

#include <iostream>
using namespace std;
void BubbleSort(int a[], int n){
    
    int tmp;
    for(int i=0;i<n-1;i++)
    {    
        for(int j= 0;j<n-1;j++)
        {    
            if(a[j] > a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
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

    BubbleSort(ary,size);
    cout << "\nSorted Elements : ";
    for(int i=0;i<size;i++){
        cout << ary[i];
    }
    
    return 0;
}
