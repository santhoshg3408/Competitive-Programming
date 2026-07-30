#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
    if(n is less than or equal to 2) trivially YES
    there should be a permutation of form: ababab... -> then YES
    else NO
*/

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    if(n == 2){
        cout << "YES" << endl;
        return;
    }
    int A=0;
    int count_A=0;
    int B=0;
    for(int i=0;i<n;i++){
        if(i==0){
            A = a[i];
            count_A++;
        }
        else{
            if(a[i] == A){
                count_A++;
            }
            else{
                if(B == 0){
                    B = a[i];
                }
                else{
                    if(a[i] != B){
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
        }
    }
    if(count_A == n/2 || count_A == (n+1)/2 || count_A == n){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
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