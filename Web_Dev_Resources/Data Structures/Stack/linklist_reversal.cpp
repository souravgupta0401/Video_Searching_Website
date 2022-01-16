#include<bits/stdc++.h>
using namespace std;
struct node{
        int data;
        struct node* link;
};
struct node* top=NULL;
struct node* head=NULL;
void create_linklist();
void reverse_linklist();
void display_linklist();
void push(node*);
void pop();
void topelement();
bool isempty();
void display();
int main() {
    int n,temp,k=1;
    cout<<"Enter the linklist to be reversed:"<<endl;
    create_linklist();
    display_linklist();
    reverse_linklist();
    return 0;
}
void push(node* x){
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
bool isempty(){
        if(top==NULL)return true;
        else return false;
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
void create_linklist(){
        int k=1,t;
        cout<<"Enter elements(to stop enter -1) :";
        while(k){
            node *temp=(node*)malloc(sizeof(struct node*));
            node *p;
            cin>>t;
            if(t!=-1)temp->data=t;
            else break;
            temp->link=NULL;
            if(head ==nullptr)head=temp;
           else {p=head;
                while(p->link!=NULL){
                p=p->link;
            }
            p->link=temp;
           }

}
}
 void display_linklist(){
   node *temp=head;
   cout<<"List contains"<<endl;
   for(;temp;temp=temp->link)cout<<temp->data<<" ";
   }
void reverse_linklist(){
        node *temp=head;
        while(temp!=NULL){
           push(temp);
           temp=temp->link;
        }
        temp =top;
        head=temp;
        pop();
        while(!isempty()){
            temp->next=top;
            pop();
            temp=temp->link;
            }
            temp->next=NULL;
}
