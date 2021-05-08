#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define yn(ok, True, False) if (ok) { p(True) } else {p(False)};
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

bool ok = false;
vector<int> datas;
const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }



int main(){
  int N;
  cin >> N;
  long long dp[N][5] = {0};

  rep(i,N){
    rep(j,5){
      cin >> dp[i][j];
    }
  }


  // DPループ
  for (int i = 0; i < N; ++i) {
    for (int sum_w = 0; sum_w <= 3; ++sum_w) {

      // i 番目の品物を選ぶ場合
      if (sum_w - weight[i] >= 0) {
        chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
      }

      // i 番目の品物を選ばない場合
      chmax(dp[i+1][sum_w], dp[i][sum_w]);
    }
  }



  p(ans)



  return 0;
}
