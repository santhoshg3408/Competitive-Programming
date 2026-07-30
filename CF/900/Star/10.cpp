#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
Using Prefix Sum Method: 
    a_1 + a_2 + ... + a_l-1 + (l-r+1)*k + a_r+1 + ... +a_n
    => total - segment + (r-l+1)*k
*/

void solve(){
    ll n,q; cin >> n >> q;
    vector<ll> a(n);
    ll sum = 0;
    for(size_t i=0; i<n ;i++){
        ll x; cin >> a[i];
        if(i > 0) a[i] += a[i-1];// Prefix Sum
    }
    ll total = a[n-1];
    while(q--){
        ll l,r,k; cin >> l >> r >> k;
        ll add = (r-l+1)*k;
        ll seg = a[r-1] - (l>1 ? a[l-2]:0);
        if((total - seg + add)%2 == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}