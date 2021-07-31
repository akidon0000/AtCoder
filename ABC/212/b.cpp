#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;

#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define so(v) sort((v).begin(), (v).end());
#define rso(v) sort((v).rbegin(), (v).rend());

//p(出力) d(デバッグ) f(一次配列用のデバッグ) f2(二次配列用のデバッグ)
#define p(x) cout << x << endl;
#define d(x) cout << #x << "; " << x << endl;
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;
#define f2(x) for (long unsigned int i = 0; i < x.size(); i++) for (long unsigned int j = 0; j < x[i].size(); j++) cout << #x << "[" << i << "][" << j << "]; " << x[i][j] << endl;

const ll INF = 1LL << 60;  //無限大
const ll mod = 1000000007; //10^9 + 7

int main(){
  string pass;
  cin >> pass;

  bool ok = true; //false==Weak
  int a,b,c,d;
  a = int(pass[0]);
  b = int(pass[1]);
  c = int(pass[2]);
  d = int(pass[3]);

  if (a == b - 1 || a == b + 9){
    if (b == c - 1 || b == c + 9){
      if (c == d - 1 || c == d + 9){
        ok = false;
      }
    }
  }


  if(pass[0]==pass[1] && pass[0]==pass[2] && pass[0]==pass[3]){
    ok = false;
  }

  if (ok){
    p("Strong")
  }else{
    p("Weak")
  }


  return 0;
}
