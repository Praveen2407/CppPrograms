/******************************************************************************
Praveen R
Repeated String in C++
There is a string S, of lowercase English letters that is repeated infinitely many times. 
Given an integer n, find and print the number of letter a's in the first  letters of the infinite string
Input - aba & 10
Output - abaabaabaa - 'a' - 7

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

long repeatedString(string s, long n) {
    
    string s_tmp = s;

    long tmp = n/s.length(); 
    cout << "loop:" << tmp <<endl;
    for(long i=0;i<tmp-1;i++)
        s.append(s_tmp);
        
    long len = s.length();
    char ch[n]="";
    long i,j,count;
    
    if(s.length() < n){
        for(long j=0,i=s.length();i<n;i++,j++)
             ch[j] = s_tmp[j];
        s.append(ch);
    }
   
    count =0;
    for(long i=0;i<s.length();i++){
        if(s[i] == 'a')
            count++;
    }

    return count;
}
int main()
{
    string s = "aba";
    long n =100;
    long c = repeatedString(s, n);
    cout << c <<endl;

    return 0;
}
