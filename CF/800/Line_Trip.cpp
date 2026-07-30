#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
    have to find min.vol_of_gas_tank -> 0 to x to 0 := 2x
    find max_diff -> max_dist to be covered without refueling that gives ans
*/

void solve(){
    int n,x; cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int max_element = a[0];
    for(int i=0;i<n-1;i++)
        max_element = max(max_element,a[i+1] - a[i]);
    max_element = max(max_element,2*(x - a[n-1]));
    cout << max_element << endl;
    return;
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