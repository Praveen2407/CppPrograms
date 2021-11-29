/*********************************************************
Praveen R
Linked list 
Input - 1122345531
output- 3431

Delete consucutive number present in linked list
***********************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//list 1,2,2,3,4,5,5,3
//output  1,3,4,3


#include <iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};

struct Node *head;
/*
Node *createNewNode(int data){
    struct Node *newNode;
    newNode = new Node;
    newNode->data =data;
    newNode->next = nullptr;
    
    return newNode;
}*/

Node* insert(int data){
    
    
    struct Node* tmp;
    if(head == nullptr){
        tmp = new Node;        //createNewNode(data);
        tmp->data = data;
        tmp->next = nullptr;
        head = tmp;
    }
    
    else if(head->next == nullptr){
        tmp = new Node;        //createNewNode(data);
        tmp->data = data;
        tmp->next = nullptr; 
        head->next = tmp;
    }
    else{
    struct Node* cur = head;
    while(cur->next != nullptr)
        cur=cur->next;
    
    tmp = new Node;        //createNewNode(data);
    tmp->data = data;
    tmp->next = nullptr;
    cur->next = tmp;
    }
    return head;
}


void display(){
    
    struct Node* tmp = head;
    
    while(tmp != nullptr){
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    
}

void deleteNode(){
    
    struct Node *tmp, *cur, *pre;
    int value = 0;
    
    tmp = head; cur = head; pre = head;
    
    if(head == nullptr)
        return;
        
    else if(head->next == nullptr)
        return;
    else{
        while(tmp!=nullptr){
        
        if(value != tmp->data){
            value = tmp->data;
            cur = tmp;
            tmp= tmp->next;
        }
        else{
            if(cur == head){
                head = tmp->next;
            }
            else{
                while(pre->next != cur)
                    pre= pre->next;
            
                pre->next = tmp->next;
            
            }
            tmp = pre->next;
            cur = tmp;
        }
        
    }
    /*tmp->next = nullptr;
    cur->next = nullptr;
    delete tmp;
    delete cur;*/
    }
}


int main()
{

    head = insert(1);
    head = insert(1);
    head = insert(2);
    head = insert(2);
    head = insert(3);
    head = insert(4);
    head = insert(5);
    head = insert(5);
    head = insert(3);
    head = insert(3);
    
    cout << "Original data"<<endl;
    display();
    deleteNode();
    cout<<"\nAfter delete\n";
    display();
    
    return 0;
}
