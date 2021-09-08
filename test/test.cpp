#include <bits/stdc++.h>
using namespace std;

int main() {

  // 末尾に追加
  vector<int> v = {1,2,3,4};
  v.push_back(5);
  for (int it: v) cout << it << " "; // 1 2 3 4 5

  v.insert(1, 100);

  // // 末尾から削除
  // v = {1,2,3,4};
  // v.pop_back();
  // for (int it: v) cout << it << " "; // 1 2 3

  // // 要素数を取得
  // v = {1,2,3,4};
  // cout << v.size() << endl; // 4
}
