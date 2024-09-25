#include<bits/stdc++.h>
using namespace std;

//creating the clas 
class Node{
public:
    Node* left;
    int data;
    Node* right;
    // creatig the cunstuctor
    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};


// function to create the tree
Node* Create(Node* root)
{
    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    if(data==-1){
        return NULL;
    }
    root = new Node(data);
    // creating node left side of the given root node
    cout << "Enter data for inseting left of node: " << data << endl;
    root->left = Create(root->left);
    cout << "Enter data for inserting right of node: " << data << endl;
    root->right = Create(root->right);
    return root;

}

// function to display the tree
Node* Display(Node* root){
    if(root==NULL) return root;
    cout << root->data << " ";
    Display(root->left);
    Display(root->right);
}

int main(){

    Node* root = NULL;
    root = Create(root);
    Display(root);

    return 0;
}