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

bool ok = false;
vector<int> datas;
const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大

int main(){
  string s,T="",q;
  cin >> s;
  bool frip = false;
  for (char a:s){
    if (a == 'R'){
      frip = not frip;
    }else{
      if (frip){
        q=a;
        T.insert(0,q);
      }else{
        T.push_back(a);
      }
    }
  }
  if (frip){
    reverse(T.begin(), T.end());
  }

  char p;
  string ans="";
  p='?';
  for (char b:T){
    // d(b)
    // d(ans)
    if (p == b){
      ans.pop_back();
    }else{
      ans += b;
    }
    p = ans[ans.size()-1];
  }
  p(ans)



  return 0;
}
