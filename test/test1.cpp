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

