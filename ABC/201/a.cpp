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

const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大

int ans=0,num=0,counter=0;
string s;

int main(){
  // p("a")
  int b,c;
  // cin >> a >> b >> c;
  vector<int> a(3);

  rep(i,3){
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  // // f(datas)
  b = a[2]-a[1];
  c = a[1]-a[0];
  if (b==c){
    p("Yes")
  }else{
    p("No")
  }
  // p(a[0])
  // p(a[1])
  // p(a[2])

  return 0;
}
