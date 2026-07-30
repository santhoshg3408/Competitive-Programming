#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
 Q<   colouring all elements in two colours such that sum of all elements of a colour
    have same parity and note that atleast 1 should be coloured with each colour
    give YES or NO 
 
 A<    I will break given array into odd and even elements
        let number of odd and even elements be l and m, then :: 
            if either 0 : YES
            if l is even : YES
            if l is odd : NO
*/

void solve(){
    int n;cin >> n;
    int x;
    int no_odd=0,no_even=0;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%2 == 0) no_even++;
        else no_odd++;
    }
    if(no_odd % 2 == 1) cout << "NO" << endl;
    else cout << "YES" << endl;

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