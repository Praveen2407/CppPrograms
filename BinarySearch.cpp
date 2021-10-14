/********************************
Praveen R
Binary Search  - Linear Binary search 
Array should be in sorted manner and O(logn) - Time Complx
**********************************/

#include <iostream>
using namespace std;

int bSearch(int a[],int n,int x){
    
    int start = 0;
    int end = n-1;
    
    while(start <= end){
        int mid = (start+end)/2;
        if(x == a[mid])
            return x;
        if(x < a[mid])
            end = mid-1;
        if(x > a[mid])
            start = mid+1;
    }
    return -1;
}
int main(){
    int size = 7;
    int ary[] = {1,2,3,4,5,6,7};
    cout << "Elements Are: ";
    for(int i=0;i<size;i++){
        cout << ary[i];
    }
    int x;
    cout << "\nNumber to be search\n";
    cin >> x;
    int check = bSearch(ary,size,x);
    if(check != -1){
        cout << "Found\n";
    }else{
        cout <<"Not Found\n";
    }
    
    return 0;
}
