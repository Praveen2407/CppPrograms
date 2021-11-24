#include <iostream> 
using namespace std;

class Singleton{
    int s;
    Singleton(int x){
        cout << "Constructor"<<endl;
        s=x;
    }
    Singleton(const Singleton &tmp ) = delete; //{
        //s = tmp.s;}
    Singleton& operator=(const Singleton&) = delete; // {
		      //return *this; }
	~Singleton(){}
    static Singleton* inst;
    
    public:
    static Singleton* getInstance(int value){
        if(inst == nullptr)
            inst = new Singleton(value);
        return inst;
    }
    static void release(){ 
        if( inst == nullptr){
            delete inst;
            inst = nullptr;
        }
    }
    void display(){ cout << "value of Singleton class :"<<s<<endl;}
};
Singleton* Singleton::inst = nullptr;

int main(){
    Singleton* obj; obj->getInstance(10);obj->display();
    Singleton* obj2; obj2->getInstance(20);obj2->display();
    
    return 0;
}
