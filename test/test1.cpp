// 株式会社モバイルファクトリー課題
// 徳島大学理工学部3年 松山 晃大（まつやま あきひろ）

// ある時刻(0時～23時)が、指定した時間の範囲内に含まれるかどうかを調べる
// プログラムを作ってください。
// 言語は問いませんが、ライブラリなどを使ってはいけません。

// 以下のような条件を満たすこと。
// - ある時刻と、時間の範囲(開始時刻と終了時刻)を受け取る。
// - 時刻は、6時であれば6のような指定でよく、分単位は問わない。
// - 範囲指定は、開始時刻を含み、終了時刻は含まないと判断すること。
// - ただし開始時刻と終了時刻が同じ場合は含むと判断すること。
// - 開始時刻が22時で終了時刻が5時、というような指定をされても動作すること。

// ======== 入力例と出力例がない為、作成 ========
// 制約
// 入力は全て整数である
// 1 <= T,S,E <= 24

// 入力 Tはある時刻、Sは開始時刻、Eは終了時刻
// T S E

// 入力例1
// 10 5 20

// 出力例1
// Yes

// 入力例2
// 3 20 6

// 出力例2
// Yes


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

// 回答1
int main(void) {
  int h, s, e; cin >> h >> s >> e;
  cout << (0 <= (e - s) * (h - s + 1) * (e - h)?"Yes":"No") << endl;
}

// 回答2
// bool isResult(int hour, int start, int end) {
//   if (start < end) {
//     return isJudge(hour, start, end);
//   } else {
//     return !isJudge(hour, end, start);
//   }
// }

// bool isJudge(int hour, int start, int end) {
//   return (start <= hour && hour < end);
// }

// int main(void) {
//   int hour, start, end; cin >> hour >> start >> end;
//   cout << (isResult(hour, start, end)?"Yes":"No") << endl;
// }
// #include <fstream>
// #include <sstream>

// // 回答3 Test
// string str_buf;
// string str_conma_buf;
// string input_csv_file_path  = "読み込むcsvファイルへのパス";
// string output_csv_file_path = "書き込むcsvファイルへのパス";

// int main(void) {
//   // 読み込むcsvファイルを開く
//   ifstream ifs_csv_file(input_csv_file_path);

//   // 書き込むcsvファイルを開く
//   ofstream ofs_csv_file(output_csv_file_path);

//     // getline関数で1行ずつ読み込む(読み込んだ内容はstr_bufに格納)
//   while (getline(ifs, str_buf)) {
//     // 「,」区切りごとにデータを読み込むためにistringstream型にする
//     std::istringstream i_stream(str_buf);

//     // 「,」区切りごとにデータを読み込む
//     while (getline(i_stream, str_conma_buf, ',')) {
//        // csvファイルに書き込む
//        ofs_csv_file << str_conma_buf << ',';
//     }
//     // 改行する
//     ofs_csv_file << std::endl;
//   }

//   int h, s, e; cin >> h >> s >> e;
//   cout << (0 <= (e - s) * (h - s + 1) * (e - h)?"Yes":"No") << endl;
// }


# 1 かいしんのいちげき
int main(){
  ll devilHealth, heroAttack, devilHeal;
  cin >> devilHealth >> heroAttack >> devilHeal;

  if (0 < devilHealth - heroAttack && heroAttack - devilHeal < 0){
    p("NO")
    return 0;
  }

  ll turnCounter = 0;
  while(true){
    turnCounter++;
    devilHealth -= heroAttack;
    if (devilHealth <= 0){
      p("YES")
      p(turnCounter)
      return 0;
    }
    devilHealth += devilHeal;
  }
}

# 2 サボり部下とボス
int main(){
  ll n,k;
  string s;
  cin >> n >> k >> s;

  v<ll> moraleDownGroupe; // 隣同士で士気が低下している人のグループ分け
  ll molaleDownContinuousNum = 0; // 連続Sの回数
  ll moraleBoostingMemberNum = 0; // 士気が上昇している人の数

  //[.]士気UP [S]士気DOWN
  rep(i,n){
    if (s[i] == '.'){
      moraleBoostingMemberNum++;
      if (0 < molaleDownContinuousNum) moraleDownGroupe.push_back(molaleDownContinuousNum);
      molaleDownContinuousNum = 0;
    }else{
      molaleDownContinuousNum++;
    }
  }
  // s[n] == 'S' だった場合等の対処
  if (0 < molaleDownContinuousNum) moraleDownGroupe.push_back(molaleDownContinuousNum);

  // 隣同士で士気が低下している人がいなかった場合
  if (len(moraleDownGroupe) == 0){
    p(moraleBoostingMemberNum)
    return 0;
  }

  // 降順に並び替え
  rso(moraleDownGroupe);

  rep(i,k){
    if (moraleDownGroupe[i] > 3){
      moraleDownGroupe[i] -= 3;
      moraleBoostingMemberNum += 3;
    }else{
      moraleBoostingMemberNum += moraleDownGroupe[i];
      moraleDownGroupe[i] = 0;
    }
  }
  p(moraleBoostingMemberNum)
}

