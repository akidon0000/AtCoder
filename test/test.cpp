#include <iostream>
#include <vector>
using namespace std;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {

  // Step1
  const long long INF = 1LL << 60;
  long long dp[100010];
  for (int i = 0; i < 100010; ++i) dp[i] = INF;

  // Step2
  dp[0] = 0;

  // 入力
  int N;
  long long h[100010];
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> h[i];

  // Step3
  for (int i = 0; i < N; ++i) {
    chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
  }

  // Step4
  cout << dp[N-1] << endl;
}
