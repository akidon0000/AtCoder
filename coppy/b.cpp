// https://qiita.com/akidon0000/items/019c1a6bcb494f0252ea
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

template<typename T> inline void errv(T& v) { for (auto x: v) cerr << x << " "; cerr << endl; }
template<typename T> inline void errvPair(T& v) { for (auto x: v) cerr << "first: " << x.first << " second: " << x.second << endl; cerr << endl; }
template<typename T> inline void errvMap(T& v) { auto iter = v.begin(); while (iter != v.end()) { cout << "[" << iter->first << "," << iter->second << "]\n"; iter++;}}
template<typename T> inline void dbgn(string n, T x) { cerr << n << ": " << x << endl; }
template<typename T> inline void dbgn(string n, vector<T>& v) { cerr << n << ": "; errv(v); }
template<typename T> inline void dbgn(string n, vector<vector<T>>& m) { cerr << n << ":" << endl; for (auto& v: m) errv(v); }
template<> inline void dbgn(string n, vector<pair<string,long long int>>& p) { cerr << n << ":" << endl; errvPair(p); }
template<> inline void dbgn(string n, vector<pair<long long int,string>>& p) { cerr << n << ":" << endl; errvPair(p); }
template<> inline void dbgn(string n, vector<pair<long long int,long long int>>& p) { cerr << n << ":" << endl; errvPair(p); }
template<> inline void dbgn(string n, map<string,long long int> p) { cerr << n << ": " << endl; errvMap(p); }

#define _sel2(_1, _2, x, ...) x
#define _sel3(_1, _2, _3, x, ...) x
#define _repn(i, n) for (long long int i = 0; i < (n); i++)
#define _reps(i, a, b) for (long long int i = (a); i < (b); i++)
#define _rrepn(i, n) for (long long int i = (n) - 1; i >= 0; i--)
#define _rreps(i, a, b) for (long long int i = (b) - 1; i >= (a); i--)
#define _print(x) cout << x << endl;
#define _printDec(x, num) cout << fixed << setprecision(num) << x << endl;
#define _printBoolean(x, yes, no) cout << (x?yes:no) << endl;

// 以下使用するコマンド
using ll = long long int;
using ld = long double;
using pll = pair<ll, ll>;
using psl = pair<string, ll>;
using pls = pair<ll, string>;
using vl = vector<ll>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;
using vvl = vector<vector<ll>>;
using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vvs = vector<vector<string>>;
using vpll = vector<pair<ll, ll>>;
using vpsl = vector<pair<string, ll>>;
using vpls = vector<pair<ll, string>>;
using mll = map<ll,ll>;
using msl = map<string,ll>;
using mls = map<ll,string>;

#define all(a) (a).begin(),(a).end();
#define rall(a) (a).rbegin(),(a).rend();
#define so(v) sort((v).begin(), (v).end());
#define rso(v) sort((v).rbegin(), (v).rend());
#define len(x) ll((x).size())

#define rep(i, ...) _sel2(__VA_ARGS__, _reps, _repn)(i, __VA_ARGS__)
#define rrep(i, ...) _sel2(__VA_ARGS__, _rreps, _rrepn)(i, __VA_ARGS__)
#define repa(it, lists) for (auto it: lists)
#define p(...) _sel3(__VA_ARGS__, _printBoolean, _printDec, _print)(__VA_ARGS__)
#define d(x) dbgn(#x, x);

const ll INF = 1LL << 60;  //無限大
const ll MOD = 1000000007; //10^9 + 7

int main(){

  return 0;
}
