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
  int N;
  cin >> N;
  vector<int> a(N),b(N),c(N);
  rep(i,N) cin >> a[i];
  rep(i,N) cin >> b[i];
  rep(i,N) cin >> c[i];
  rep(i,N){
    c[i] = b[c[i]-1];
  }
  vector<int> al(N+1),cl(N+1);
  rep(i,N){
    al[a[i]-1]++;
    cl[c[i]-1]++;
  }
  rep(i,N){
    ans += al[i] * cl[i];
  }
  p(ans)





  return 0;
}
