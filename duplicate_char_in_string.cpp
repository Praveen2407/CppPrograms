/******************************************************************************
Praveen 

Find out the duplicate char in string
Input - ABAC
Output - A -2 B -1 C -1
*******************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string\n";
    cin >> str;

    map<char , int >m;       
    for(long i=0;i<str.length();i++)
    {    
        //m[str[i]]++; one line solution
      
        auto result = m.insert(pair<char,int>(str[i], 1));
            if (result.second == false)
                result.first->second++;
        
        /* another solution
        m.insert(pair<char,int>(str[i],0));
        auto res = m.find(str[i]);
        if(res!= m.end())
            res->second++;
        */
    }

    map<char , int >::iterator itr;    
    for(itr=m.begin();itr!=m.end();itr++)
        cout<<itr->first<<" - "<<itr->second<<endl;

    return 0;
}
