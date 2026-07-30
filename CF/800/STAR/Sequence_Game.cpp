#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
 Placing 1 before required index and this also checks time complexity! /GOOD QN/
*/

void solve(){
    int n;cin >> n;
    vector<int> b(n);
    for(int& x : b) cin >> x;
    if(n == 1){
        cout << 1 << endl;
        cout << b[0] << endl;
    }
    else{
        vector<int> ans;
        vector<int> req_ind;
        for(int i=0;i<n-1;i++){
            ans.push_back(b[i]);
            if(b[i] > b[i+1]){ 
                ans.push_back(1);
            }
        }
        ans.push_back(b[n-1]);
        cout << ans.size() << endl;
        for(int x : ans) cout << x << " ";
        cout << endl;
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