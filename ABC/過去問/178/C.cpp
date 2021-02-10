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


int n,m,t,M,N,T,K,H,W,L,R,counter=0,num=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str,str1,str2,str3;
bool ok=false;

const ll mod=1000000007;
 
 ll powmod(ll x,ll y){
    ll res=1;
    for(ll i=0;i<y;i++){
        res=res*x%mod;
    }
    return res;
}


int main(){
    ll n;
    cin>>n;
    ll ans=powmod(10,n)-powmod(9,n)-powmod(9,n)+powmod(8,n);
    ans%=mod;
    ans=(ans+mod)%mod;
    cout<<ans<<"\n";
}