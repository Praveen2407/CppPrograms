
#include <iostream>
using namespace std;

class simple{
    int size;
    int *a;
    public:
        simple(){
            cout << "How many elements"<<endl;
            cin >> size ;
            a = new int[size];
            cout << "Enter the data"<<endl;
            for(int i = 0; i<size; i++)
                cin >> a[i]; 
        }
        int& operator [] (int indx){
            if(indx > size)
                cout << "Out of bound" <<endl;
            else
                return a[indx];    
        }
        void print(){
            cout << "elements :";
            for(int i=0;i<size;i++)
                cout <<endl<<a[i];
        }
        int getSize(){
            return size;
        }
        
 
};
class Test{
    int a,b;
    public:
    Test():a(0),b(0){}
    
    void operator ()(int i, int j) {
        a = i; b =j;
    }
    void display(){
        cout << "Values : " <<a << " " <<b <<endl;
    }
};

int main()
{
    // [] operator
    simple s1;
    s1.print();
    s1[2] = 11;
    s1.print();
    s1[16] = 99; //out of bound
  
    // () operator
    Test t1;
    t1.display();
    int x = 9;
    int y = 88;
    t1(x,y);
    t1.display();
   
    return 0;
}
