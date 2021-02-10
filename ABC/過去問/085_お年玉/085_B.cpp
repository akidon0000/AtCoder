// https://atcoder.jp/contests/abc085/tasks/abc085_b

//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;

    int nums[110];
    for (int i=0;i<N;i++){
        cin >> nums[i];
    }

    set<int> values; // insert するときに重複を取り除いてくれます

    for (int i = 0; i < N; ++i) {
        values.insert(nums[i]); // 挿入します
    }

    for (int j = 0; j < values.size(); ++j) {
        if (j==0) continue;
        
        if (values[j] > values[j-1]){

        }
    }
    cout << values.size() << endl;

    return 0;
}