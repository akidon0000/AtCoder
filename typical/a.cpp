// 長さ L [cm] のようかんがあります。
// N 個の切れ目が付けられており、左から i 番目の切れ目は左から A[i] [cm] の位置にあります。

// あなたは、N 個の切れ目のうち K 個を選び、ようかんを K+1 個のピースに分割したいです。そこで、以下の値をスコアとします。
// ・K+1 個のピースのうち、最も短いものの長さ
// スコアが最大になるように分割する場合に得られるスコアを求めよ。

// 【制約】
// ・1 ≦ K ≦ N ≦ 10^5
// ・0 < A[1] < A[2] < ... < L ≦ 10^9
// ・入力はすべて整数

// 【入力形式】
// ../sample/001.txt 参照

// https://github.com/E869120/kyopro_educational_90/blob/main/editorial/001.jpg

#include <iostream>
using namespace std;

long long N, K, L;
long long A[1 << 18];

bool solve(long long M) {
    long long cnt = 0, pre = 0;
    for (int i = 1; i <= N; i++) {
        if (A[i] - pre >= M && L - A[i] >= M) {
            cnt += 1;
            pre = A[i];
        }
    }
    if (cnt >= K) return true;
    return false;
}

int main() {
    // Step #1. 入力
    cin >> N >> L;
    cin >> K;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    // Step #2. 答えで二分探索（めぐる式二分探索法）
    // https://qiita.com/drken/items/97e37dd6143e33a64c8c
    long long left = -1;
    long long right = L + 1;

    while (right - left > 1) {
        long long mid = left + (right - left) / 2;
        if (solve(mid) == false) right = mid;
        else left = mid;
    }
    cout << left << endl;
    return 0;
}
