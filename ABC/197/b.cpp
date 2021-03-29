// #include <bits/stdc++.h>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <bitset>
#include <deque>
#include <functional>
#include <iostream>
#include <iomanip>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define yn(ok, True, False) if (ok) { p(True) } else {p(False)};
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x) for (int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

int n, ans = 0, counter = 0, num = 0;
long long lans = 0, lcounter = 0, lnum = 0;
string str, str1, str2, str3;
bool ok = false;
// vector<string> datas(10001);
// rep(i, m) cin >> datas[i];
int di[]={-1,0,1,0};
int dj[]={0,-1,0,1};

int main(){
  int h,w,x,y;
  --x;--y;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  ans = 1;
  rep(v,4){
    int ni = x,nj = y;
    while(1){
      ni += di[v];
      nj += dj[v];
      if (ni<0 || nj < 0||ni>=h||nj>=w||s[ni][nj]=='#') break;
      ans++;
    }
  }
}

// int main(){
//   int H,W,X,Y,mx;
//   cin >> H >> W >> Y >> X;
//   str ="";
//   rep(i,H){
//     cin >> str;
//     str2 += str;
//   }
//   // datas[i];

//   num = ((W*(Y-1))+X)-1;
//   mx = (W*H)-1;
//   int up,left,right,down;
//   up = num - W;
//   left = num - 1;
//   right = num + 1;
//   down = num + W;
//   // d(num)
//   // d(up)
//   // d(left)
//   // d(right)
//   // d(down)
//   counter = num;

//   while (up>=0 && str2[up]=='.'){
//     ans++;
//     up -= W;
//   }

//   while (counter % W != 0 && str2[left]=='.'){
//     ans++;
//     counter -= 1;
//     left -= 1;
//   }
//   counter = num+1;
//   while ((counter) % W != 0 && str2[right]=='.'){
//     ans++;
//     counter += 1;
//     right += 1;

//   }
//   while (down <= mx && str2[down]=='.'){
//     ans++;
//     down += W;
//   }

//   p(ans+1)


//   return 0;
// }
