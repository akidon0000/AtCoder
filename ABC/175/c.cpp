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

ll n, ans = 0, counter = 0, num = 0;
// long long lans = 0, lcounter = 0, lnum = 0;
string str, str1, str2, str3;
bool ok = false;
vector<int> datas(100);
// rep(i, m) cin >> datas[i];

int main(){
  ll X,K,D;
  cin >> X>> K>> D;
  X = abs(X);
  counter = X/D;
  num = K - counter;

  if (num <= 0){
    ans = X - (K*D);
  }else{
    if(num%2 == 0){
      ans = X - (counter * D);
    }else{
      ans = X - ((counter+1) * D);
    }
  }
  p(abs(ans))


  return 0;
}
