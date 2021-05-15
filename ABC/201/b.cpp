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

int ans=0,num=0,counter=0;
string s,s1;

int main(){
  int N;
  cin >> N;

  vector<string> a(N);
  vector<int> b(N);

  rep(i,N){
    cin >> a[i] >> b[i];
  }

  int before_max,max_id,max_num=0,sec_id,sec_num=0;

  rep(i,N){
    before_max = max_num;
    max_num = max(max_num,b[i]);
    if (max_num == b[i]){
      sec_id = max_id;
      sec_num = before_max;
      max_id = i;
    }

    if ( max_num > b[i] && b[i] > sec_num ){
      sec_id = i;
      sec_num = b[i];
    }
  }
  p(a[sec_id])

  return 0;
}
