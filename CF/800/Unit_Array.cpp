#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
    good : { if no'of -1's are even and no of 1's > -1's }
    in one operation you can change ith element -1 to 1 and viceversa

*/

int good(int ones,int minus_ones){
    if((ones >= minus_ones) && minus_ones%2 == 0) return 0;
    return good(ones+1,minus_ones-1)+1;
}

void solve(){
    int n;cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    int ans=0; 
    int no_ones = 0;
    int no_minus_ones = 0;
    for(int x : a){
        if(x == 1) no_ones++;
        if(x == -1) no_minus_ones++;
    }
    cout << good(no_ones,no_minus_ones) << endl;
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