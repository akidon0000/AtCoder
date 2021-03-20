/////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, c, n) for (int i = c; i < (n); ++i)
#define yn(ok, True, False) if (ok) { p(True) } else {p(False)};
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x)                         \
  for (int i = 0; i < x.size(); i++) \
    cout << #x << "[" << i << "]; " << x[i] << endl;

int a, b, c, i, j, m, n, M, N, L, R, ans = 0, counter = 0, num = 0;
long long llans = 0, llcounter = 0, llnum = 0;
string str, str1, str2, str3;
bool ok = false;


int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, 0, h) cin >> s[i];
  rep(i,0,h-1)rep(j,0,w-1){
    int cnt = 0;
    rep(di, 0, 2) rep(dj, 0, 2) if (s[i + di][j + dj] == '#') cnt++;
    if (cnt ==1 || cnt == 3)
      ++ans;
  }
  p(ans)


  return 0;
}
