#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
    if k = 1 x = 1 -> no
    if k > 1 x = 1 -> checks req 
        -> for k=2 if n is even then yes else no
        ->  for k>=3 definitely ans exist
    if k > 1 and x !=1 ->definitely ans exist
*/


void solve(){
    int n,k,x;cin >> n >> k >> x;
    if(k == 1 && x == 1) cout << "No" << endl;
    else if(k == 2 && x == 1){
        if(n%2 == 1) cout << "No" << endl;
        else{
            cout << "Yes\n" << n/2 << endl;
            for(int i=0;i<n/2;i++){
                cout << 2 << " ";
            }
            cout << endl;
        }
    }
    else if(k >= 3 && x == 1){
        cout << "Yes" << endl;
        if(n%2 == 1){
            int temp = n-3;
            cout << temp/2 + 1 << endl;
            for(int i=0;i<temp/2;i++) cout << 2 << " ";
            cout << 3 << endl;
        }
        else{
            cout << n/2 << endl;
            for(int i=0;i<n/2;i++){
                cout << 2 << " ";
            }
            cout << endl;
        }
    }
    else if(k>1 && x!=1){
        cout << "Yes\n" << n << endl;
        for(int i=0;i<n;i++) cout << 1 << " ";
        cout << endl;
    }
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