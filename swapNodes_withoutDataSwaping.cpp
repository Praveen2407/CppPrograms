/******************************************************************************
Praveen R

//input : 1 2 3 4 5 6 
//output : 2 1 4 3 6 5
*******************************************************************************/


#include <iostream>
using namespace std;

struct Node{
    
    int data;
    struct Node* next;
};
struct Node *head;

Node* push(int new_data)
{
    
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = head;    
    head = new_node;
    return head;
}

void swapoddEevn(){
    
    
    if(head == nullptr || head->next == nullptr)
        return;
    
    struct Node *pre, *cur, *last;
    
    pre = head;
    head = head->next;
    cur =head;
    
    while(cur != nullptr){
        if(last)
            last->next = cur;
            
        pre->next = cur->next;  //1 ->3  //3->5
        cur->next = pre;  //2 - 1       //4->3
      
        last = pre;
        pre = pre->next;
        if(pre)
            cur = pre->next;
        else
            break;
    }
}
void display(){
    
    Node *tmp = head;
    while(tmp!=nullptr){    
        cout<< tmp->data ;
        tmp = tmp->next;
    }
    cout <<endl;
}

int main()
{

    head = push(1);head = push(2);
    head = push(3);head = push(4);
    head = push(5);head = push(6);
    display();
    swapoddEevn();
    display();
    return 0;
}
