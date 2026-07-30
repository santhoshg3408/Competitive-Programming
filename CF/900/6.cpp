#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
Just need to find smallest number not divisible by n starting from 1
*/

void solve(){
    ll n; cin >> n;
    int count = 1;
    for(ll i = 2; i <= n; i++){
        if(n%i == 0){
            count++;
        }
        else{
            break;
        }
    }
    cout << count << endl;
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