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
// vector<int> datas;
const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大


vector<int> IntegerToVector(int bit, int N) {
    vector<int> S;
    for (int i = 0; i < N; ++i) {
        if (bit & (1 << i)) {
            S.push_back(i);
        }
    }
    return S;
}

int main(){
  int n,ans=0,num=0;
  cin >> n;
  vector<int> datas(n);

  rep(i,n) cin >> datas[i];

  for (int bit = 0; bit < (1 << n); ++bit) {
      // どれを選ぶか
      vector<int> S = IntegerToVector(bit, n);

      // 部分集合に対応する総和
      int sum = 0;
      num = 0;
      for (int i : S) {
        sum = abs(sum);
        sum -= datas[i];
        num++;
      }
      sum = abs(sum);
      if (num == 2){
        // d(sum)
        if (sum % 200 == 0) ans++;
      }


  }
  p(ans)



  return 0;
}

