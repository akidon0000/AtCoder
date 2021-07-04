#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using pll = pair<ll, ll>;
using vvp = vector<pair<ll, ll>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using vs = vector<string>;
using vvs = vector<vector<string>>;

#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define pb push_back
#define fi first
#define se second
#define so(v) sort((v).begin(), (v).end());
#define rso(v) sort((v).rbegin(), (v).rend());
#define siz(x) ll((x).size());
#define pow2(x) (1ll << (x)); //2のn乗
//debug用
#define p(x) cout << x << endl;
#define d(x) cout << #x << "; " << x << endl;
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;
#define yn(x) if (x) p("Yes") else p("No")
//DP用
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL << 60; //無限大


bool ok = false;
int ans=0,num=0,counter=0;
string str;

int main(){
  int n , m;
  cin >> n >> m;

  vl a(m),b(m);

  rep(i,m){
    cin >> a[i] >> b[i];
  }
  rso(a)
  so(b)
  ans = b[0] - a[0] + 1;
  if (ans < 0){
    ans = 0;
  }
  p(ans)



  return 0;
}
