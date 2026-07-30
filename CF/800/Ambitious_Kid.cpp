#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*

*/

void solve(){
    int n; 
    cin >> n;
    int min;
    cin >> min;
    for(int i=1;i<n;i++){
        int x;
        cin >> x;
        if(abs(min) > abs(x)) min = x;
    }
    cout << abs(min) << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    while(t--){
        solve();
    }
    return 0;
}