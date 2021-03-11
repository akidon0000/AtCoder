//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i=0; i<(n);++i)

int a,b,c,m,n,M,N,ans,times;
bool tf=false; 

int main(){
    cin >> N;
    vector<string> S(N);
    set<string> StringSet;
    rep(i,N){
        cin >> S[i];
        StringSet.insert(S[i]);
    }

    rep(i,N){
        if (StringSet.count("!"+S[i])){
            cout << S[i] << endl;

            return 0;
        }
    }

    cout << "satisfiable" <<endl;
}
