#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) ((v).begin()), ((v).end())
#define foi(n) for (long long i=0; i<n; ++i)
#define foj(n) for (long long j=0; j<n; ++j)
#define rev(a) reverse(a.begin(), a.end());
#define sz(x) x.size()
#define v(s) vector<int> s
 
int convert( string s) {
   int x;
   x = stoi( s );
   return x;
}
 

void solve(){
   ll n; cin>>n; ll arr[n],j=0;
   if(n==3||n==2){
       cout<<"NO SOLUTION"<<endl;
   }else{
       for(ll i=1; i<=n; ++i){
           if(i%2==0){
               arr[j]=i;
               ++j;
           }
       }for(ll i=1; i<=n;++i){
           if(i%2!=0||i==1){
               arr[j]=i;
               ++j;
           }
       }
       foi(n){
           cout<<arr[i]<<" ";
       }cout<<endl;
   }
   
}

 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //ll t; cin>>t;
    ll t=1;
    while(t--){
        solve();
    }
    #ifndef ONLINE_JUDGE
        freopen("input.in","r",stdin);
    #endif
    
 
 
}