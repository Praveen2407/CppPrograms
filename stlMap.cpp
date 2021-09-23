#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int data, type,  num; string name;
    cin >> data;map<string,int> m;
    for(int i=0;i<data;++i)
    {
        cin >> type; cin >> name; 
        if( type == 1){
            cin >>num;
            m[name] += num;
        }
        if(type == 2){
            m.erase(name);
        }
        if(type ==3){
            cout << m[name] << endl;
        }
    }
     
    return 0;
}
/*
You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple 
answer sheets.So the teacher has  queries:

1x :Add the marks  to the student whose name is .

2x: Erase the marks of the students whose name is .

3x: Print the marks of the students whose name is . (If  didn't get any marks print .)

Input Format

The first line of the input contains  where  is the number of queries. The next  lines contain  query each.The first integer, 
of each query is the type of the query.If query is of type , it consists of one string and an integer  and  where  is the name of the student and  is the marks of the student
.If query is of type  or,it consists of a single string  where  is the name of the student.*/
