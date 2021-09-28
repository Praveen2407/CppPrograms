/******************************************************************************
Praveen R
Simple Linked list : Add(), Delete() and display

*******************************************************************************/
#include <iostream>
using namespace std;
class list;
list *head;
class list{
    public:
    int data;
    list *next;
    list():next(nullptr){}
};
void add(){
    list *ptr = head;
    list *tmp = head;
    
    list *new_node = new list();
    cout << "enter a data\n";
    cin >> new_node->data;
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

void del(){
    list *ptr = head;
    list *tmp = head;
    int x ;
    if(head == nullptr){
        cout << "List is empty\n";
        return;}
    else if(head->next == nullptr){
        x = head->data;
        head = nullptr;
    }else{
        while(ptr->next != nullptr){
            tmp = ptr;
            ptr = ptr->next;
        }
        x = ptr->data;
        tmp->next = nullptr;
    }
    cout << "Deleted element is :" << x <<endl;
}

void display(){
    list *ptr = head;
    list *tmp = head;

    if(head == nullptr)
        cout << "List is empty\n";
    else if(head->next == nullptr){
        cout << "Element in list is: " << head->data <<endl; 
    }
    else{
        cout << "Elements in list are:"<<endl;
        while(ptr->next != nullptr){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << ptr->data << endl;
    }
}

int main()
{
    bool check = true;
    while(check ){
        int input;
        cout << "Select the options form below\n";
        cout << "1: Add\t 2:Delete\t 3:Display\t 4:Exit\n";
        cin >> input;
        
        switch(input){
            case 1: add();
                    break;
            case 2: del();
                    break;
            case 3: display();
                    break;
            case 4: cout << "Thank you\n";
                    check = false;
        }
    }
    return 0;
}
