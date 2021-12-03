/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void fun(string ss){
 
  unordered_map<char,int> m; 
  for(int i =0;i<ss.length();i++)
		m[ss[i]]++;
  
  auto it = m.begin();
  for(;it!=m.end();it++){
  	if(it->second == 2)
	  	cout << it->first <<endl;
  }
  
}
int main()
{
  
  string s = "John Doe";
  fun(s);
  
  return 0;
}
