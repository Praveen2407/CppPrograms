/***************************************
Praveen R
Binary Search Tree
Insert, Search, Display(Inorder), Delete
***************************************/

#include <iostream>
using namespace std;
struct BtsNode{
    int data;
    BtsNode *left;
    BtsNode *right;
};

BtsNode *getNewNode(int value){
    BtsNode *rootPtr = new BtsNode();
    rootPtr->data = value;
    rootPtr->left = nullptr;
    rootPtr->right = nullptr;
    
    return rootPtr;
}

BtsNode* insert(BtsNode *root,int data){
    
    if(root == nullptr)
        root = getNewNode(data);
    else if(data <= root->data)
        root->left = insert(root->left,data);
    else
        root->right = insert(root->right,data);
        
    return root;    
}
bool search(BtsNode *root, int v){
    if(root == nullptr)
        return false;
    else if(root->data == v)
        return true;
    else if(v < root->data)
        return search(root->left,v);
    else
        return search(root->right,v);

}
void display(BtsNode *root){
    if(root == nullptr)
        return;
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}
struct BtsNode* FindMin(BtsNode *root){

    while(root->left != nullptr)
        root = root->left;
    return root;
}
struct BtsNode* deleteNode(BtsNode *root,int data){
    if(root == nullptr)return root;
    else if(data < root->data)root->left = deleteNode(root->left,data);
    else if(data > root->data)root->right = deleteNode(root->right,data);
    else{
        if((root->left == nullptr) && (root->right == nullptr)){
            delete root;
            root = nullptr;
        }
        else if(root->left == nullptr){ 
            struct BtsNode *tmp = root;
            root = root->right;
            delete tmp;
        }
        else if(root->right == nullptr){ 
            struct BtsNode *tmp = root;
            root = root->left;
            delete tmp;
        }
        else{
            struct BtsNode *tmp = FindMin(root->right);
            root->data = tmp->data;
            root->right = deleteNode(root->right,tmp->data);
        }
    }
    return root;
}


int main()
{
    BtsNode *root = nullptr;
    root = insert(root,9);root = insert(root,5);root = insert(root,15);root = insert(root,11);root = insert(root,10);
    root = insert(root,3);root = insert(root,1);root = insert(root,2);root = insert(root,6);
    display(root); int num;
    cout << "\nEnter a number\n";
    cin >> num;
    if(search(root,num)== true)
        cout << "Found\n";
    else
        cout << "Not found\n";
    cout << root->data << endl;
    root = deleteNode(root,5);   
    cout << root->data << endl;
    display(root);
    return 0;
}
