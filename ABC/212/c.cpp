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
  ll N , M;
  cin >> N >> M;
  vector<pair<ll, char>> pi;

  rep(i,N){
    ll num;
    cin >> num;
    pi.push_back({num, 'A'});
  }
  rep1(i,N,M+N){
    ll num;
    cin >> num;
    pi.push_back({num, 'B'});
  }
  so(pi)   // 小さい順

  ll ans = INF;
  rep(i,N+M){
    ll a1 = pi[i].first;
    char a2 = pi[i].second;
    ll b1 = pi[i+1].first;
    char b2 = pi[i+1].second;

    if(a2 == b2){
      continue;
    }else{

      ans = min(ans, abs(b1-a1));
    }
  }
  p(ans)





  return 0;
}
