#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*

*/

void solve(){
    int n;cin >> n;
    int sum=0;
    for(int i=0;i<n-1;i++){
        int a;
        cin >> a;
        sum+=a;
    }
    cout << -1 * sum << endl;
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