#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using vl = vector<ll>;

template<typename T> using v = vector<T>;
template<typename T> using vv = vector<vector<T>>;
template<typename T> using vvv = vector<vector<vector<T>>>;
template<typename T> inline void errv(T& v) { for (auto x: v) cerr << x << " "; cerr << endl; }
inline void errv(vector<bool>& v) { for (auto x: v) cerr << (x ? 1 : 0) << " "; cerr << endl; }
template<typename T> inline void dbgn(string n, T x) { cerr << n << ": " << x << endl; }
template<typename T> inline void dbgn(string n, vector<T>& v) { cerr << n << ": "; errv(v); }
template<typename T> inline void dbgn(string n, vector<vector<T>>& m) { cerr << n << ":" << endl; for (auto& v: m) errv(v); }

#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define repp(i, c, n) for (ll i = c; i < (n); ++i)
#define repa(i, a) for (auto i: a)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define so(v) sort((v).begin(), (v).end())
#define rso(v) sort((v).rbegin(), (v).rend())
#define len(x) ll((x).size())

//p(出力) d(デバッグ *多次元配列も可能*)
#define p(x) cout << x << endl;
#define d(x) dbgn(#x, x);

const ll INF = 1LL << 60;  //無限大
const ll MOD = 1000000007; //10^9 + 7

int main(){
  int N;
  cin>>N;
  int A[4*N-1];
  unsigned long long sum =0;
  for(int i=0;i<4*N-1;i++)
  {
    cin>>A[i];
    sum+=A[i];
  }
  cout<<2*1ull*N*(N+1)-sum<<endl;
  return 0;
  // ll n; cin >> n;

  // ll sum = 0, cinSum = 0;

  // ll N = n*4-1;

  // ll tmp;

  // rep(i,N) {
  //   cin >> tmp;
  //   cinSum += tmp;
  // }

  // rep(i,n+1) {
  //   sum += i*4;
  // }

  // p(sum - cinSum)

  // return 0;
}
