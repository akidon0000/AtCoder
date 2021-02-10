//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

#define _GLIBCXX_DEBUG
#define ll long long

int main(){
    ll N;
    cin >> N;

    vector<ll> a;
    // set<ll> a;

    for (ll i=1; i*i<=N; i++){
        if (N%i == 0) {
        a.push_back(i);
        if (i != (N/i)) a.push_back(N/i);
        // a.insert(i);
        // a.insert(N/i);
        }
    }
    sort(a.begin(), a.end());
    for (ll i=0; i < a.size(); ++i) cout << a[i] << endl;
    // for(auto it:a)
    // cout<<it<<"\n";
}