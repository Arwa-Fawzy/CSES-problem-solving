#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) ((v).begin()), ((v).end())
#define foi(n) for (int i=0; i<n; ++i)
#define foj(n) for (int j=0; j<n; ++j)
#define rev(a) reverse(a.begin(), a.end());
#define sz(x) x.size()
#define v(s) vector<int> s

void solve(){
    ll t; cin>>t; ll arr[t-1];
    foi(t-1){
        cin>>arr[i];
    }if(t==2){if(arr[0]==1)cout<<2; else cout<<1;}
    else{
        sort(arr,arr+t-1);
        for(ll i=0; i<t-1; ++i){
            if(arr[i+1]-arr[i]!=1){
                cout<<arr[i]+1<<endl;
                return;
            }
        }
    }




}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    //ll t; cin>>t;
    //while(t--){
        solve();
    //}
    #ifndef ONLINE_JUDGE
        freopen("input.in","r",stdin);
    #endif



}
