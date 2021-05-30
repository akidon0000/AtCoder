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

int ans=0,num=0,counter=0;
string s;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if (a == b && b == c && c == a){
    p(a)
    return 0;
  }
  if (a != b && b != c && c != a){
    p(0)
    return 0;
  }

  if (a == b){
    p(c)
  }
  if (b == c){
    p(a)
  }
  if (a == c){
    p(b)
  }

  return 0;
}
