#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*

*/

void solve(){
    int n;cin >> n;
    vector<ll> a(n);
    for(auto& x : a) cin >> x;
    for(auto x : a){
        cout << n+1-x << " ";
    }
    cout << endl;
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