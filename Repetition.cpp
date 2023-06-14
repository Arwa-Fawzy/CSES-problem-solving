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
    string s; cin>>s; char x=s[0]; ll mx=INT_MIN,c=1;
    mx=max(c,mx);
    for(ll i=1; i<sz(s); ++i){
        if(x==s[i]){
            ++c;
            mx=max(c,mx);
        }else{
            x=s[i];
            c=1;
        }
    }cout<<mx;




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
