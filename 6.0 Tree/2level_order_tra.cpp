#include<bits/stdc++.h>

using namespace std;

//class
class Node{
public:
	int data;
	Node* left;
	Node* right;
	//constructor
	Node(int data){
		this->data = data;
		this->left = nullptr;
		this->right	= nullptr;
	}
};
// Create the Node
Node* Create(Node *root){
	cout << "Enter the data:";
	// variable to store the data
	int data;
	// take input 
	cin >> data;
	// check the condition if data id -1
	if(data==-1) return nullptr;

	// create a new node;
	root = new Node(data);
	// recursive call to take the value of the right data
	cout << "Enter the value of the left node of: " << data << endl;
	root->left = Create(root->left);
	//recursive call to take the values of the right data
	cout << "Enter the value of the right node of: " << data << endl;
	root->right = Create(root->right);
}
// function to level order traversal
Node* LevelOrderTra(Node *root){
	//it is possible with the help of the queue
	// Step 1 -> creating the queue and inserting the root node
	queue<Node*> q;
	q.push(root);
	// while loop to traverse the tree
	while(!q.empty()){
		// creating the node
		Node* temp = q.front();
		cout << temp->data << " ";
        // also we have to pop the elements from the queue
        q.pop();
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
	}
}


int main(){
	Node* root = nullptr;
	root = Create(root);
	cout << "Level order traversal of the given tree is:";
	LevelOrderTra(root);
}