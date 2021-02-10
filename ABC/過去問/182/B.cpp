////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < (n); ++i)
// #define rep(i,c,n) for (int i=c; i<(n);++i)
//以下debug用
#define d(x) cout << #x << "; "<< x << endl;
#define p(x) cout<<x<<endl;
#define f(x) for (int i; i<x.size() ; i++) cout<< #x <<"[" << i << "]; "<<x[i]<<endl;


int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0,num = 0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str1,str2,str3;
bool ok=false;
using P = pair<int,int>;
// a と b の最大公約数を返す関数
long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main(){
    int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  P ans(-1, -1);
  for (int k = 2; k <= 1000; k++) {
    int now = 0;
    rep(i,n) if (a[i]%k == 0) now++;
    ans = max(ans, P(now, k));
  }
  cout << ans.second << endl;
  return 0;
} 