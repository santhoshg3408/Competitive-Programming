#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*

*/

void solve(){
    int n;cin >> n;
    vector<int> v(n);
    for(auto& x : v)cin >> x;
    int i=0,longest=0,curr=0;
    while(i<n){
        if(v[i] == 0){
            curr++;
        }
        else{
            curr=0;
        }
        i++;
        if(curr > longest) longest = curr;
    }
    cout << longest << endl;
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