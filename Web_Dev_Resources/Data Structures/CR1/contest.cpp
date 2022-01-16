#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,k;
    cin>>n>>k;
    int pos,ans;
    if(n%2!=0)pos=(n+1)/2;
    else pos=n/2;
    if(k>pos)ans=2+(k-pos-1)*2;
    else ans=1+(k-1)*2;
    cout<<ans;
    return 0;
}

