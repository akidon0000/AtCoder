#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

bool ok = false;
vector<int> datas;
const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大

ll ans=0,num=0,counter=0;
string s;


int main(){
  cin >> s;
  int maru=0,batu=0,hatena=0;
  for (char c:s){
    if (c == 'o'){
      maru++;
    }else if (c == '?'){
      hatena++;
    }else{
      batu++;
    }
  }

  if (maru > 4 || batu == 10){
    p(0)
    return 0;
  }

  if (maru == 0){
    ans = pow(hatena,4);
  }else if (maru == 1){
    ans = pow(hatena + 1,4) - (pow(hatena,4));
  }else if (maru == 2){
    ans = 14 + 36*hatena + (24*hatena*(hatena-1)/2);
  }else if (maru == 3){
    ans = 24 * hatena + 36;
  }else{
    ans = 24;
  }
  p(ans)


  return 0;
}
