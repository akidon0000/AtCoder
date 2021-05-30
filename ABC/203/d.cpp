#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

bool ok = false;
vector<int> datas;
const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大

string s;

int main() {
    ll n, k;
    ll ans = 0, r = 1000000000;
    cin >> n >> k;
    ll kk = k * k / 2 + 1;
    vector<vector<ll>> a(n, vector<ll> (n));
    rep(i, n) rep(j, n) cin >> a[i][j];
    while (r > ans) {
        int m = (ans + r) / 2;
        vector<vector<ll>> w(n + 1, vector<ll>(n + 1, 0));
        rep(i, n) rep(j, n) {
            w[i + 1][j + 1] = w[i][j + 1] + w[i + 1][j] - w[i][j] + (a[i][j] > m ? 1 : 0);
        }
        ok = true;
        rep(i, n - k + 1) rep(j, n - k + 1) {
            if (w[i + k][j + k] + w[i][j] - w[i + k][j] - w[i][j + k] < kk) {
                ok = false;
                r = m;
                break;
            }
        }
        if (ok) {
            ans = m + 1;
        }
    }
    p(ans)
    return 0;
}
