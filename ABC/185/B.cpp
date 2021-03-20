//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

#define _GLIBCXX_DEBUG
using ll = long long;
#define p(x) cout<<x<<endl;
#define rep(i,n) for (ll i=0; i<(n);++i)

int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str;
bool ok=false;


int main(){
    int n,m,t;
    cin >>n>>m>>t;
    vector<int> a(m),b(m);
    rep(i,m) cin>>a[i]>>b[i];
    int now=0;
    int bat = n;
    rep(i,m){
        bat -= a[i] -now;
        now = a[i];
        if (bat <= 0){
            p("No")
            return 0;
        }
        bat += b[i]-a[i];
        if (bat > n) bat = n;
        now = b[i];
    }
    bat -= t-now;
    if (bat <= 0){
        p("No")
        return 0;
    }
    p("Yes")
    return 0;
}