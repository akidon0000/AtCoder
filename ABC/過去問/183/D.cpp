////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG_
// #define d(x) cout << #x << "; "<< x << endl;
#define p(x) cout<<x<<endl;
#define f(x) for (int i; i<x.size() ; i++) cout<< #x <<"[" << i << "]; "<<x[i]<<endl;

#define rep(i,n) for (int i=0; i<(n);++i)

// int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str1,str2,str3;
bool ok=false;


const int MAX_T = 200005;
 
int main() {
  int n, w;
  cin >> n >> w;
  vector<ll> d(MAX_T);
  rep(i,n) {
    int s, t, p;
    cin >> s >> t >> p;
    d[s] += p;
    d[t] -= p;
  }
  rep(i,MAX_T-1) d[i+1] += d[i];
  rep(i,MAX_T) {
    if (d[i] > w) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}