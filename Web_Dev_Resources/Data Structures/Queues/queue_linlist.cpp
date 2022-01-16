#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};
struct Node* front1 = NULL;
struct Node* rear = NULL;
void Print() {
	struct Node* temp = front1;
	cout<<"Elements of the Queue: ";
	while(temp != NULL) {
		if(temp->next!=NULL)cout<<temp->data<<"->";
		else cout<<temp->data;
		temp = temp->next;
	}
	cout<<endl;
}
void Enqueue_ll(int x) {
	struct Node* temp =
		(struct Node*)malloc(sizeof(struct Node));
	temp->data =x;
	temp->next = NULL;
	if(front1 == NULL && rear == NULL){
		front1 = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}

void Dequeue_ll() {
	struct Node* temp = front1;
	if(front1 == NULL) {
		cout<<"Queue is Empty"<<endl;
		return;
	}
	if(front1 == rear) {
        cout<<"Removed Element: "<<front1->data<<endl;
		front1 = rear = NULL;
	}
	else {
	    cout<<"Removed Element: "<<front1->data<<endl;
		front1 = front1->next;
	}
	delete(temp);
	Print();
}
int Front() {
	if(front1 == NULL) {
		cout<<"Queue is Empty"<<endl;
		return 0;
	}
	return front1->data;
}

int main(){
	int k=1,temp,v;
	do{
    cout<<"Enter the operation you want to perform: \n1.Enqueue \n2.Dequeue \n5.Display \n6.Exit"<<endl;
    cin>>v;
    switch(v){
        case 1: cout<<"Elements to Insert (-1 to stop):";
        do{
        cin>>temp;
        if(temp!=-1)Enqueue_ll(temp);
        }while(temp!=-1);
        Print();
        break;
        case 2:
        Dequeue_ll();
        break;
        case 6:
        k=0;
        break;
        case 5:
        Print();
        break;
        default:
        cout<<"Choose valid option";
        }}while(k);
        return 0;
}
