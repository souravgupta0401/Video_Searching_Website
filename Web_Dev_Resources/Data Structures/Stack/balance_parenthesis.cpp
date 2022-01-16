#include<bits/stdc++.h>
using namespace std;
char a[101];
int top=-1;
void push(char);
void pop();
void topelement();
void isempty();
void display();
void check_parenthesis(char a,int );
int main() {
    int n=6,temp,k=1;
    char s[10];
    cout<<"Enter expression: ";
    gets(s);
    check_parenthesis(s,n);
    return 0;
}
void push(char x){
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
void check_parenthesis(char a[],int n){
        for(int i=0;i<n;i++){
         if(a[i]=='(' ||a[i]=='{'||a[i]=='[')push(a[i]);
         else if(a[i]==')' ||a[i]=='}'||a[i]==']'){
            if(isempty()||top()!=a[i])
         }
        }
}
