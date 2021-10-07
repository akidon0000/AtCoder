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
struct input {
    template <class T> operator T() {
        T t;
        std::cin >> t;
        return t;
    }
};

std::set<long long> factors;

void prime_factorize(long long N) {
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        factors.emplace(a);
    }

    // 最後に残った数について
    if (N != 1) factors.emplace(N);
}


// Generated by 2.5.0 https://github.com/kyuridenamida/atcoder-tools
int main() {
  ll n,m;
  cin >> n >> m;
  vector<ll> a(n);
  rep(i,n){
    cin >> a[i];
  }

  vector<bool> integers(m, true);

  rep(i,n){
    int b = a[i];
    prime_factorize(b);
  }

  for (auto const& a: factors) {
      if (a == 1) {
          // do nothing
      } else {
          for (int val = a; val <= m; val += a) {
              integers[val - 1] = false;
          }
      }
  }

  ll ans = count(integers.begin(), integers.end(), true);
  p(ans);

  rep(i,m){
    if (integers[i]) {
        p(i + 1);
    }
  }

  return 0;
}