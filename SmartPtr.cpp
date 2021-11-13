/******************************************************************************
Praveen R

SmartPointer - Own Smart Pointer class to another class
*******************************************************************************/

#include <iostream>
using namespace std;

class A{
    int x,y;
    public:
    A(int a,int b){ x = a;y=b;
        cout << "Inside A\n";
    }
    void display(){
        cout << "X:"<<x<<" Y:"<<y<<endl;
    }
    ~A(){cout << "Descrutor\n";}
    
};
class SP{
    A *obj;
    public:
    SP(A *ptr):obj(ptr){}
    ~SP(){ delete obj;}
    A* operator ->(){
        return obj;
    }
    A& operator *(){ return *obj;}
};
int main(){
    
   SP p(new A(1,2));
   p->display();
   cout << "End\n";
   return 0;
}
