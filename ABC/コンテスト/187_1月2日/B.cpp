//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(n);++i)
using ll = long long;
using P = pair<int,int>;
#define _GLIBCXX_DEBUG
int count_=0,N,M;
int x[10010],y[10010],d[110][110];


int main(){
    cin >> N;
    int x[N],y[N];
    for (int i=0; i < N; ++i) cin >> x[i] >> y[i];

    double ans,a,b;
    rep(i,N){
        for (int j=0; j+i < N ;j++){

            a = (y[j+i]-y[i]);
            b = (x[j+i]-x[i]);
            ans = a/b;
            if ( -1.0 <= ans && ans <= 1.0) count_++;
        }
    }
    cout << count_ <<endl;
}