#3 諭吉ボンバー
int main(){
  ll n,m,k;
  cin >> n >> m >> k;
  v<string> field(500);
  set<ll> outHightAreaSet, outWideAreaSet;
  v<ll> outHightArea, outWideArea, safeMoney, outMoney;

  rep(h,n){
    cin >> field[h];
    rep(w,m){
      if (field[h][w] == 'B'){
        outHightAreaSet.insert(w); // field[1][0]=='B'だと[?][1]は全て燃え尽きる縦方向
        outWideAreaSet.insert(h); // field[1][0]=='B'だと[1][?]は全て燃え尽きる横方向
      }
    }
  }

  for(auto it: outHightAreaSet) outHightArea.push_back(it);
  for(auto it: outWideAreaSet) outWideArea.push_back(it);

  rep(h,n){
    rep(w,m){
      if (field[h][w] == 'B') continue;
      // 爆弾がある行、列の判定
      if (binary_search(all(outHightArea), w) || binary_search(all(outWideArea), h)){
        outMoney.push_back(field[h][w] - 48); // 札束の枚数を入れる char-48
      }else{
        safeMoney.push_back(field[h][w] - 48);
      }
    }
  }


  rso(outMoney);
  so(safeMoney);

  d(safeMoney)
  d(outMoney)

  rep(i,k){
    if (len(outMoney) == 0 || len(safeMoney) == 0){
      break;
    }
    if (safeMoney[0] < outMoney[i]){
      safeMoney.push_back(outMoney[i]);
      safeMoney.erase(safeMoney.begin());
    }
  }

  ll ans = 0;
  rep(i,len(safeMoney)){
    ans += safeMoney[i];
  }

  d(safeMoney)
  d(outMoney)

  p(ans)
}

#4 レベルnデス
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

// a と b の最大公約数を返す
long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}
//最小公倍数は最大公約数を用いて求めることができる。
long long LCM(long long a, long long b) {
    return a / GCD(a, b) * b;
}

vector<ll> IntegerToVector(int bit, int N) {
    vector<ll> S;
    for (ll i = 0; i < N; ++i) {
        if (bit & (1 << i)) { // ビットフラグの判定 AND演算 互いに1のbitを1とする (11111111 & 10101010 は、10101010) true=1
            S.push_back(i);
        }
    }
    return S;
}


int main(){
  // testData入力
  ifstream in("./testData.txt");
  cin.rdbuf(in.rdbuf());

  ll l,r,m;
  cin >> l >> r >> m;
  ll levelRange = r-l+1;

  v<ll> magicLevels(m);

  rep(i,m) {
    cin >> magicLevels[i];
    // 1が含まれると全滅できるため
    if (magicLevels[i] == 1){
      p(0)
      return 0;
    }
  }

  d(magicLevels)


  ll defeatedMonstersNum = 0;
  rep(i,len(magicLevels)){
    defeatedMonstersNum += ll(r/magicLevels[i]) - ll(l/magicLevels[i]);
  }

  for (int bit = 0; bit < (1 << len(magicLevels)); ++bit) {
    ll lcmNum = 1;
    // bit全探索
    vector<ll> S = IntegerToVector(bit, len(magicLevels)); // 1回目S={0} 2回目S={1} 3回目S={0,1} 4回目S={2}....
    if (len(S) == 0 || len(S) == 1) continue;

    for (int i : S){
      lcmNum = LCM(magicLevels[i], lcmNum);
    }
    d(lcmNum)
    d(ll(r/lcmNum) - ll(l/lcmNum))
    defeatedMonstersNum -= ll(r/lcmNum) - ll(l/lcmNum);

  }
  d(defeatedMonstersNum)
  p(levelRange - defeatedMonstersNum)
}



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
