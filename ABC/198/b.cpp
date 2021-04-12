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

int n, ans = 0, counter = 0, num = 0;
long long lans = 0, lcounter = 0, lnum = 0;
string str, rstr, str0, str3;
bool ok = false;
vector<int> datas(100);
// rep(i, m) cin >> datas[i];

int main(){

  cin >> str;
  num = str.size();
  rep(i, num){
    rstr = str;
    reverse(begin(rstr), end(rstr));
    if (str == rstr){
      p("Yes")
      return 0;
    }
    str = '0'+str;
  }
  p("No")

  return 0;
}
