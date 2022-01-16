#include<bits/stdc++.h>
using namespace std;
#define max_size 10
int a[max_size];
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
        if((r+1)%max_size==f){
                cout<<"Queue is Full"<<endl;
            return;
        }
        else if(isempty()){
            f=0;r=0;
            a[r]=x;
            display();
        }
        else {
            r=(r+1)%max_size;
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
            f=(f+1)%max_size;
            display();
        }
}
int front_element(){
        if(f==-1)cout<<"No element"<<endl;
        else return(a[f%max_size]);
}
bool isempty(){
        if(f==-1 && r==-1)return true;
        else return false;
}
void display(){
        int ct= (r+max_size-f)%max_size+1;
		cout<<"Queue       : ";
		for(int i=0;i<ct; i++)
		{
			int index = (f+i) % max_size; // Index of element while travesing circularly from front
			cout<<a[index]<<" ";
		}
		cout<<"\n\n";
}
void create(){
        int n;
        cout<<"Queue(Enter 10 elements ):"<<endl;
        //cin>>n;
        for(int i=0;i<max_size;i++)cin>>a[i];
        f=0;
        r=max_size-1;
}
