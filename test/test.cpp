#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;

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

// 四方向への移動ベクトル
const int dy[4] = {1, 0, 0, -1};
const int dx[4] = {0, 1, -1, 0};

int h, w;

string c[510];
bool used[510][510][510];

int sy, sx, gy, gx;

int main(void){
  // testData入力
  ifstream in("./testData.txt");
  cin.rdbuf(in.rdbuf());

  cin >> h >> w;
  rep(i, h) cin >> c[i];

  // スタートとゴールの位置を特定
  rep(i, h)rep(j, w){
      if(c[i][j] == 'S'){
          sy = i; sx = j;
      }
      if(c[i][j] == 'G'){
          gy = i; gx = j;
      }
  }

  rep(i, 510)rep(j, 510)rep(k, 510)used[i][j][k]= false; // 初期化

    queue<tuple<int, int, int> > q;
    q.push(make_tuple(sy, sx, 0));
    used[sy][sx][0] = true;

    while(!q.empty()){
        int y, x, t;
        tie(y, x, t) = q.front(); q.pop();

        if(y == gy && x == gx) break;//ゴール
        rep(i, 4){ // 4回以上は必要ない（回り込む場合を考えたら）
            int ny = y + dy[i], nx = x + dx[i];
            if(!(0 <= ny && ny < h && 0 <= nx && nx < w)) continue;
            if(used[ny][nx][t]) continue;//すでに調べている
            if(c[ny][nx] == '#'){
                used[ny][nx][t + 1] = true;
                q.push(make_tuple(ny, nx, t + 1));
            }else{
                used[ny][nx][t] = true;
                q.push(make_tuple(ny, nx, t));
            }
        }
    }

    rep(i, 510){
        if(used[gy][gx][i]){
          ll ans = (h*w) - ((h-1) * (w-1)) - 1;
          ll num = 0;
          rep(j,i) num += j;

          p(ans + num)
          return 0;
        }
    }
    return 0;
}
