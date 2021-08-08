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
  int h,w,n;
  cin >> h >> w >> n;

  vector<pair<ll, ll>> pr1(n);
  vector<pair<ll, ll>> pr2(n);
  rep(i,n){
    cin >> pr1[i].first >> pr2[i].first;
    pr1[i].second = i+1;
    pr2[i].second = i+1;
  }


  // 1.ソート
  sort(pr1.begin(), pr1.end());
  sort(pr2.begin(), pr2.end());

  // p("1.ソート")
  // rep(i,n){
  //   cout << pr1[i].first << " " << pr1[i].second << endl;
  // }

  // 2.Rep
  int num1 = 0, before1 = 0;
  int num2 = 0, before2 = 0;

  rep(i,n){
    if (before1 == pr1[i].first){
        num1++;
    }
    before1 = pr1[i].first;
    pr1[i].first = i+1 - num1;

    if (before2 == pr2[i].first){
        num2++;
        // p(num2)
    }
    before2 = pr2[i].first;
    pr2[i].first = i+1 - num2;
    // before2 = pr2[i].first;
  }

  // p("2.レプ")
  // rep(i,n){
  //   cout << pr2[i].first << " " << pr2[i].second << endl;
  // }

  // 3.スワップ
  rep(i,n){
    swap(pr1[i].first,pr1[i].second);
    swap(pr2[i].first,pr2[i].second);
  }

  // p("3.スワップ")
  // rep(i,n){
  //   cout << pr1[i].first << " " << pr1[i].second << endl;
  // }


  // 4.ソート
  sort(pr1.begin(), pr1.end());
  sort(pr2.begin(), pr2.end());

  // p("4.ソート")
  // rep(i,n){
  //   cout << pr1[i].first << " " << pr1[i].second << endl;
  // }


  // 5.スワップ
  rep(i,n){
    swap(pr1[i].first,pr1[i].second);
    swap(pr2[i].first,pr2[i].second);
  }

  // p("5.スワップ")
  // rep(i,n){
  //   cout << pr1[i].first << " " << pr1[i].second << endl;
  // }

  rep(i,n){
    cout << pr1[i].first << " " << pr2[i].first << endl;
    // cout << pr1[i].second;
    // cout << pr2[i].second << endl;
    // p(pr1[i].second)
    // p(pr2[i].second)
  }





  return 0;
}
