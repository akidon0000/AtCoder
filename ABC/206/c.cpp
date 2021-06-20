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
#define siz(x) ll((x).size())
#define pow2(x) (1ll << (x)) //2のn乗
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
ll ans=0,num=0,counter=1;
string str;

int main(){
  int n;
  cin >> n;

  vl a(n);
  rep(i,n) cin >> a[i];
  so(a)

  ans = (n * (n-1))
  num = n;

  rep(i,n){
    ll left = -1;
    ll right = n;
    while (right - left > 1){
      num = right - (right - left);
      if (a[i] < a[num]){
        right = num;
      }else{
        left = num;
      }
    }
    ans += n-right;
  }


  p(ans)

  return 0;
}
