#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*

    if 1+2+ ... +k <= x <= n+(n-1)+ ... + (n-(k-1)) :
        Yes
    else no
*/


void solve(){
    ll n,k,x; cin >> n >> k >> x;
    ll low = k*(k+1)/2;
    ll high = k*n - (k*(k-1)/2);
    if(( low < x || low == x) && ( high > x || high == x)) cout << "Yes" << endl;
    else cout << "No" << endl;
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