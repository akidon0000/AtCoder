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
vector<int> datas(100),datas2(100);
// rep(i, m) cin >> datas[i];

// (10)->(2)
int binary(int bina){
    int ans = 0;
    for (int i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}
// (2)->(10)
int binary2(int bina){
  int decimal = 0;
  int base = 1;
  while(bina>0){
    decimal = decimal + ( bina % 10 ) * base;
    bina = bina / 10;
    base = base * 2;
  }
  return decimal;
}

int main(){

  cin >> n;
  rep(i,n) {
    cin >> datas[i];
    // datas2[i]=binary(datas[i]);
  }


  rep(i,n){
    rep(j,i){
      
    }
    rep1(k,i,n){

    }
  }


  return 0;
}
