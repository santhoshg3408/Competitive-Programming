#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*

*/

void solve(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> charMap;
    for(char c : s){
        if(charMap.find(c) == charMap.end()) charMap[c] = 1;
        else charMap[c]++;
    }
    int no_odd = 0;
    for(const auto& pair : charMap){
        if(pair.second%2 == 1) no_odd++; 
    }

    if(no_odd < k+2) cout << "Yes" << endl;
    else cout << "No" << endl;
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