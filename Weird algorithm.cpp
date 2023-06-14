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
    ll n; cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }else{
            n=(3*n)+1;
            cout<<n<<" ";
        }
    }


}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    #ifndef ONLINE_JUDGE
        freopen("input.in","r",stdin);
    #endif


}
