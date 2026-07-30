#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*

*/

void solve(){
    int n;cin>>n;
    string s; cin >> s;
    int start = 0,end = n-1,count=n;
    while(start < end){
        if((s[start] == '0' && s[end] == '1')||(s[start] == '1' && s[end] == '0')){
            count-=2;
            start++;
            end--;
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