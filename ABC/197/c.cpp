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
int ri() {
	int n;
	scanf("%d", &n);
	return n;
}
int main() {
	int n = ri();
	int a[n];
	for (auto &i : a) i = ri();

	int res = 2000000000;
	for (int i = 0; i < 1 << (n - 1); i++) {
		int xored = 0;
		int ored = 0;
		for (int j = 0; j <= n; j++) {
			if (j < n) ored |= a[j];
			if (j == n || (i >> j & 1)) xored ^= ored, ored = 0;
		}
		res = std::min(res, xored);
	}
	printf("%d\n", res);
	return 0;
}
