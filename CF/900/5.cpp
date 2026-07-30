#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
    xor of all if n : even -> twice
    xor of all but not last one if n : odd -> twice and then xor[n-1,n] -> twice
*/      

void solve(){
    int n;cin >> n;
    vector<int> a(n);
    for(int& x : a){
        cin >> x;
    }
    if(n%2 == 0){
        cout << 2 << endl << 1 << " " << n << endl << 1 << " " << n << endl;
    }
    else{
        cout << 4 << endl << 1 << " " << n-1 << endl << 1 << " " << n-1 << endl;
        cout << n-1 << " " << n << endl << n-1 << " " << n << endl;
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