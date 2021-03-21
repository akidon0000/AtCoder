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
#define f(x) for (int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

int a, b, c, d, e, f, g, i, j, m, n, ans = 0, counter = 0, num = 0;
long long la, lb, lc, ld, lans = 0, lcounter = 0, lnum = 0;
string str, str1, str2, str3;
bool ok = false;
vector<int> datas(100);

int main(){

  cin >> a >> b >> c ;
  c = c * 1000;
  d = (c + b - 1) / b;
  e = c / a;

  if(d>e){
    p("UNSATISFIABLE");
  }else{
    cout << d << " " << e << endl;
  }
  return 0;
}
