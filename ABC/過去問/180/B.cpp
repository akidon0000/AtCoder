//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n);++i)
using ll = long long;
using P = pair<int,int>;
#define _GLIBCXX_DEBUG

int main(){
    ll N;
    cin >> N;
    vector<int> x(N);
    rep(i,N) cin >> x[i];
    {
        ll ans = 0;
        rep(i,N) ans+=abs(x[i]);
        cout << ans << endl;
    }
    {
        ll ans = 0;
        rep(i,N) ans+=ll(x[i])*x[i];
        cout << fixed << setprecision(15) << ans << endl;
    }
    {
        int ans = 0;
        rep(i,N) ans=max(ans,abs(x[i]));
        cout << ans << endl;
    }
}