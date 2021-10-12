/******************************************************************************
Praveen R
BTS - Check if given tree is BTS or not

*******************************************************************************/
#include <iostream>
using namespace std;
int MIN= 0;
int MAX =100;

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
void display(BtsNode *root){
    if(root == nullptr)
        return;
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}

// Simple utility to check tree is BTS or not in ricursive
bool isBTSUtil(BtsNode *root, int MIN, int MAX){
    if(root == nullptr)
        return true;
    if((root->data > MIN) && (root->data<MAX) && (isBTSUtil(root->left, MIN,root->data)) && (isBTSUtil(root->right,root->data,MAX)))
        return true;
    else
        return false;
}
bool isBTS(BtsNode *root){
    return isBTSUtil(root,MIN,MAX);
}


bool checkBTS(BtsNode *root){
    bts(root);
    if(!s.empty()){
        for(auto it =s.begin();it != s.end();it++){
            cout << *it <<" ";
        }
        return true;
    }else{
        return false;
    }
}

struct BtsNode* FindMin(BtsNode *root){

    while(root->left != nullptr)
        root = root->left;
    return root;
}


int main()
{
    BtsNode *root = nullptr;
    root = insert(root,7);root = insert(root,4);root = insert(root,1);root = insert(root,6);root = insert(root,9);
    
    display(root); int num;
    
    if((isBTS(root))==true)
        cout << "\nYes, It's BTS\n";
    else
        cout <<"\nNo";
  
    return 0;
    
}
