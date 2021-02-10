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


int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0,num=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str,str1,str2,str3;
bool ok=false;


int main(){
    cin >> N;
    
    vector<vector<int>> a(2,vector<int>(N));

    rep(i,0,2){
        rep(j,0,N) cin >> a[i][j]; 
    }

    ll ans = 0;
    rep(i,0,N){
        ans += a[0][i] * a[1][i];
    }

    if (ans ==0) p("Yes")
    else p("No")
    return 0;
}