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
const long long INF = 1LL << 60;
string str, str1, str2, str3;
bool ok = false;
vector<int> A(100100),P(100100),X(100100);
// rep(i, m) cin >> datas[i];

int main(){
  lans = INF;
  cin >> n;
  ll a,b,c,d;
  rep(i,n){
    cin >> a >> b >> c;
    d=c-a;
    if (d>0){
      lans=min(lans,b);
    }
  }
  if (lans == INF){
    p(-1)
  }else{
    p(lans)
  }




  return 0;
}
