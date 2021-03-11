////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i,c,n) for (ll i=c; i<(n);++i)
//以下debug用
#define d(x) cout << #x << "; "<< x << endl;
#define p(x) cout<<x<<endl;
#define f(x) for (int i; i<x.size() ; i++) cout<< #x <<"[" << i << "]; "<<x[i]<<endl;


int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0,num=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str,str1,str2,str3;
bool ok=false;

const int MAX_T = 200005;

int main(){
    ll N,C;
    vector<ll> dp;
    ll a,b,c;
    cin >> N >> C;
    rep(i,0,N){
        cin >>a >>b >> c;
        dp[a] += c;
        dp[b+1] -= c;
    }
    rep(i,0,dp.size()) dp[i+1] += dp[i];

    ll ans =0;
    rep(i,0,dp.size()) {
        if (dp[i] > C) {
            ans += C;
            continue;
        }
        ans += dp[i];
    }
    p(ans)
    return 0;
}
//DPむりぃぃぃぃぃ！！！！！！！！！！！！！！！！！！