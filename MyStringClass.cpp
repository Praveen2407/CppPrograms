#Praveen_Ramakrishnaiah

#Own String class

#include <iostream>
#include <cstring>

using namespace std;

class stringS{
    char *s;
    public:
    stringS(){
        s = NULL;
    }/*
    stringS(char *tmp){
        if (tmp == nullptr)
            s = nullptr;
        else{
        s = new char[strlen(tmp)+1];
        strcpy(s,tmp);}
    }*/
    stringS(int x){
        if (x <= 0)
            s = nullptr;
        else{
            s = new char[x+1];
            cout << "Enter a data \n";
            cin >> s;
        }
    }
    stringS(const stringS &s1){
        s = new char[strlen(s1.s)+1];
        strcpy(s,s1.s);
    }
    ~stringS(){
        delete []s;
    }
    void printS(){
        cout << "String : "<< s<< endl;
    }
    
};
int main()
{
    stringS obj1;
    //char ar[] = "harshitha";
    //stringS obj2{ar};
    stringS obj2(10);
    obj2.printS();
    stringS obj3 = obj2;
    obj3.printS();
    return 0;
}
