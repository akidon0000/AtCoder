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


int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str1,str2,str3;
bool ok=false;


int main(){
    int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  ll ans = 0;
  ll s = 0, b = 0;
  ll max_b = 0;
  rep(i,n) {
    b += a[i];
    max_b = max(max_b, b);
    ans = max(ans, s+max_b);
    s += b;
  }
  cout << ans << endl;
  return 0;



}