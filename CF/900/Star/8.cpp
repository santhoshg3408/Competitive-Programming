#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Observations:
/*
keep track of max and min possible no. in my set and when < to > or > to < happens then
place max and min resp.. to 

Fk I have taken prev_char but instead We should check next_char : greedy algo

Crucial TestCase : >><>><>

*/

void solve(){
    ll n; cin >> n;
    string s; cin >> s;\
    vector<ll> a;
    a.push_back(1ll);
    ll start = 1;
    ll max_ = 1;
    ll min_ = 1;
    char next_char = '0';
    for(size_t i=0; i<s.length()-1;i++){
        next_char = s[i+1];
        if (s[i] == '>') {
            start--;
            min_ = min(min_,start);
            if(next_char == '>') a.push_back(start);
            else {
                start = min_;
                a.push_back(min_);
            }
        }
        else{
            start++;
            max_ = max(max_,start);
            if(next_char == '<') a.push_back(start);
            else{
                start = max_;
                a.push_back(max_);
            }
        }
    }
    if(s[s.length()-1] == '>'){
        start--;
        min_ = min(min_,start);
        a.push_back(start);
    }
    else{
        start++;
        max_ = max(max_,start);
        a.push_back(start);
    }
    unordered_set<ll> unique_elements(a.begin(),a.end());
    cout << unique_elements.size() << endl;
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