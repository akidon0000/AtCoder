// N 個の都市があり、それぞれ 1, 2, 3, ..., N と番号付けられています。
// また、N-1 本の道路があり、i 本目の道路は都市 A[i] と都市 B[i] を双方向に結んでいます。
// どの都市の間も、いくつかの道路を通って移動可能なものとなっています。

// さて、あなたは整数 u, v (1 ≦ u < v ≦ N) を自由に選び、都市 u と v を双方向に結ぶ道路を 1 本だけ新設することができます。
// そこで、以下で定められる値をスコアとします。
// ・同じ道を 2 度通らずにある都市から同じ都市まで戻ってくる経路における、通った道の本数 (この値はただ一つに定まる)
// スコアとして考えられる最大の値を出力してください。

// 【制約】
// ・1 ≦ N ≦ 100000
// ・1 ≦ A[i] < B[i] ≦ N
// ・どの都市の間も、いくつかの道路を通って移動可能
// ・入力はすべて整数



#include <bits/stdc++.h>
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
vector<int> datas(100);
// rep(i, m) cin >> datas[i];

int main(){

  cin >> n;


  return 0;
}
