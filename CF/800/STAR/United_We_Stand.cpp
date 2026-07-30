#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
 in my logic : 1 1 1 2 test case is getting wrong!
*/
/* 
    My try ::

void solve(){
    int n; cin >> n;
    vector<int> a,b,c;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        a.push_back(x);   
    }
    sort(a.begin(),a.end());
    int i;
    for(i=0;i<n-1;i++){
        if(i!=0 && a[i] == a[i+1]){
            break;
        }
        b.push_back(a[i]);
    }
    while(i<n){
        c.push_back(a[i]);
        i++;
    }
    if(b.empty() || b.back() == c[0] ){
        cout << -1 << endl;
    }
    else{
        cout << b.size() << " " << c.size() << endl;
        for(int x : b){
            cout << x << " ";
        }
        cout << '\n';
        for(int x : c){
            cout << x << " ";
        }
        cout << endl;
    }   
}
*/

void solve(){
    int n;cin >> n;
    vector<int> a(n),b,c;
    for(int& x : a) cin >> x;
    sort(a.begin(),a.end());
    b.push_back(a[0]);
    int i;
    for(i=1;i<n && a[i] == a[0];i++)
        b.push_back(a[i]);
    while(i<n){
        c.push_back(a[i]);
        i++;
    }
    if(c.empty()) cout << -1 << endl;
    else{
        cout << b.size() << " " << c.size() << endl;
        for(int x : b) cout << x << " ";
        cout << endl;
        for(int x : c) cout << x << " ";
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