#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;

#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define so(v) sort((v).begin(), (v).end());
#define rso(v) sort((v).rbegin(), (v).rend());

//p(出力) d(デバッグ) f(一次配列用のデバッグ) f2(二次配列用のデバッグ)
#define p(x) cout << x << endl;
#define d(x) cout << #x << "; " << x << endl;
// #define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;
// #define f2(x) for (long unsigned int i = 0; i < x.size(); i++) for (long unsigned int j = 0; j < x[i].size(); j++) cout << #x << "[" << i << "][" << j << "]; " << x[i][j] << endl;

const ll INF = 1LL << 60;  //無限大
const ll mod = 1000000007; //10^9 + 7
int main() {
    ll n;
    cin >> n;

    vector<ll> a(n - 1), b(n - 1);
    vector<deque<ll>> g(n);
    vector<bool> f(n, false);
    rep(i, n - 1) {
        cin >> a[i] >> b[i], a[i]--, b[i]--;
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    rep(i, n) {
        so(rng(g[i]));

    }

    vector<deque<ll>> gg(n);
    queue<ll> q;
    q.push(0);
    f[0] = true;
    while (!q.empty()) {
        auto t = q.front(); q.pop();
        for (auto tt: g[t]) {
            if (!f[tt]) {
                f[tt] = true;
                q.push(tt);
                gg[t].pb(tt);
            }
        }
    }

    stack<ll> s;
    ll c = 0;
    bool first = true;
    while (true) {
        f[c] = true;
        if (first) first = false;
        else cout << " ";
        cout << c + 1;

        bool flag = true;
        rep(i, siz(gg[c])) {
            flag = false;
            auto t = gg[c][i];
            gg[c].pop_front();
            s.push(c);
            c = t;
            break;
        }

        if (flag) {
            if (c == 0) break;
            else c = s.top(); s.pop();
        }
    }

    return 0;
}
