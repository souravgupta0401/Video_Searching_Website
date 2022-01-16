#include<bits/stdc++.h>
using namespace std;
int a[100],n;
int f=-1,r=-1;
void enqueue(int);
void dequeue();
int front_element();
bool isempty();
void display();
void create();
int main() {
    int n,temp,k=1;
    do{
    cout<<"Enter the operation you want to perform: \n1.Enqueue \n2.Dequeue \n3.Front element \n4.Check empty \n5.Display \n6.Exit \n7.Create New queue"<<endl;
    cin>>n;
    switch(n){
        case 1: cout<<"Enter Element :";
        cin>>temp;
        enqueue(temp);
        break;
        case 2:
        dequeue();
        break;
        case 6:
        k=0;
        break;
        case 5:
        display();
        break;
        case 7:
        create();
        break;
        default:
        cout<<"Choose valid option";
        }}while(k);
    return 0;
}
void enqueue(int x){
        if(r==n-1){
                cout<<"Queue is Full"<<endl;
            return;
        }
        else if(isempty()){
            f=0;r=0;
            a[r]=x;
            display();
        }
        else {
            r+=1;
            a[r]=x;
            display();
        }
}
void dequeue(){
        if(isempty())return;
        else if(f==r){
            cout<<front_element()<<endl;
            f=-1;
            r=-1;

        }
        else {
                cout<<front_element()<<endl;
            f+=1;
            display();
        }
}
int front_element(){
        if(f==-1)cout<<"No element"<<endl;
        else return(a[f]);
}
bool isempty(){
        if(f==-1 && r==-1)return true;
        else return false;
}
void display(){
        cout<<"Queue:"<<endl;
        for(int i=f;i<=r;i++)cout<<a[i]<<" ";
}
void create(){
        int n;
        cout<<"Queue(Enter elements):"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        f=0;
        r=n-1;
}
