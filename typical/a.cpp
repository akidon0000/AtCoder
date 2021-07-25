// 長さ L [cm] のようかんがあります。
// N 個の切れ目が付けられており、左から i 番目の切れ目は左から A[i] [cm] の位置にあります。

// あなたは、N 個の切れ目のうち K 個を選び、ようかんを K+1 個のピースに分割したいです。そこで、以下の値をスコアとします。
// ・K+1 個のピースのうち、最も短いものの長さ
// スコアが最大になるように分割する場合に得られるスコアを求めよ。

// 【制約】
// ・1 ≦ K ≦ N ≦ 10^5
// ・0 < A[1] < A[2] < ... < L ≦ 10^9
// ・入力はすべて整数

// 【入力形式】
// ../sample/001.txt 参照

// https://github.com/E869120/kyopro_educational_90/blob/main/editorial/001.jpg

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

// めぐる式二分探索法

ll N,L,K;
ll lists[1 << 18];

bool solve(ll mid) {
    ll count = 0, beforeLists = 0;

    rep1(i,1,N) {
      if (lists[i] - beforeLists >= mid && L - lists[i] >= mid) {
        count++;
        beforeLists = lists[i];
      }
    }

    if (count >= K){
      return true;
    }else{
      return false;
    }
}

int main(){
  cin >> N >> L;
  cin >> K;
  rep(i,N) cin >> lists[i];

  ll left = -1;
  ll right = L + 1;

  while (right - left > 1) {
    ll mid = left + (right - left) / 2; // 真ん中を取得 値切り上げ

    if (solve(mid)){
      left = mid;
    }else{
      right = mid;
    }
  }

  p(left);

  return 0;
}
