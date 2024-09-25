#include<bits/stdc++.h>
using namespace std;

// class
class Node{
public:
    int data;
    Node* right;
    Node* left;
    // constructor
    Node(int data){
        this->data = data;
        this->right = nullptr;
        this->left = nullptr;
    }
};

// function to create
Node* Create(Node* root){
    cout <<"Enter the data :";
    int data;
    cin >> data;
    //check val
    if(data==-1){
        return nullptr;
    }
    // create node
    root = new Node(data);
    // now left and the right val
    cout << "Enter the value of the left of the : "<< data << endl;
    root->left= Create(root->left);
    cout << "Enter the value of the right of the : "<<  data << endl;
    root->right = Create(root->right);
    return root;
}
// traversal(inorder)
Node *InorderTra(Node *root){
    if(root==NULL){
        return NULL;
    }
    InorderTra(root->left);
    cout << root->data << " ";
    InorderTra(root->right);
}
// post order traversal
Node *PostOrderTra(Node *root){
    if(root==NULL){
        return NULL;
    }
    PostOrderTra(root->left);
    PostOrderTra(root->right);
    cout << root->data << " ";
}
// preorder Traversal
Node *PreOrderTra(Node *root){
    if(root==NULL){
        return NULL;
    }
    cout << root->data << " ";
    PreOrderTra(root->left);
    PreOrderTra(root->right);
}

int main(){
    // creating the node and intialising it with nullptr
    Node* root = NULL;
    root = Create(root);
    cout << "Inorder Traversal of is: " << InorderTra(root) << endl;
    cout << "Preorder Traversal of is: " <<  PreOrderTra(root) << endl;
    cout << "Postorder Traversal of is: " << PostOrderTra(root) << endl;
    
   
    
    return 0;
}