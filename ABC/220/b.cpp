#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;

#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define ALL(a)  (a).begin(),(a).end()
#define so(v) sort((v).begin(), (v).end())
#define rso(v) sort((v).rbegin(), (v).rend())

//p(出力) d(デバッグ) f(一次配列用のデバッグ) f2(二次配列用のデバッグ)
#define p(x) cout << x << endl
#define d(x) cout << #x << "; " << x << endl
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl
#define f2(x) for (long unsigned int i = 0; i < x.size(); i++) for (long unsigned int j = 0; j < x[i].size(); j++) cout << #x << "[" << i << "][" << j << "]; " << x[i][j] << endl

const ll INF = 1LL << 60;  //無限大
const ll mod = 1000000007; //10^9 + 7

long long BaseNumber(string s, long long k){ // K 進法表記の S を、10 進法表記で表す関数
    long long ans = 0;
    for(char x:s){
        ans *= k;
        ans += x - '0';
    }
    return ans;
}

int main(){

    ll k;
    string a,b;
    cin>>k>>a>>b;
    ll A = BaseNumber(a,k);
    ll B = BaseNumber(b,k);
    cout<< A * B <<endl;
    return 0;
}
