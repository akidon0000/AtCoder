#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, c, n) for (ll i = c; i < (n); ++i)
#define yn(ok, True, False) if (ok) { p(True) } else {p(False)};
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x) for (int i = 0; i < x.size(); i++) cout << #x << "[" << i << "]; " << x[i] << endl;

// 入力
int N;
int A[1 << 18], B[1 << 18];

// グラフ
const int INF = (1 << 29);
vector<int> G[1 << 18];
int dist[1 << 18];

void getdist(int start) {
	// 幅優先探索（BFS）により、最短距離を計算
	for (int i = 1; i <= N; i++) dist[i] = INF;

	queue<int> Q;
	Q.push(start);
	dist[start] = 0;

	while (!Q.empty()) {
		int pos = Q.front(); Q.pop();
		for (int to : G[pos]) {
			if (dist[to] == INF) {
				dist[to] = dist[pos] + 1;
				Q.push(to);
			}
		}
	}
}

int main() {
	// Step #1. 入力
	cin >> N;
	for (int i = 1; i <= N - 1; i++) {
		cin >> A[i] >> B[i];
		G[A[i]].push_back(B[i]);
		G[B[i]].push_back(A[i]);
	}

	// Step #2. 頂点 1 からの最短距離を求める
	// maxid1: 頂点 1 から最も離れている（最短距離が長い）頂点
	getdist(1);
	int maxn1 = -1, maxid1 = -1;
	for (int i = 1; i <= N; i++) {
		if (maxn1 < dist[i]) {
			maxn1 = dist[i];
			maxid1 = i;
		}
	}
  // d(maxid1)

	// Step #3. 頂点 maxid1 からの最短距離を求める
	// maxn2: 木の直径（最短距離の最大値）
	getdist(maxid1);
	int maxn2 = -1;
	for (int i = 1; i <= N; i++) {
		maxn2 = max(maxn2, dist[i]);
	}
  // d(maxn2)

	// Step #4. 出力
	cout << maxn2 + 1 << endl;
	return 0;
}
