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

ll mod = 1000000007; //10^9+7

int main(){
    ll ans,N;
    cin >> N;
    vector<ll> a(N);
    rep(i,0,N) cin >> a[i];
    rep(i,0,N){
        for (ll j=1;j+i<N ;j++){
            ans += a[i] * a[j+i];
        }
    }
    p(ans%mod)
}