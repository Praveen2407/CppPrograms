#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class increment{
    int a;
    public:
    increment(){}
    increment(int x):a(x){}
    
    int operator()(int v){
        return a+v;;
    }
};
//int increment(int x) {  return (x+1); }

int main(){
    
    int arr[5] = {1,2,3,4,5};
    
    transform(arr,arr+5,arr,increment(5));
    for(int i=0;i<5;i++)
        cout<<arr[i];
        
    return 0;
}
