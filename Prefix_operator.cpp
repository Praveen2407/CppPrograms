/*=====================
Author : Praveen R
Progm : Pre fix Operator overloading
=======================*/

#include <iostream>
using namespace std;

class simple{
    int a;
    public:
    simple():a(0){}
    simple(int x):a(x){}
    
    simple operator ++ (){
        simple tmp;
        tmp.a = ++a;
        return tmp;
    }
    void display(){
        cout << "Value : " << a <<endl;
    }
};

int main()
{
    simple s1;
    simple s2(9);
    s2.display();
    simple s3 = ++s2;
    s3.display();
    s2.display();

    return 0;
}
