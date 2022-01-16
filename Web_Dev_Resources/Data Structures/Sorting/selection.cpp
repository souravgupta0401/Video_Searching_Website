#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
         int minimum=a[i],pos=i;
         for(int j=i+1;j<=n;j++){
            if(minimum>a[j]){
                minimum=a[j];
                pos=j;
            }
         }
         int temp=a[pos];
         a[pos]=a[i];
         a[i]=temp;
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    return 0;
}

