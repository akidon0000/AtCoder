//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n);++i)
using ll = long long;
using P = pair<int,int>;
#define _GLIBCXX_DEBUG

int main(){
    int N;
    cin >> N;

    ll a[N],b[N];
    ll ans=0;
    for (int i=0; i < N; ++i) cin >> a[i] >> b[i];

    rep(i,N) {
        ans += (b[i] + a[i])*(b[i] - a[i] +1)/2;
    }

    cout << ans << endl;
}