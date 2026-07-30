#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
    picking least difference b/w elements
    each operation decreases their diff by 2
    we need to apply operation until diff becomes opposite sign
*/

void solve(){
    int n;cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    if(!is_sorted(a.begin(),a.end())) cout << 0 << endl;
    else{
        int diff = a[1] - a[0];
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(diff > (a[i+1] - a[i])){
                diff = a[i+1] - a[i];
            }
        }
        while(diff>=0){
            diff -= 2;
            ans++;
        }
        cout << ans << endl;
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