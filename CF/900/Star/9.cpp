#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
 Crucial case : 1 4 3 2 5 9 7 8 6 10, Here 2 and 3 are coming but
 they are relatively prime so 1 is ans
*/

void solve(){
    ll n;cin >>n;
    vector<ll> a(n);
    for(auto& x : a){
        cin >> x;
    }
    ll min_ = -1;
    for(size_t i=0; i<n; i++){
        if(min_ == -1ll){
            min_ = abs(a[i]-i-1);
            continue;
        }
        if(min_ == 1) break;
        if(a[i]!= i+1) min_ = __gcd(min_,abs(a[i]-i-1));
    }
    cout << min_ << endl;
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