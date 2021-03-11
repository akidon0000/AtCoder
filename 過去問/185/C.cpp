//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define p(x) cout<<x<<endl;
#define rep(i,n) for (int i=0; i<(n);++i)

int n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
// long long n,m,t,M,N,T,K,H,W,L,R,ans=0,counter=0;
string str;
bool ok=false;


long long combination(int capacity){ //組み合わせ 「C」
    long long ans = 1,sum = 0;

    for(int i = 1; i < 12; i++){
        ans *= capacity - i;
        ans /= i;
    }

    return ans;
}

int main(){
    cin >> N;
    p(combination(N))
}
