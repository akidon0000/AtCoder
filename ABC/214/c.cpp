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
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;
#define f2(x) for (long unsigned int i = 0; i < x.size(); i++) for (long unsigned int j = 0; j < x[i].size(); j++) cout << #x << "[" << i << "][" << j << "]; " << x[i][j] << endl;

const ll INF = 1LL << 60;  //無限大
const ll mod = 1000000007; //10^9 + 7
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }


int main(){

  ll n;
  cin >> n;

  vector<ll> a(n), b(n);

  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];

  vector<ll> c(n);

  // 無限大の値
  // const long long INF = 1LL << 60;

  // // DP テーブル
  // long long dp[100010];

  // // DP テーブル全体を初期化 (最小化問題なので INF に初期化)
  // for (int i = 0; i < 100010; ++i) dp[i] = INF;

  // // 初期条件
  // dp[0] = 0;

  // // ループ
  // for (int i = 0; i < n; ++i) {
  //     chmin(dp[なにか], dp[なにか] + なにか);
  // }

  // // 解を得て出力
  // cout << dp[n-1] << endl;















  ll timer = 0, ans = 0;

  // 初回
  timer = b[0];
  c[0] = timer;
  timer += a[0];

  rep1(i, 1, n){
    if (timer > b[i]) {
      timer = b[i];
    }
    c[i] = timer;
    timer += a[i];
  }

  rep(i, n){
    if (timer > b[i]) {
      timer = b[i];
    }
    if (c[i] > timer ){
      c[i] = timer;
    }
    timer += a[i];
  }

  for (int i: c) cout << i << endl;


  return 0;
}
