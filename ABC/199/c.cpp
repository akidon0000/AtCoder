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
vector<int> datas(100);
// rep(i, m) cin >> datas[i];

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int Q;
  cin >> Q;

  string st,st1;

  int T,A,B;
  rep(i,Q){
    cin >> T >> A >> B;
    if (T == 1){
      st = S.at(A-1);
      st1 = S.at(B-1);
      S.replace(A-1,1,st1);
      S.replace(B-1,1,st);
    }else if (T == 2){
      S = S.substr(N) + S.substr(0,N);
    }
  }
  p(S)


  return 0;
}
