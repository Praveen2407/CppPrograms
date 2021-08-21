#include <iostream>
using namespace std;

class simple{
      int a;
    public:
  
    simple():a(0){}
    simple(int x):a(x){}
    
    void * operator new (size_t size){
        cout << size << endl;
        void *ptr = :: operator new(size);
    }
    void operator delete (void *const ptr, size_t size){
        cout << "size :" <<size <<endl << "addr :" << ptr <<endl;
        ::operator delete(ptr);
    }
};

int main()
{
    simple *p = new simple;
    delete p;
    return 0;
}
