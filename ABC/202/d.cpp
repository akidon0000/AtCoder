#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x) for (long unsigned int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

bool ok = false;
vector<string> datas;
const int inf = 1001001001;
const ll INF = 1LL << 60; //無限大

int ans=0,num=0,counter=0;
string s,str = "";

bool hantei(string S,int aa, int bb) {
	int depa = 0;
  int depb = 0;
  num = S.size();
  // d(S)
	for (ll i = 0; i < num; i++) {
		if (S[i] == 'a') depa += 1;
		if (S[i] == 'b') depb += 1;
		if (depa > aa) return false;
    if (depb > bb) return false;
	}
	if (depa == aa && depb == bb) return true;
	return false;
}

int main(){
  ll a,b,k;
  cin >> a >> b >> k;
  num = a + b;

  for (int i = 0; i < (1 << num); i++) {
		string Candidate = "";
		for (int j = num - 1; j >= 0; j--) {
			// メモ : (i & (1 << j)) = 0 というのは、i の j ビット目（2^j の位）が 0 であるための条件。
			if ((i & (1 << j)) == 0) {
				Candidate += "a";
			}
			else {
				Candidate += "b";
			}
		}
    // p(Candidate)
    bool I = hantei(Candidate,a,b);
    if (I == true) {
      counter++;
      if (counter == k){
        p(Candidate)
      }
      // p("aa1")
      }
    // f(datas)
    // datas[i] = Candidate;
    // Candidate = "";
		// bool I = hantei(Candidate);
		// if (I == true) cout << Candidate << endl;
	}
  // p(datas[k])


  return 0;
}
