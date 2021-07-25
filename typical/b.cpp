// 長さ N の正しいカッコ列をすべて、辞書順に出力してください。
// ただし、正しいカッコ列とは以下のことを指すものとします。
// ・"()" は正しいカッコ列である
// ・S が正しいカッコ列であるとき、文字列 "(" + S + ")" は正しいカッコ列である
// ・S, T が正しいカッコ列であるとき、文字列 S+T は正しいカッコ列である
// また、')' より '(' の方が辞書順で早いものとする。

// 【制約】
// ・1 ≦ N ≦ 20
// ・N は整数

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

ll N;

bool hantei(string S) {
	int dep = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '(') dep += 1;
		if (S[i] == ')') dep -= 1;
		if (dep < 0) return false;
	}
	if (dep == 0) return true;
	return false;
}

int main(){
  cin >> N;
  for (int i = 0; i < (1 << N); i++) {
    string Candidate = "";
    for (int j = N - 1; j >= 0; j--) {
      if ((i & (1 << j)) == 0) {
        Candidate += "(";
      }
      else {
        Candidate += ")";
      }
    }
    bool I = hantei(Candidate);
    if (I == true) cout << Candidate << endl;
  }


  return 0;
}
