/* Binary tree - Level Order Traversal */
#include<iostream>
#include<queue>
using namespace std;

struct Node {
	char data;
	Node *left;
	Node *right;
	Node *qdata;
	Node *next;

};
struct Node* front1 = NULL;
struct Node* rear = NULL;
void Enqueue_ll(Node* x) {
	struct Node* temp =
		(struct Node*)malloc(sizeof(struct Node));
	temp->qdata =x;
	temp->next = NULL;
	if(front1 == NULL && rear == NULL){
		front1 = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}
Node* Front() {
	if(front1 == NULL) {
		cout<<"Queue is Empty"<<endl;
		return 0;
	}
	return front1->qdata;
}
void Dequeue_ll() {
	struct Node* temp = front1;
	if(front1 == NULL) {
		cout<<"Queue is Empty"<<endl;
		return;
	}
	if(front1 == rear) {
        //cout<<"Removed Element: "<<front1->qdata<<endl;
		front1 = rear = NULL;
	}
	else {
	    //cout<<"Removed Element: "<<front1->data<<endl;
		front1 = front1->next;
	}
	delete(temp);
}
bool isempty() {
	if(front1 == NULL && rear==NULL) {
		return true;
	}
	return false;
}
// Function to print Nodes in a binary tree in Level order
void LevelOrder(Node *root) {
	if(root == NULL) return;
	Enqueue_ll(root);
	//while there is at least one discovered node
	while(!isempty()) {
		Node* current = Front();
		Dequeue_ll(); // removing the element at front
		cout<<current->data<<" ";
		if(current->left != NULL) Enqueue_ll(current->left);
		if(current->right != NULL) Enqueue_ll(current->right);
	}
}
// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = (struct Node*)malloc(sizeof(struct Node));
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data) root->left = Insert(root->left,data);
	else root->right = Insert(root->right,data);
	return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
                M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z');
	root = Insert(root,'A'); root = Insert(root,'C');
	//Print Nodes in Level Order.
	LevelOrder(root);
}
