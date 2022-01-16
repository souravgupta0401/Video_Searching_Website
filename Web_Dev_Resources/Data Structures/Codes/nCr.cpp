#include<bits/stdc++.h>
using namespace std;
#define int long long
int binexp(int x,int n,int m){
    int res=1;
    while(n!=0){
        if(n%2!=0)res=((res%m)*(x%m))%m;
        n/=2;
        x=((x%m)*(x%m))%m;
    }
    return res;
}
int fac(int n,int m){
    int ans=1;
    for(int i=1;i<=n;i++)ans=((ans%m)*(i%m))%m;
    return ans;
}
void solve(){
    int n,r,m;
    cin>>n>>r>>m;
    int num1=fac(n,1e9);
    int num2=fac(n-r,1e9);
    int num3=fac(r,1e9);
    int ans1=binexp(num2,m-2,1e9);
    int ans2=binexp(num3,m-2,1e9);
    int ans=((num1)*(ans1)*(ans2))%m;
    cout<<ans;
}

int32_t main() {
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++) {
     solve();
    }

    return 0;
}
