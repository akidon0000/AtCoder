#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int a = 0, b = 0;
  // Rの個数
  rep(i,n) {
    if (s[i] == 'R') ++a;
  }
  // int ans = max(a,b);
  int ans = a;
  // d(ans)
  rep(i,n) {
    if (s[i] == 'R') --a;
    else ++b;
    int now = max(a,b);
    ans = min(ans, now);
    // d(now)
    // d(ans)
  }
  cout << ans << endl;
  return 0;
}
