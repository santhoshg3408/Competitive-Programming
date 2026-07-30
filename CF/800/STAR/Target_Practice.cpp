#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
    spiraling in a square : 
        level 1 : 
            row = 0,9 col = 0,9
        level 2 : 
            row : 
*/

int min_(int a,int b,int c,int d){
    return min(min(a,b),min(c,d));
}

void solve(){
    char grid[10][10];
    int ans = 0;

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'X'){
                int layer = min_(i,j,9-i,9-j) + 1;
                ans += layer;
            }
        }
    }
    cout << ans << endl;
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