/******************************************************************************

Author : Praveen R
<< & >> operating overloading
*******************************************************************************/

#include <iostream>
using namespace std;

class simple{
    
    public:
    int a;
    simple():a(0){}
    simple(int x):a(x){}
    
    friend ostream & operator << (ostream &o, simple obj){ //insertion - ostream
        o << obj.a <<endl;
        return o;
    }
    friend istream & operator >> (istream &i, simple &obj){ // extraction - istream
        i >> obj.a ;
        return i;
    }
};

int main()
{
    //<<
    simple s1(39);
    cout << s1;
    simple s2(29);
    cout << s2;
    
    // >>
    simple s3;
    cin >> s3;
    cout << s3;
    return 0;
}
