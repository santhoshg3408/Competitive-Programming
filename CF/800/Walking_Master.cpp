#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*

*/

void solve(){
    ll a,b,c,d;cin >> a >> b >> c >> d;
    ll count = 0;
    if(d >= b){
        a+=(d-b);
        count+=(d-b);
        if(c <= a){
            count+=(a-c);
            cout << count << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else cout << -1 << endl;
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