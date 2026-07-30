#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
if 10 moves have passed and vanya doesn't win then vora wins
vanya wins if on her move she gets integer divisible by 3
they play optimally -> vora tries to get that number away from 3
first move by vanya 
*/

void solve(){
    int n;cin >>n;
    if(n%3 == 0) cout << "Second" << endl;
    else cout << "First" << endl;
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