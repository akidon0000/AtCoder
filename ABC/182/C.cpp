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

const int INF = 1001001001;
int main(){
    string s;
  cin >> s;
  int n = s.size();
  vector<int> c(3);
  rep(i,n) c[(s[i]-'0')%3]++;
  int x = 0;
  rep(i,3) x += c[i]*i;
  int ans = INF;
  rep(i1,3)rep(i2,3) {
    if (c[1] < i1) continue;
    if (c[2] < i2) continue;
    if (i1+i2 == n) continue;
    int nx = x;
    nx -= i1*1;
    nx -= i2*2;
    if (nx%3 == 0) ans = min(ans, i1+i2);
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;



} 