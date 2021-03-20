////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG_
#define d(x) cout << "debug" << "(" << __LINE__ << ") " << (#x) << ": "<< (x) << endl;
#define p(x) cout<<x<<endl;
#define f(x) for (int i; i<x.size() ; i++) cout<< #x <<"[" << i << "]; "<<x[i]<<endl;
#define rep(i,c,n) for (int i=c; i<(n);++i)

int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str1,str2,str3;
bool ok=false;


int main(){
    int n,k;
    cin >> n>>k;
    int t[8][8];
    rep(i,0,n)rep(j,0,n) cin >> t[i][j];


    vector<int> p;
    rep(i,1,n) p.push_back(i);
    
    int ans = 0;
    do{
        int tot = t[0][p[0]];
        rep(i,0,n-2) tot += t[p[i]][p[i+1]];
        tot += t[p.back()][0];
        if (tot == k) ans++;
    }while (next_permutation(p.begin(),p.end())); //順列を列挙している ループ1回目{1,2,3}, 2回目{1,3,2},,,
    p(ans);
}