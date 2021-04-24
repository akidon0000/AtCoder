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
bool ok = false;

// rep(i, m) cin >> datas[i];

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> b(N);

  rep(i,N){
    cin >> a[i];
  }

  rep(j,N){
    cin >> b[j];
  }


  int c=0,d=10000;
  rep(h,N){
    c = max(c,a[h]);
    // d(c)
    d = min(d,b[h]);
    // d(d)
  }

  if ((d-c+1) < 0){
    p(0)
  }else{
    p(d-c+1)
  }




  return 0;
}
