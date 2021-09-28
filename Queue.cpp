/******************************************************************************

Praveen R
Queue Operations : Enque, Deque and Display
*******************************************************************************/
#include <iostream>
using namespace std;

#define MAX 5
class Que{
    int front;
    int rare;
    public:
    int q[MAX];
    Que():front(-1),rare(-1){}

    bool push(){
        if(rare >= MAX-1){
            cout << "Queue is full"<<endl;
            return false;
        }
        int data;
        cout << "Enter a data\n";
        cin >> data;
        if((front >= -1) && (rare <= MAX-1)){
            if(front == -1)
                front =0;
            q[++rare] = data;
            return true;
        }
        return false;
    }
  
    int pop(){
        if(front == -1){
            cout << "Queue is empty"<<endl;
            return 0;
        }
        else if(front <= MAX-1){
            int tmp = q[front];
            if(front >= rare){
                rare =-1;front=-1;
            }else{ 
              front++;
            }
            return tmp;
        }
        return 0;
    }
  
    bool display(){
        int y = rare;
        if(front == -1){
            cout << "Queue is empty\n";
            return false;
        }
        else{
            cout << "Elements in Queue\n";
            for(int i=front;i<=y;++i){
                cout<<" " << q[i]<<" ";
            }
            return true;
        }
    }
};

int main()
{
    Que q1;bool check = true;
    while(check ){
        int input,x;
        cout << "Select the options form below\n";
        cout << "1: Enque\t 2:Deque\t 3:Display\t 4:Exit\n";
        cin >> input;
        
        switch(input){
            case 1: q1.push();
                    break;
            case 2: x = q1.pop();
                    cout << "Deleted element form Queue is: " <<x << endl;
                    break;
            case 3: q1.display();
                    break;
            case 4: cout << "Thank you\n";
                    check = false;
        }
    }
    return 0;
}
