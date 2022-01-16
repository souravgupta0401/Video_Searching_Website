#include<bits/stdc++.h>
using namespace std;
int a[100],merged_list[100];
void _merge(int lb,int mid, int ub){
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j])merged_list[k++]=a[i++];
        else merged_list[k++]=a[j++];
    }
    while(i<=mid)merged_list[k++]=a[i++];
    while(j<=ub)merged_list[k++]=a[j++];
    for(int l=lb;l<=ub;l++)a[l]=merged_list[l];
}
void mergesort(int lb,int ub){
    if(lb<ub){
        int index=(lb+ub)/2;
        mergesort(lb,index);
        mergesort(index+1,ub);
        _merge(lb,index,ub);
    }
}
int main(){
    int n;
    cin>>n;
    int lb=1,ub=n;
    for(int i=1;i<=n;i++)cin>>a[i];
    mergesort(lb,ub);
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    return 0;
}

