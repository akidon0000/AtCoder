////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG_
#define d(x) cout << #x << "; "<< x << endl;
#define p(x) cout<<x<<endl;
#define f(x) for (int i; i<x.size() ; i++) cout<< #x <<"[" << i << "]; "<<x[i]<<endl;
#define rep(i,n) for (int i=0; i<(n);++i)

int n,m,t,M,N,T,K,H,W,L,R,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str1,str2,str3;
bool ok=false;


int main(){
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    double ans = (gx-sx)*sy/(sy+gy)+sx;
    printf("%.10f\n", ans);
    return 0;

}