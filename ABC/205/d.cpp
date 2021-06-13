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
vector<ll> v;
vector<pair<ll,ll>> p;
const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大

ll ans=0,num=0,counter=0;
string s;


int main(){
  ll N,Q;
  cin >> N >> Q;
  vector<ll> a(N);
  rep(i,N) cin >> a[i];
  vector<pair<ll,ll>> k(Q);
  rep(i,Q) {
    cin >> k[i].first;
    k[i].second = i;
  }
  sort(k.begin(), k.end());
  vector<ll> Ans(Q);

  counter = 0;

  rep(i,Q){
    while(true){
      // d(ok)
      if(ok){
        Ans[k[i].second] = k[i].first + counter;
        break;
      }else{
        // d(k[i].first)
        // d(counter)
        // d(a[counter])
        if (k[i].first < a[counter] - counter){
          Ans[k[i].second] = k[i].first + counter;
          // d(Ans[k[i].second])
          break;
        }else{
          counter++;
          if(counter == N){
            ok = true;
            break;
          }
        }
      }
    }
    Ans[k[i].second] = k[i].first + counter;
  }

  for (ll i: Ans) cout << i << endl;

  return 0;
}
