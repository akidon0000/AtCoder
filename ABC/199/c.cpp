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
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

int n, ans = 0, counter = 0, num = 0;
long long lans = 0, lcounter = 0, lnum = 0;
string str, str1, str2, str3;
bool ok = false;
vector<int> datas(100);
// rep(i, m) cin >> datas[i];

int main(){
  int N,Q;
  string S;
  cin >> N;
  cin >> S;
  cin >> Q;

  vector<char> a;
  //文字列出力
  for (char s:S){
    a.push_back(s);
  }

  string st,st1;
  char ch;
  int T,A,B;

  bool frip = false;
  rep(i,Q){
    cin >> T >> A >> B;
    A -= 1;
    B -= 1;
    if (T == 1){
      if (frip){
        A = (A + N) % (2*N);
        B = (B + N) % (2*N);
      }
      ch = a[A];
      a[A] = a[B];
      a[B] = ch;
    }else{
      frip = not frip;
    }
  }
  string anst="";
  for (char s: a) anst += s;
  if (frip){
    anst = anst.substr(N) + anst.substr(0,N);
  }
  p(anst)



  return 0;
}
