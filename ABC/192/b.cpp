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
string str, str1, str2, str3;
bool ok = true;
vector<int> datas(100);
// rep(i, m) cin >> datas[i];

int main(){
  string s; cin>>s;
  bool flag=true;
  for (int i = 0; i < int(s.size()); i++)
  {
      if (i%2==0) {if (s[i]<=90) {flag=false; break;}}
      else if (s[i]>=97) {flag=false; break;}
  }
  if (flag) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
