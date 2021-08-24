#include <iostream>
using namespace std;

template <class T>
class sample
{
    T a, b;
    public:

    sample(T x, T y){
        a = x;
        b = y;

    }
    void display(){
        cout << " A: "<< a << " B: "<<b <<endl;
    }
};
int main()
{
    sample<int> obj1(2,5);
    sample<char> obj2('A', 'B');
    sample<double> obj3(2.9, 3.77);
    sample<int> obj4(3,6);
    
    obj1.display();obj2.display(); obj3.display(); obj4.display();

    return 0;
}
