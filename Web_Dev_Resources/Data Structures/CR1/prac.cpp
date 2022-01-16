#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    int a[n],sum=0,k=0;
    for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
    }
    for(int i=2;i<=sqrt(sum);i++){
        if(sum%i==0)k=1;
    }
    if(k){
    cout<<n<<endl;
    for(int i=0;i<n;i++)cout<<i+1<<" ";
    cout<<endl;
    }
    else{
        int pos;
        for(int i=0;i<n;i++){
            int temp=sum-a[i],p=0;
            for(int i=2;i<=sqrt(temp);i++){
            if(temp%i==0)p=1;
        }
        if(p){
            cout<<n-1<<endl;
            pos=i;
            break;
        }
        }
    for(int i=0;i<n;i++){
        if(i!=pos)cout<<i+1<<" ";
    }
    cout<<endl;
    }


}
int32_t main() {
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++) {
     //cout<<"Case #"<<i<<":";
     solve();
    }
    return 0;
}
