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
