#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
if k >= 2 then always possible because adjacent can be swapped
if k == 1 then a[n] must be in non-dec. order to get YES

*/

void solve(){
    int n,k;cin >> n >>k;
    ll a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    if(k >= 2){
        cout << "YES" << endl;
        return;
    }
    else{
        int flag = 0;
        for(int i=0;i<n-1;i++){
            if(a[i] > a[i+1]){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long t;cin >> t;
    while(t--){
        solve();
    }

    return 0;
}