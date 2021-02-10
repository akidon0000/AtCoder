////////////////////////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define d(x,y) cout<<x<<"; "<<y<<endl; //debug用
#define p(x) cout<<x<<endl;
#define rep(i,n) for (int i=0; i<(n);++i)

int n,m,t,M,N,T,K,H,W,L,R,X,ans=0,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str,str1,str2,str3;
bool ok=false;


int main(){
    cin >> N >> X;
    cin >> str;

    ans = X;
    rep(i,N){
        if (str[i] == 'o') ans++;
        if (str[i] == 'x') {
            if (ans <= 0) continue;
            ans--;
        }
    }
    p(ans)
 
}