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
string s,v="";

int main(){
  cin >> s;
  for (char c:s){
    if (c == '9'){
      v += '6';
    }else if (c == '6'){
      v += '9';
    }else{
      v += c;
    }
  }
  reverse(begin(v), end(v));
  p(v)
  return 0;
}
