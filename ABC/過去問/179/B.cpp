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


int main(){
    cin >> N;

    rep(i,0,N) {
        cin >> n >> m;
        if (n==m) counter++;
        else counter = 0;
        
        if (counter == 3){
            p("Yes")
            return 0;
        }

    }
    p("No")
} 