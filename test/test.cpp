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

int main(){
  ll ans = 0;
  ll ansans = 0;

  

  rep(i,2){ // D 500
    rep(j,5){ // C 100
      rep(k,2){ // L 50
        rep(l,5){ // X 10
          rep(m,2){ // V 5
            rep(n,5){ // I 1
            if (j == 4){

            } || l == 4 || n == 4){

            }
              if (i+j+k+l+m+n == 7){
                ans = i*500 + j*100 + k*50 + l*10 + m*5 + n*1;
                if (1 <= ans && ans < 1000){
                  ansans += ans;
                }
              }
            }
          }
        }
      }
    }
  }
  p(ansans)
}


// #5
// int main(){
//   string str = "141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006606315588174881520920962829254091715364367892590360011330530548820466521384146951941511609433057270365759591953092186117381932611793105118548074462379962749567351885752724891227938183011949129833673362440656643086021394946395224737190702179860943702770539217176293176752384674818467669405132000568127145263560827785771342757789609173637178721468440901224953430146549585371050792279689258923542019956112129021960864034418159813629774771309960518707211349999998372978049951059731732816096318595024459455346908302642522308253344685035261931188171010003137838752886587533208381420617177669147303";

//   ll len = str.size();

//   v<ll> aa(100);
//   rep(i,100) aa[i] = 0;

//   rep(i,len-1){
//     string s = "";
//     // s += str[i] + str[i+1];
//     s = str.substr(i,2);
//     d(s)
//     aa[stoi(s)]++;
//   }

//   ll maxNum = 0;
//   rep(i,100) {
//     maxNum = max(aa[i], maxNum);
//   }
//   rep(i,100){
//     if (aa[i] == 17){
//       p(i)
//     }
//   }
//   d(maxNum)
//   // auto Iter1 = lower_bound(aa.begin(), aa.end(), 4);
//   // auto Iter2 = lower_bound(nums.begin(), nums.end(), 9);

//   // keyと同じ以上の最も近い値を返す
//   // cout << *Iter1 << endl; // 4
//   // p(max_element(aa,aa+100))
// }


// #4
// int main(){
//   ll mod = 5000;

//   ll ans = 0;
//   repp(a,1,mod){
//     repp(b,a+1,mod+1){
//       ll num = pow(a,2) + pow(b,2);
//       if (ceil(sqrt(num)) == floor(sqrt(num))){
//         if (a*b/2 < mod){
//           ans++;
//         }
//       }
//     }
//   }
//   p(ans)
// }


// #3
// int main(){
//   ll ans = 0;
//   repp(i,1,33334){
//   // repp(i,1,100){
//     if (i%3 == 0){
//       ans += i;
//       d(i)
//       continue;
//     }
//     for (auto a:to_string(i)){
//       if (a == '3'){
//         ans += i;
//         d(i)
//         break;
//       }
//     }
//   }
//   p(ans)
// }






// #2
// //Nの約数を全て配列に入れて返す
// vector<long long> enum_divisors(long long N) {
//     vector<long long> res;
//     for (long long i = 1; i * i <= N; ++i) {
//         if (N % i == 0) {
//             res.push_back(i);
//             // 重複しないならば i の相方である N/i も push
//             if (N / i != i) res.push_back(N / i);
//         }
//     }
//     // 小さい順に並び替える
//     sort(res.begin(), res.end());
//     ll b = 30000000;
//     ll ans = 0;
//     for (ll q : res){
//       if (q > b){
//         p(ans)
//         return res;
//       }
//       ans += q;
//     }
//     return res;
// }

// int main(){
//   ll a = 1234567890;
//   // ll b = 30000000;

//   // ll ans = 0;
//   enum_divisors(a);

//   return 0;
// }



// #1
// ll ans = 0;
//   repp(i,1,101){
//     ans += pow(i,4);
//     d(i)
//     d(pow(i,4))
//   }
//   p(ans)
//   return 0;
