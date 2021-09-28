/******************************************************************************
Praveen R
Stack opertion in C++
Push, Pop and Display

*******************************************************************************/
#include <iostream>
using namespace std;

#define MAX 5
class stk{
    int top;
    public:
    int st[MAX];
    stk():top(-1){}

    bool push(){

        if(top >= MAX-1){
            cout << "Stack is full"<<endl;
            return false;
        }
        int data;
        cout << "Enter a data\n";
        cin >> data;
        if((top >= -1) && (top <= MAX-1)){
            st[++top] = data;
            return true;
        }
        
        return false;
    }
    int pop(){
        if(top == -1){
            cout << "Stack is empty"<<endl;
        }
        else if(top <= MAX-1){
            int tmp = st[top--];
            return tmp;
        }
        
        return 0;
    }
    bool display(){
        int y = top;
        if(top == -1){
            cout << "Stack is empty\n";
            return false;
        }
        else{
            cout << "Elements in stack\n";
            for(int i=y;i>=0;--i){
                cout<<" " << st[y--]<<" ";
            }
            return true;
        }
    }
};
int main()
{
    stk s1;bool check = true;
    while(check ){
        int input,x;
        cout << "Select the options form below\n";
        cout << "1: Push\t 2:Pop\t 3:Display\t 4:Exit\n";
        cin >> input;
        
        switch(input){
            case 1: s1.push();
                    break;
            case 2: x = s1.pop();
                    cout << "Poped element form stack is: " <<x << endl;
                    break;
            case 3: s1.display();
                    break;
            case 4: cout << "Thank you\n";
                    check = false;
        }
    }
    return 0;
}
