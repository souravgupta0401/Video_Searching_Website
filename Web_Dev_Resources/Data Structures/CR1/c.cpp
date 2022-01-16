#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   vector<char>vec;
   char prev,next,ch;
   int ct=0;
   for(int i=0;i<n;i++){
    ch=s[i];
    if(i==0)vec.push_back(ch);
    else if(vec[vec.size()-1]!=ch)vec.push_back(ch);
   }
   int sz=vec.size();
   if(sz==1){
    if(vec[0]=='B'|| vec[0]=='Y')ct+=1;
    else ct+=2;
   }
    else{
   for(int i=0;i<vec.size();i++){
    if(vec[i]=='Y' && i==0)ct++;
    else if(vec[i]=='B' && i==0)ct++;
    else if(vec[i]=='B' && i>0 && vec[i-1]=='G')ct+=0;
    else if(vec[i]=='Y' && i>0 && vec[i-1]=='G')ct+=0;
    else if(vec[i]=='G' && i>0 && vec[i-1]=='Y')ct+=1;
    else if(vec[i]=='G' && i>0 && vec[i-1]=='B')ct+=1;
    else if(vec[i]=='G' && i==0)ct+=2;
    else ct++;
   }
    }
   cout<<ct<<endl;
}
int32_t main(){
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++) {
     cout<<"Case #"<<i<<": ";
     solve();
    }
    return 0;
}
