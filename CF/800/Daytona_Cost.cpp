#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
if x belongs to array then consider subsegment of array which only consists of that element
then it is true -> if (x belongs to array) then YES
                   else NO
*/

void solve(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] == k){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
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