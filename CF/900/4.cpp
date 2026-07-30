#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
--- waiting for last sec and adding numbers 
*/

void solve(){
    ll a,b,n;cin >> a >> b >> n;
    vector<ll> X(n);
    for(size_t i = 0; i < n; i++){
        cin >> X[i];
    }
    ll total_time = b-1;
    while(!X.empty()){
        total_time+=min(a,1+X[X.size()-1]);
        total_time--;
        X.pop_back();
    }
    cout << total_time + 1 << endl;
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