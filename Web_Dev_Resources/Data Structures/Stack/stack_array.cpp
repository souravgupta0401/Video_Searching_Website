#include<bits/stdc++.h>
using namespace std;
int a[101];
int top=-1;
void push(int);
void pop();
void topelement();
void isempty();
void display();
int main() {
    int n,temp,k=1;
    do{
    cout<<"Enter the operation you want to perform: \n1.Push \n2.Pop \n3.Top element \n4.Check empty \n5.Display \n6.Exit"<<endl;
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
        top+=1;
        a[top]=x;
}
void pop(){
        if(top==-1)cout<<"Underflow"<<endl;
        else {
                cout<<"Deleted element: "<<a[top]<<endl;
                top-=1;
        }
}
void topelement(){
        if(top==-1)cout<<"No element"<<endl;
        else cout<<a[top];
}
void isempty(){
        if(top==-1)cout<<"True"<<endl;
        else cout<<"False"<<endl;
}
void display(){
        cout<<"Stack:"<<endl;
        for(int i=top;i>=0;i--)cout<<a[i]<<endl;
}
