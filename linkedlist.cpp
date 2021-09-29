/******************************************************************************

Praveen R
Complete Linked list operations
Add(back), Delete(back), Add_Front, Delete_Front, Add_At_Position, Delete_At_Position and Display

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

void add_front(){
    
    list *tmp = head;
    list *new_node = new list();
    new_node->next = nullptr;
    cout << "Enter a data\n";
    cin >> new_node->data;
    
    if(head == nullptr)
        head = new_node;
    else{
        head = new_node;
        new_node->next = tmp;
    }
}

void add_position(int x){
    int count = 1;
    list *tmp = head;
    list *new_node = new list();
    new_node->next = nullptr;
    cout << "Enter a data\n";
    cin >> new_node->data;
    
    if((head == nullptr) && (x == 1))
        head = new_node;
    else if( x == 0){
        cout << "Invalid Position\n";
        return;
    }
    else if( x == 1){
        new_node->next =head->next;
        head->next = new_node; 
    }else{
        for(int i=1; i<x && tmp->next != nullptr;tmp=tmp->next,i++){
            count++;
        }
        if( x <= count){
            new_node->next = tmp->next;
            tmp->next = new_node;
        }else{
            cout << "Invalid Position\n";
            cout << "Total elements count is:"<<count<<endl;
            return;
        }
    }
}
void del_front(){

    list *ptr = head;
    
    int x ;
    if(head == nullptr){
        cout << "List is empty\n";
        return;}
    else if(head->next == nullptr){
        x = head->data;
        head = nullptr;
    }else{
        head = head->next;
        x = ptr->data;
        ptr->next = nullptr;
    }
    cout << "Deleted element is :" << x <<endl;
}
void del_position(int x){

    int count = 1;
    list *tmp = head; list *ptr = head; list *pre = head;
    for(int i=1; i<x && tmp->next != nullptr;tmp=tmp->next,i++){
        ptr = tmp;
        count++;
    }
    if(head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    cout << "Total Element are: \t" << count<<endl;
    if((x > count) || (x <= 0)) {
        cout << "Invalid Position\n";
        return;    
    }
    if( x == 1){
        cout << "Deleted Element is: \t" << head->data<<endl;
        if(head->next == nullptr)
            head = nullptr;
        else{
            head = head->next;
            pre->next = nullptr;
        }
    }else{
        cout << "Deleted Element is: \t" << tmp->data<<endl;
        if(tmp->next == nullptr){
            ptr->next = nullptr;
        }else{
            ptr->next = tmp->next;
            tmp->next = nullptr;
        }
    }
            
}

int main()
{
    bool check = true;
    while(check ){
        int input,x;
        cout << "Select the options form below\n";
        cout << "1: Add\t2:Delete\t3:Display\t4:Add_Front\t5:Delete_Front   6:Add_Position  7:Delete_Position   8:Exit\n";
        cin >> input;
        
        switch(input){
            case 1: add();
                    break;
            case 2: del();
                    break;
            case 3: display();
                    break;
            case 4: add_front();
                    break;
            case 5: del_front();
                    break;
            case 6: cout << "Enter the position to add\n";
                    cin >> x;
                    add_position(x);
                    break;
            case 7: cout << "Enter the position to delete\n";
                    cin >> x;
                    del_position(x);
                    break;
            case 8: cout << "Thank you\n";
                    check = false;
        }
    }
    return 0;
}
