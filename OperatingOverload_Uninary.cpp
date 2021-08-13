#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A():a(0){}
    A(int x):a(x){}
    //void operator - ();
    friend void operator -(A &); //friend function
    void display();
};
/*
void A::operator -(){ //member function
    a = -a;
}*/
void operator -( A &tmp){ //using frined function so need extra argument
    tmp.a = -(tmp.a);
}
void A::display(){
    cout << "Value of A: "<<a<<endl;
}

int main()
{
    A obj1;
    obj1.display();
    A obj2(9);
    obj2.display();
    -obj2;
    obj2.display();
    return 0;
}
