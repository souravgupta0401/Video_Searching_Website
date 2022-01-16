#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=n-1;i>=1;i--){
            int flag=0;
        for(int j=1;j<=i;j++){
            if(a[j+1]<a[j]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(!flag)break;
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    return 0;
}

