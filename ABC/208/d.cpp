#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using pll = pair<ll, ll>;
using vvp = vector<pair<ll, ll>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using vs = vector<string>;
using vvs = vector<vector<string>>;

#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define pb push_back
#define fi first
#define se second
#define so(v) sort((v).begin(), (v).end());
#define rso(v) sort((v).rbegin(), (v).rend());
#define siz(x) ll((x).size());
#define pow2(x) (1ll << (x)); //2のn乗
//debug用
#define p(x) cout << x << endl;
#define d(x) cout << #x << "; " << x << endl;
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;
#define yn(x) if (x) p("Yes") else p("No")
//DP用
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL << 60; //無限大

bool ok = false;
ll ans=0,num=0,counter=0;
string str;

int main() {
    ll n, m;
    cin >> n >> m;

    vl a(m), b(m), c(m);
    rep(i, m) cin >> a[i] >> b[i] >> c[i], a[i]--, b[i]--;

    vector<vvl> dp(n + 1, vvl(n + 1, vl(n + 1, LINF)));
    rep(i, m) {
        dp[0][a[i]][b[i]] = c[i];
    }

    rep(i, n)
        dp[0][i][i] = 0;

    rep(k, n) {
        rep(i, n) {
            rep(j, n) {
                dp[k + 1][i][j] = min(dp[k][i][j], dp[k][i][k] + dp[k][k][j]);
            }
        }
    }

    ll ans = 0;

    repp(k, n) {
        rep(i, n) {
            rep(j, n) {
                if (dp[k][i][j] != LINF) {
                    ans += dp[k][i][j];
                }
            }
        }
    }

    prt(ans);

    return 0;
}
