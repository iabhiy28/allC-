#include<bits/stdc++.h>
using namespace std;

// creating the class
class Node{
public:
    int data;
    Node *right;
    Node *left;
    //constructor
    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// function to create the treeB
Node* Create(Node *root){
    cout << "Enter the data: ";
    int data;
    cin >> data;
    //cheack the data
    if(data==-1){
        return nullptr;
    }
    root = new Node(data);
    //to take the input at the very left of the root node
    cout << "Enter the value to insert at the left of the " << data << endl;
    root->left = Create(root->left);
    // to take the input at the right of the give root
    cout << "Enter the value to insert at the right of the "<< data << endl;
    root->right = Create(root->right);
    return root;
}
// function to Dispay the Node
Node* Display(Node *root){
    // condition to return 
    if(root==NULL){
        return NULL;
    }
    Display(root->left);
    cout << root->data << " ";
    Display(root->right);
    return root;
}
// function to return the height of the given tree
int height(Node *root){
    // check the condion to return 
    if(root==nullptr){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right)+1;
    return ans;
}

int main(){
    Node* root = NULL;
    root = Create(root);
    cout << "Height of the given tree will be:";
    cout << height(root);
    return 0;
}
