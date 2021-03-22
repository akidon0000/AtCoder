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

int now = 0, ans = 0, counter = 0, num = 0;
long long lnow = 0, lans = 0, lcounter = 0, lnum = 0;
string str, str1, str2, str3;
bool ok = false;

int main(){

  int n;
  cin >> n ;

  vector<int>a(n),b(n);
  rep(i,n) cin >> a[i] >> b[i];
  ans = 1001001001;
  rep(ai,n) rep(bi,n){
    if(ai==bi) now=a[ai]+b[bi];
    else now=max(a[ai],b[bi]);
    ans=min(ans,now);
  }
  p(ans)
  return 0;
}
