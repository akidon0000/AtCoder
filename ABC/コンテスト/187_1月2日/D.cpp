//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

#define _GLIBCXX_DEBUG
#define ll = long long;
#define p(x) cout<<x<<endl;
#define rep(i,n) for (int i=0; i<(n);++i)

int a,b,c,M,N,K,H,W,L,R;
// long long a,b,c,M,N,K,H,W,L,R;
long long ans=0,counter=0;
string str;
bool ok=false;


int main(){
    cin >> N;
	vector<long long int>v(N);
	long long int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> L >> R;
		sum += L;
		v[i] = R + L * 2;
	}
	sort(v.rbegin(), v.rend());
	int ans = 0;
	for (int i = 0; i < N; i++) {
		if (sum >= 0) {
			sum -= v[i];
			ans++;
		}
	}
	cout << ans << endl;
}