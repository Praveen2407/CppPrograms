/*********************************************

Praveen R
Slipt the string into N parts and reverse that substring, without using builtin functions(only str.length());
Input : ABCDEFGHIJ N = 3
Output : CBAFEDIHGJ
*******************************************/

#include <iostream>

using namespace std;

void divide(string str, int n)
{

  char tmp[str.length()-1];
    
	if (str.length() < n) {
		cout << "Invalid Input: String size";
		return;
	}
	if( n == 1){
	  cout << "Final string is : "<<str<<endl;
	  return;
	}
	
	int loops = str.length() / n; // split the string into n loops
	int parts, size; parts=size=n;	//to reverse the substring
	int start = 0;

	cout << "Loops:" <<loops<<endl;
	cout << "\nThe Original String is:\t" << str<<endl;

    while(loops--){
        parts = size;
        for(int i = size-1;start < parts;i--)
            tmp[start++] = str[i];
        size =size+n;
    }

    //to copy remaining elements to tmp string only if not copied above
    if(str.length()!=start){
        for(int i = start;i<str.length();i++)
            tmp[i] = str[i];
    }
    tmp[str.length()]='\0';
    cout << "The Final string is:\t"<<tmp << endl;
}

int main()
{
  int s_Split;
	string str = "abcdefghij";
	cout << "Enter a digit to divide the string"<<endl;
	cin >> s_Split;
	divide(str, s_Split);
}
