#include <iostream>
#include  <sstream>
using namespace std;

int main()
{
    int x = 8, y=9;
    int sum = x+y;
    stringstream ss;
    ss << "Sum of " << x << " & " << y << " is: " << sum <<endl;
    string str = ss.str();
    cout << str ;
    
    string data = "1112 13 0"; 
    stringstream s;
    s.str(data);
    int a;
    while( s >> a )
        cout << a <<endl;
    return 0;
}
