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


int main(){
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }

  long long ans = 0;
  for (int i = 0; i < N; i++){
    ans += A[i] * A[i] * (N - 1);
  }
  long long sum = 0;
  for (int i = 0; i < N; i++){
    ans -= sum * A[i] * 2;
    sum += A[i];
  }
	cout<<ans<<endl;
}
