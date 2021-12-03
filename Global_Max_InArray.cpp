/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ Program to print all combination of size r in




// an array of size n
#include <iostream>
#include <set>
using namespace std;
set<int> s;
void combinationUtil(int arr[], int n, int r, int index,int data[], int i)
{
	// Current combination is ready, print it
	if (index == r) {
	    int sum[100];int max=0;
		for (int j = 0; j < r-1; j++){
		    int l=0;
		    for(int k=1;k<r;k++,l++){
		        sum[l] = data[j] - data[k];
		        
		        if(sum[l] < 0)
		            sum[l] = sum[l] * -1;
		            
		        if(sum[l]>max)
		            max = sum[l];
		    }
		}
		cout << "Max:"<<max<<endl;
        s.insert(max);
		return;
	}
	if (i >= n)
		return;
	data[index] = arr[i];
	combinationUtil(arr, n, r, index + 1, data, i + 1);
	combinationUtil(arr, n, r, index, data, i + 1);
}

// Driver program to test above functions
int main()
{
	int arr[] = {5,17,11,9 };
	int r = 3;
	int n = sizeof(arr) / sizeof(arr[0]);
	int data[r];
	// Print all combination using temporary array 'data[]'
	combinationUtil(arr, n, r, 0, data, 0);
    set<int>::iterator it;
    it=s.end();
    cout<<"Global Max: "<<*it<<endl;
	return 0;
}
