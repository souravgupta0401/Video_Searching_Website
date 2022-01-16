#include<bits/stdc++.h>
using namespace std;
struct node{
        int data;
        struct node* link;
};
struct node* top=NULL;
void push(int);
void pop();
void topelement();
void isempty();
void display();
int main() {
    int n,temp,k=1;
    do{
    cout<<"Enter the operation you want to perform: \n1.Insertion \n2.Pop \n3.Top element \n4.Check empty \n5.Display \n6.Exit"<<endl;
    cin>>n;
    switch(n){
        case 1: cout<<"Enter Element :";
        cin>>temp;
        push(temp);
        break;
        case 2:
        pop();
        break;
        case 3:
        topelement();
        break;
        case 4:
        isempty();
        break;
        case 6:
        k=0;
        break;
        case 5:
        display();
        break;
        default:
        cout<<"Choose valid option";
        }}while(k);
    return 0;
}
void push(int x){
        struct node* temp;
        temp=(node *)malloc(sizeof(struct node*));
        temp->data=x;
        temp->link=top;
        top=temp;
}
void pop(){
        struct node* temp;
        if(top==nullptr)cout<<"Underflow"<<endl;
        else {
                temp=top;
                cout<<"Deleted element: "<<temp->data<<endl;
                top=top->link;
                delete(temp);
        }
}
void topelement(){
        if(top==NULL)cout<<"No element"<<endl;
        else cout<<top->data<<endl;
}
void isempty(){
        if(top==NULL)cout<<"True"<<endl;
        else cout<<"False"<<endl;
}
void display(){
        struct node* temp=top;
        cout<<"Stack:"<<endl;
        if(temp==NULL)cout<<"Empty"<<endl;
        else {while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->link;
        }
        }
}
