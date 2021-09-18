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

int main(){
  int N;
  vector<string> field, ansField, rotateField, testField;

  // 入力受け取り
  cin >> N;

  field.resize(N + 1);
  ansField.resize(N + 1);
  rotateField.resize(N + 1);
  testField.resize(N + 1);

  for (int n = 0; n < N; ++n) cin >> field[n];
  for (int n = 0; n < N; ++n) cin >> ansField[n];


  // 0度の時

  rotateField = field;
  // 横にスライド
  rep(_,N){
    rep(h,N){
      rep(w,N){
        // 端っこ
        if (w+1 == N){
          w = -1;
        }
        testField[h][w+1] = rotateField[h][w];
      }
    }

    if (testField == ansField){
      p("Yes");
      return 0;
    }
    rotateField = testField;
  }



  // 180度の時

  rotateField = field;
  // 横にスライド
  rep(_,N){
    rep(h,N){
      rep(w,N){
        // 端っこ
        if (w+1 == N){
          w = -1;
        }
        testField[h][w+1] = rotateField[h][w];
      }
    }

    if (testField == ansField){
      p("Yes");
      return 0;
    }
    rotateField = testField;
  }













  // 4回
  rep(l,4){
    // 90度繰り返し
    rep(i,N){
      rep(j,N){
        testField[j][N-1-i] = field[i][j];
        // d(field[i][j]);
      }
    }
    // この時点で正解か判定
    if (testField == ansField){
      p("Yes");
      return 0;
    }

    // n回 横にスライド
    rep(q,N){
      rep(h,N){
        rep(w,N){
          // 端っこ
          if (w+1 == N){
            w = -1;
          }
          testField[h][w+1] = field[h][w];

        }
      }

      if (testField == ansField){
        p("Yes");
        return 0;
      }
      field = testField;
    }
  }

  p("No");

  return 0;
}
