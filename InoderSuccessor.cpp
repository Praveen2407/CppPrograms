/***************************************
Praveen R
C++ program to find Inorder successor in a BST 
******************************/

#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

//Find the Node
struct Node* Find(Node *root,int data){
    if(root == nullptr)
        return nullptr;
    else if(root->data == data)
        return root;
    else if(root->data < data)
        return Find(root->right,data);
    else
        return Find(root->left,data);
    
}
struct Node* FindMin(Node* root, int data){
    
    if(root == nullptr)
        return nullptr;
    while(root->right != nullptr)
        root = root->right;
    return root;
    
}
struct Node* getSucc(Node* root,int data){
    
    
    if(root == nullptr)
        return nullptr;
    struct Node * current  = Find(root,data);
    if(current == nullptr)
        return nullptr;
    if(current->right != nullptr)
        return FindMin(current->right,data);
    else{
        struct Node *Acc = root;
        struct Node *Suc = nullptr;
        
        while(current != Acc){
            if(current->data < Acc->data){
                Suc = Acc;
                Acc = Acc->left;
            }
            else
                Acc = Acc->right;
        }
        return Suc;
    }
}


Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}
//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;
 
	Inorder(root->left);       //Visit left subtree
	printf("%d ",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	            5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);
    
    Inorder(root);

    struct Node *suc =  getSucc(root,1);
    if(suc == nullptr)
        cout << "Suc not found";
    else
        cout<< "\nFor 1 Succ is: " << suc->data;
        
    return 0;
}
