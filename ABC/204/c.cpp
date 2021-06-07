#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
// #define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

bool ok = false;
vector<ll> v;
vector<pair<ll,ll>> p;
const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大

ll ans=0,num=0,counter=0;
string s;
int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i], a[i]--, b[i]--;

    vector<vector<ll>> g(n);
    rep(i, m) {
        g[a[i]].push_back(b[i]);
    }

    ll ans = 0;

    rep(i, n) {
        queue<ll> q;
        vector<bool> f(n);
        f[i] = true;
        q.push(i);

        while (!q.empty()) {
            auto t = q.front(); q.pop();
            ans++;
            for (auto tt: g[t]) {
                if (f[tt]) continue;
                f[tt] = true;
                q.push(tt);
            }
        }
    }

    p(ans);

    return 0;
}
