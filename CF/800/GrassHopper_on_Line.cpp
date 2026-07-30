#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
    when k < x :: thinking about prime factors of x 
*/

void solve(){
    int x,k; cin >> x >> k;
    if(k > x){
        cout << 1 << '\n' << x << endl;
        return;
    }
    if(k == x){
        cout << 2 << '\n' << x-1 << " " << 1 << endl;
        return;
    }
    if(k < x){
        if(x%k !=0){
            cout << 1 << '\n' << x << endl;
            return;
        }
        else{
            cout << 2 << '\n' << x-1 << " " << 1 << endl;
            return;
        }
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