#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
i<= n-m -> because i = n - m is the last place of defined i such that i+(m-1) is defined
           for string x[at max n-1]   
           
after while loop one more time checked so that twice the length of x after knowing that
x.length > s.length will ensure all permuations of x which may contain substring s
*/

bool check(string x,string s,int n,int m){
    bool flag;
    for(int i=0;i<n-m+1;i++){
        int j=0;
        flag = true;
        for(int temp=i;temp<n && j<m;temp++,j++){
            if(x[temp] != s[j]){
                flag = false;
                break;
            }
        }
        if(flag && (n>m || n==m)) return true;
    }
    return false;
}

void solve(){
    int n,m;cin >> n >> m;
    string x,s;cin >> x >> s;
    int operations=0;
    while(x.length() <= s.length()){
        if(check(x,s,n,m)){
            break;
        }
        operations++;
        x+=x;
        n = x.length();
    }
    if(check(x,s,n,m)){
        cout << operations << endl;
        return;
    }
    operations++;
    x+=x;
    n = x.length();
    if(check(x,s,n,m)) cout << operations << endl;
    else cout << -1 << endl;
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