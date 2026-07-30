#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
 peak can be swapped with next element then can the array be sorted?
solution:=  for a[0] = 1, we can sort the array because take the largest element of 
            the array it follows the peak rule and keep on swapping till last 
            similarly take the largest element in the remaining sub-array ...
            you will get sorted array

            for a[0] != 1, we can never get sorted array because 1 can't go left
*/


// Recursion is bad takes much time here!
/*
void solve(vector<int>& v){
    if(is_sorted(v.begin(),v.end())){
        cout << "YES" << endl;
        return;
    }
    int first_peak_idx = 0;
    for(int i=0;i<v.size()-2;i++){
        if(v[i] < v[i+1] && v[i+1] > v[i+2]){
            first_peak_idx=i+1;
            break;
        }
    }
    if(first_peak_idx == 0){
        cout << "NO" << endl;
        return;
    }
    else if(first_peak_idx != 0 && first_peak_idx != n-1){
        int c = v[first_peak_idx];
        v[first_peak_idx] = v[first_peak_idx + 1];
        v[first_peak_idx+1] = c; 
        solve(v);
        return;
    }
}
// This method gives wrong becuase you can't ignore the cases where 
// -ordering of swaps is important, Here we are simply just swapping 
// -as we get a first peak
void solve(){
    int n;cin >> n;
    vector<int> v(n);
    for(int &x: v) cin >> x;

    for(int attempts=0;attempts < n*n;attempts++){
        if(is_sorted(v.begin(),v.end())){
            cout << "YES" << endl;
            return;
        }

        bool swapped = false;
        for(int i=0;i<n-2;i++){
            if(v[i] < v[i+1] && v[i+1] > v[i+2]){
                swap(v[i+1],v[i+2]);
                swapped = true;
                break; // Try again from start with this new vector
            }
        }
        if(!swapped) break; // No more swaps possible
    }
    cout << "NO" << endl;
}
*/

void solve(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    if(a[0] == 1){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
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