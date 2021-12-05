/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    for(int i=0;i<10;i++)
        a.push_back(i);
    for(int i=0;i<10;i++){
        cout << a[i];
    }
    cout << "\nFinal"<<endl;
    int tmp = 0; 
    int size= a.size();
    int count =0;
    
    for(int i=tmp;i<size;i++){
        cout << a[i];
        count++;
        if((i+1) == a.size()){
            tmp = -1; i =tmp;
            size = a.size()-count ;
        }
    }
    
    
    return 0;
}

//int = 5

//4567890123


