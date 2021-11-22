/***************************************
Praveen R
Convert Binary to Dec, which binary number are stored in linked list

***************************************/

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

struct Node* head = nullptr;

void add(int d){
    
    Node *ptr = head;
    Node *new_node = new Node;
    new_node->data =d;
    new_node->next = nullptr;
    
    if(head == nullptr){
        head = new_node;
    }
    else if( head->next == nullptr){
        head->next = new_node;
    }else{
        
        while(ptr->next != nullptr)
            ptr = ptr->next;
        ptr->next = new_node;
    }
}
int countNodes(){
    Node *cur = head;int i=0;
    while(cur!=nullptr)
    { 
        cur=cur->next;
        i++;
    }
    return i;
}
void ConvertBin_Dec(){
    int count = countNodes();
    Node *cur = head;   
    int a[count]; int i=0;
    while(cur != nullptr){
        cout << cur->data<<" ";
        a[i]=cur->data;i++;
        cur = cur->next;
    }
    int dec_value = 0; 
    int base = 1; 
    for(i--;i>=0;i--){
        int last_digit = a[i];
        dec_value += last_digit * base;
        base = base * 2;
    }
    cout << "Decimal: " << dec_value;
}

int main()
{
    add(0); add(1);
    add(0); add(1);
    add(1); add(0);   // add(1); add(0);
    ConvertBin_Dec();
    return 0;
}
