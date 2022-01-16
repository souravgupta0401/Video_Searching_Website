#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=2;i<=n;i++){
            int temp=a[i];
        for(int j=i-1;j>=1;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
                a[j]=temp;
            }
            else break;
        }
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    return 0;
}

