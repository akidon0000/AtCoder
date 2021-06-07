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
// vector<ll> v;
vector<pair<ll,ll>> p;
const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大

ll ans=0,num=0,counter=0;
string s;

int main(){
  int N;
  cin >> N;
  vector<ll> v(N);
  rep(i,N) cin >> v[i];
  sort(v.begin(), v.end(), greater<ll>());

  ll a=0,b=0;

  rep(i, N){
    num = a-b;
    if (num > v[i]){
      if (a > b){
        b += v[i];
      }else{
        a += v[i];
      }
    }else{
      if (a > b){
        b += v[i];
      }else{
        a += v[i];
      }
    }
  }
  // num = abs(a-b);
  // if (num > )
  d(a)
  d(b)
  ans = max(a,b);
  p(ans)


  return 0;
}
