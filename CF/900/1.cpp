#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
diff is 2a / 2b -> 1 possible 
        0 / a-b / a+b -> 2 possible
        else -> 0
*/

void solve(){
    int a,b,x_k,y_k,x_q,y_q;
    cin >> a >> b >> x_k >> y_k >> x_q >> y_q;
    if(a < b){
        int temp = a;
        a = b;
        b = temp;
    }
    int l = abs(x_k - x_q);
    int m = abs(y_k - y_q);
    if(((l == 2*a) && (m == 2*b)) || ((l == 2*b) && (m == 2*a))) cout << 1 << endl;
    else if(((l == 0) && ((m == 2*a)||(m==2*b))) || (m == 0) && ((l == 2*a)||(l==2*b))) cout << 2 << endl;
    else if(((l == 2*a) || (l == 2*b) || (l == a-b) || (l == a+b)) && ((m == 2*a) || (m == 2*b) || (m == a-b) || (m == a+b))) cout << 2 << endl;
    else cout << 0 << endl;
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