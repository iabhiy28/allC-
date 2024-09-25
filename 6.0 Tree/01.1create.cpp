#include<bits/stdc++.h>
using namespace std;


// class 
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    // constructor
    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};
// function to create
Node* Create(Node *root){
    cout << "Enter the data: ";
    int data;
    cin >> data;
    // check the leaf node
    if(data==-1){
        return NULL;
    }
    root = new Node(data);
    cout << "Enter data to insert left of the node: " << data << endl;
    root->left = Create(root->left);
    cout <<"Enter data to insert right of the node: " << data << endl;
    root->right = Create(root->right);
}

// display the values
Node* Display(Node* root){
    if(root==NULL) return root;
    cout << root->data << " ";
    Display(root->left);
    Display(root->right);
}

int main(){
    Node* root = NULL;
    root = Create(root);
    cout << "Inorder traveral of the given tree is: "; 
    Display(root);
    return 0;
}