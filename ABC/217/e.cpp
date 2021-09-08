#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;

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
  int Q; cin >> Q;
  vector<int> vec;
  vector<int> vec_sorted;
  rep(i,Q) {
    int a;
    cin >> a;

    if(a == 1) { // xを追加する
      int x;
      cin >> x;
      vec.push_back(x);
      auto itr = lower_bound(vec_sorted.begin(), vec_sorted.end() , x);
      vec_sorted.insert(itr, x);

    } else if (a == 2) {
      int tmp = vec[0];
      cout << tmp << endl; // 出力
      vec.erase(vec.begin());
      auto itr = lower_bound(vec_sorted.begin(), vec_sorted.end() , tmp);
      vec_sorted.erase(itr);
    } else {
      // sortedからvecへコピーする
      copy(vec_sorted.begin(), vec_sorted.end(), vec.begin());
    }
  }
  return 0;
}
