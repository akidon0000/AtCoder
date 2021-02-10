////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define d(x,y) cout<<x<<"; "<<y<<endl; //debug用
#define p(x) cout<<x<<endl;
#define rep(i,n) for (int i=0; i<(n);++i)

int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str1,str2,str3;
bool ok=false;

//sunukeさんのコピペ
int solve(int x, int y) {
  if (x == 0 && y == 0) return 0;
  if (0 == x+y) return 1;
  if (0 == x-y) return 1;
  if (abs(x)+abs(y) <= 3) return 1;
  if (0 == (x+y)%2) return 2;
  if (abs(x)+abs(y) <= 6) return 2;
  if (abs(x+y) <= 3) return 2;
  if (abs(x-y) <= 3) return 2;
  return 3;
}
 
int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << solve(x2-x1, y2-y1) << endl;
  return 0;
}