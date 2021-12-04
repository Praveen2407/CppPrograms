/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <memory>
using namespace std;
class A{
    int *a;
    public:
    A(){}
    A(int x){ a = new int(x);  cout << "Const"<<endl;}
    ~A(){ cout << "des\n";}
    A(const A& obj){ a = obj.a; cout << "Copy cons\n"; }
    A& operator=(const A& obj){
        cout << "Copy Assigment\n";
        if(this != &obj){
            *a = *(obj.a);
        }
        return *this;
    }
   /* A(const A&& obj){
        a = obj.a;
        delete obj.a; cout << "Move semantics\n"; 
    }
    A& operator=(const A &&obj){
        if(this != &obj){
            *a = *(obj.a);
            delete obj.a;
        }
        cout << "Move assignment\n";
        return *this;
    }*/
    void display(){ cout << *a <<endl;} void set(int q){ a = new int(q);}

};
int main()
{
    A obj1, obj3; obj1.set(5); obj1.display();
    A obj2 = obj1; A obj4(7);
    obj3 = obj4; 
    obj3.set(9);
    obj3.display(); 
    return 0;
}
