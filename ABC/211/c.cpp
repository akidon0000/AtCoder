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
const ll amari = 1000000000+7;


bool ok = false;
ll ans=0,num=0,counter=0;
string str;

vector<int> IntegerToVector(int bit, int N) {
    vector<int> S;
    for (int i = 0; i < N; ++i) {
        if (bit & (1 << i)) { // ビットフラグの判定 AND演算 互いに1のbitを1とする (11111111 & 10101010 は、10101010) true=1
            S.push_back(i);
        }
    }
    return S;
}

int main() {
    // 入力
    cin >> str;
    int N = str.size();
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // bit 全探索
    bool exist = false;

    for (int bit = 0; bit < (1 << N); ++bit) {
        vector<int> S = IntegerToVector(bit, N); // 1回目S{0} 2回目S{1} 3回目S{0,1} 4回目S{2}....

        // 部分集合に対応する総和
        string chokudai = "";
        for (int i : S) chokudai += str[i];
        // d(chokudai)

        // 判定
        if (chokudai == "chokudai") ans++;
    }

    p(ans%amari)
}

// bit全探索　n <= 20まで
