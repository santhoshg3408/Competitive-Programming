#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
0 -> empty
-1 -> blocked
1 -> filled
if there exit atleast one 3 empty cells then we fill in the alternate cells and get
water into middle cell and replace this middle cell water into any other cell
and again new water will (infinite minecraft glitch) be in the initial middle cell 
*/

void solve(){
    int n;cin >> n;
    string s;cin >> s;
    int count=0;
    for(int i=0;i<n-2;i++){
        if(s[i] == s[i+1] && s[i+1] == s[i+2] && s[i+2] == '.'){
            cout << 2 << endl;
            return;
        }
        if(s[i] == '.') count++;
    }
    if(s[n-2] == '.') count++;
    if(s[n-1] == '.') count++;

    cout << count << endl;
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