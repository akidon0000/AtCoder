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
  ll N,K;
  cin >> N >> K;
  vector<pair<ll, ll>> pa(N);
  rep(i,N){
    cin >> pa[i].first >> pa[i].second;
  }
  sort(pa.begin(), pa.end());
  ll startPosition=0, money=0, friendPosition=0, friendMoney=0;
  money = K;

  rep(i,N){
    friendPosition = pa[i].first;
    friendMoney = pa[i].second;
    if (friendPosition <= startPosition + money){
      if(startPosition != friendPosition){
        money -= (friendPosition - startPosition);

      }
      money += friendMoney;
      startPosition = friendPosition;
    }else{
      break;
    }

  }
  // ll aa = pow(10,100)+1;
  // // p(aa)

  // if (startPosition+money > aa){
  //   ans = pow(10,100)+1;
  // }else{
  //   ans = startPosition+money;
  // }
  ans = startPosition+money;

  p(ans)
  return 0;
}
