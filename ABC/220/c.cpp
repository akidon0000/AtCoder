#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;

#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define ALL(a)  (a).begin(),(a).end()
#define so(v) sort((v).begin(), (v).end())
#define rso(v) sort((v).rbegin(), (v).rend())

//p(出力) d(デバッグ) f(一次配列用のデバッグ) f2(二次配列用のデバッグ)
#define p(x) cout << x << endl
#define d(x) cout << #x << "; " << x << endl
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl
#define f2(x) for (long unsigned int i = 0; i < x.size(); i++) for (long unsigned int j = 0; j < x[i].size(); j++) cout << #x << "[" << i << "][" << j << "]; " << x[i][j] << endl

const ll INF = 1LL << 60;  //無限大
const ll mod = 1000000007; //10^9 + 7

int main(){
  int n;cin >> n;

  vl a(n);
  rep(i,n) cin >> a[i];

  ll x;cin >> x;

  ll sum=0;
  for(ll val:a)sum+=val;

  ll x_div_a_sum_counter = x / sum;
  ll sumb = x_div_a_sum_counter * sum;
  ll ans = x_div_a_sum_counter * n;

  for (int val:a){
    if (sumb > x){
      p(ans);
      return 0;
    }
    ans++;
    sumb += val;
    if (sumb > x){
      p(ans);
      return 0;
    }
  }

  return 0;
}
