//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n);++i)
using ll = long long;
using P = pair<int,int>;
#define _GLIBCXX_DEBUG
int a,b,c,i,j,k,l,m,n,ans,tmp,hoge,fuga,piyo,count,N,M;
int x[10010],y[10010],d[110][110];

void solve(){
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(d[i][j]>d[i][k]+d[k][j])d[i][j]=d[i][k]+d[k][j];
            }
        }
    }
}

int main(){
    cin >> N >> M;  
    n = N/100 + (N%100)/10 + (N%100)%10;
    m = M/100 + (M%100)/10 + (M%100)%10;
    
    cout << max(n,m) <<endl;
}