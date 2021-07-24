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

using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
ll counts = 0;
void dfs(const Graph &G, int v, int N) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) {
        ++counts;
        if (next_v==N) break;
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v, N); // 再帰的に探索

    }
}

int main() {
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
        p("a1")
    }
    ans = INF;
    p("a1")


    seen.assign(N, false);
    for (int v = 0; v < N; ++v) {
        if (seen[N]) continue; // v が探索済みだったらスルー
        dfs(G, v, N); // v が未探索なら v を始点とした DFS を行う
        // ++count;
        ans = min(ans,counts);
    }
    p(ans)
    p("a")
    // p(count)
}
