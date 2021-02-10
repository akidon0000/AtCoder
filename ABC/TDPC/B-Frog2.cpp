////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define d(x) cout << #x << "; "<< x << endl;
#define p(x) cout<<x<<endl;
#define f(x) for (int i; i<x.size() ; i++) cout<< #x <<"[" << i << "]; "<<x[i]<<endl;
#define rep(i,c,n) for (int i=c; i<(n);++i)

int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str;
bool ok=false;

template<class T> inline bool chmin(T& a, T b) {
    
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}


int main(){
    cin >> N >> K;

    vector<ll> a(N),dp(N);
    const long long INF = 1LL << 60; 

    rep(i,0,N) cin >> a.at(i);
    rep(i,0,N) dp[i] = INF;
    
    
    dp[0] = 0;
    rep(i,1,N){
        rep(j,1,K+1){
            
            if (i-j < 0) continue;
            chmin(dp[i],dp[i-j]+abs(a[i]-a[i-j]));
        }
    }
    p(dp[N-1])

}


// #include <iostream>
// #include <vector>
// #include <cstdlib>
// using namespace std;
// template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
// template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

// const long long INF = 1LL << 60;

// // 入力
// int N;
// long long h[110000];

// // DP テーブル
// long long dp[110000];

// int main() {
//     int N, K; cin >> N >> K;
//     for (int i = 0; i < N; ++i) cin >> h[i];

//     // 初期化 (最小化問題なので INF に初期化)
//     for (int i = 0; i < 110000; ++i) dp[i] = INF;

//     // 初期条件
//     dp[0] = 0;

//     // ループ
//     for (int i = 0; i < N; ++i) {
//         for (int j = 1; j <= K; ++j) {
//             chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
//         }
//     }

//     // 答え
//     cout << dp[N-1] << endl;
// }