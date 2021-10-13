#include <iostream>
using namespace std;
void merge(int a[], int l[], int ln, int r[], int rn){
    
    int k,i,j;
    k=i=j=0;
    while(i < ln && j < rn){
        if(l[i] < r[j]){
            a[k++]=l[i++];
        }else{
            a[k++] = r[j++];
        }
    }
    while(i < ln)
        a[k++] = l[i++];
    while(j < rn)
        a[k++] = r[j++];
}

void MergeSort(int a[], int n)
{
    int mid = n/2;
    int l_a[mid];int r_a[n-mid];
    if(n <2)
        return;
    
    for(int i =0 ;i<mid;i++)
        l_a[i] = a[i];
    for(int j=mid;j<n;j++)
        r_a[j-mid] = a[j];
    //split 
    MergeSort(l_a,mid);
    MergeSort(r_a,n-mid);
    //merged to original array
    merge(a,l_a,mid,r_a,n-mid);
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
    MergeSort(ary,size);
    cout << "\nSorted Elements : ";
    for(int i=0;i<size;i++){
        cout << ary[i];
    }
    
    return 0;
}
