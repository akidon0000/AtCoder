#include <iostream>
#include <vector>
using namespace std;
#define p(x) cout << x << endl;
#define d(x) cout << #x << "; " << x << endl;
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;
#define yn(x) if (x) p("Yes") else p("No")
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<int> IntegerToVector(int bit, int N) {
    vector<int> S;
    for (int i = 0; i < N; ++i) {
        if (bit & (1 << i)) {// ビットフラグの判定 AND演算 互いに1のbitを1とする (11111111 & 10101010 は、10101010) true=1
            S.push_back(i);
        }
    }
    return S;
}

int main() {
    // 入力
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // bit 全探索
    bool exist = false;
    // シフト演算
    // (1 << 0); // 0000 0000 0000 0001(2進数) => 1(10進数) 2^0
    // (1 << 1); // 0000 0000 0000 0010(2)    => 2(10)     2^1
    // (1 << 2); // 0000 0000 0000 0100(2)    => 4(10)     2^2
    // (1 << 3); // 0000 0000 0000 1000(2)    => 8(10)     2^3
    // (1 << 4); // 0000 0000 0001 0000(2)    => 16(10) つまり4個の並べ方の全通りは16(空の状態を含む)

    for (int bit = 0; bit < (1 << N); ++bit) {
        // どれを選ぶか
        vector<int> S = IntegerToVector(bit, N); // 1回目S{0} 2回目S{1} 3回目S{0,1} 4回目S{2}....

        // 部分集合に対応する総和
        int sum = 0;
        for (int i : S) sum += a[i];

        // 判定
        if (sum == W) exist = true;
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}


