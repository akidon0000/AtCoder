#include <bits/stdc++.h>
using namespace std;

int main() {
  // 絶対値 abs(x);
  cout << abs(-100) << endl; // 100

  // 三角関数(弧度法を使用)
  double pi = 3.141592653589793238;
  cout << sin(pi/6) << endl; // 0.5
  cout << cos(0 / 180.0 * pi) << endl; // 1

  // 最大を求める max(a, b);
  cout << max(1, 20) << endl; // 20
  cout << max({1, 6, 10, 2}) << endl; // 10

  // 最小を求める min(a, b);
  cout << min(1, 20) << endl; // 1

  // 値を交換する
  int a = 1, b = 5;
  swap(a, b);
  cout << a << " " << b << endl; // 5 1

  // a, bの最大公約数 __gcd(a, b);
  cout << __gcd(2, 3) << endl; // 1

  // a, bの最小公倍数 a / __gcd(a, b) * b;
  cout << 2 / __gcd(2, 3) * 3 << endl; // 6

  // xの2乗 pow(x, 2);
  cout << pow(3, 2) << endl; // 9

  // ルートx sqrt(x);
  cout << sqrt(2) << endl; // 1.41421

  // 乱数
  cout << rand() << endl;
  // 1 以上 6 以下のランダムな整数を出力する場合
  cout << rand() % 6 + 1 << endl;
}
