#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A():a(0){}
    A(int x):a(x){}
    
    //A operator +(A &);
    
    friend A operator +(A &, A &);
    void display();
};

//A A::operator +( A &obj1, A &obj2){

A operator +( A &obj1, A &obj2){
    A tmp;
    tmp.a = obj1.a + obj2.a;
    return tmp;
}
void A::display(){
    cout << "value : "<<a<<endl;
}
int main(){
    
    A A1(1);
    A1.display();
    A A2(9);
    A2.display();
    A A3 = A1 + A2;
    A3.display();
    return 0;
}
