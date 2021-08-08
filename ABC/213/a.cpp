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

int binary(int deci){
    int ans = 0;
    for (int i = 0; deci>0 ; i++){
        ans = ans+(deci%2)*pow(10,i);
        deci = deci/2;
    }
    return ans;
}
// 2進数->10進数
int decimal(int bina){
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
  int a,b;
  cin >> a >> b;
  int c = a^b;
  p(c)

  return 0;
}
