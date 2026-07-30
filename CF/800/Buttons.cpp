#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*

*/

void solve(){
    int a,b,c;cin >> a >> b >> c;
    if(c%2 == 1){
        if(b > a) cout << "Second" << endl;
        else cout << "First" << endl;
    }
    else{
        if( b>= a) cout << "Second" << endl;
        else cout << "First" << endl;
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