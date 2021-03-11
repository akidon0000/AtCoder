//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

#define _GLIBCXX_DEBUG
#define ll = long long;
#define p(x) cout<<x<<endl;
#define rep(i,n) for (int i=0; i<(n);++i)

int a,b,c,M,N,K,H,W,L,R;
// long long a,b,c,M,N,K,H,W,L,R;
int num=0,ans=0,counter=0;
string str;
bool ok=false;


int main(){
    cin >> M>>N;
    vector<int> A(N);
    ans = N;
    for (int i=0; i < N; ++i) cin >> A[i];

    sort(A.begin(),A.end());
    A.push_back(M+1);

    int cur = 1;
    vector<int> s;
    rep(i,N+1){
        int w = A[i] - cur;
        if (w!=0) s.push_back(w);
        cur=A[i]+1;
    }
    int k = M;
    for (int w:s) k = min(k,w);
    int ans = 0;
    for (int w:s) ans += (w+k-1)/k;
    p(ans)
}