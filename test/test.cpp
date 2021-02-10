////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i,c,n) for (int i=c; i<(n);++i)
//以下debug用
#define d(x) cout << #x << "; "<< x << endl;
#define p(x) cout<<x<<endl;
#define f(x) for (int i; i<x.size() ; i++) cout<< #x <<"[" << i << "]; "<<x[i]<<endl;


int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str1,str2,str3;
bool ok=false;

//0からNまでNと互いに素になる個数
vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}
int main() {
    //出力方法
    const auto &res = prime_factorize(4);
    for (auto p : res) cout << " " << p.first;
}