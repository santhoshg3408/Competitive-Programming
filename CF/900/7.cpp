#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
1 , 2 , ... m || ... , n || ... 
*/

void solve(){
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    for(auto& x : a){
        cin >> x;
    }
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    sort(a.begin(),a.end());
    ll count = 1;
    ll ans = 1;
    for(size_t i=0; i < n-1; i++){
        if(a[i+1] - a[i] <= k){
            count++;
        }
        else{
            ans = max(ans,count);
            count = 1;
        }
    }
    ans = max(ans,count);
    cout << n - ans << endl;
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