/***************************************
Praveen R

Singleton Design Pattern
***************************************/
#include <iostream>
#include <cstring>
using namespace std;

class S_Vol{
    
    int vol;
    S_Vol(){
        cout << "Inside\n";
    }
    
    static S_Vol *Instance;
    S_Vol(const S_Vol&) = delete; //copy
    S_Vol & operator=(const S_Vol&) = delete; //assignment
    public:
    static S_Vol* getInst(){
        if(!Instance)
            Instance = new S_Vol();
        else{
            cout << "Already Object is created\n";
        }
        return Instance;
    } 
};

S_Vol *S_Vol::Instance = 0;

int main(){
    
    S_Vol *obj;
    obj->getInst();
    S_Vol *obj2 = obj; ;obj2->getInst();// second insta
    return 0;
}
