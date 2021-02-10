////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

// 入力
int N;

const int X = 100;
// DP テーブル
long long dp[101][101][101];

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    for (int i=X-1; i>=0; --i){
        for (int j=X-1; j>=0; --j){
            for (int k=X-1; k>=0; --k){
                double now = 0;
                now += dp[i+1][j][k] * i;
                now += dp[i][j+1][k] * i;
                now += dp[i][j][k+1] * i;
                dp[i][j][k] = now/(i+j+k) + 1;
            }
        }
    }
    cout << fixed << setprecision(15) << dp[a][b][c] << endl;
}