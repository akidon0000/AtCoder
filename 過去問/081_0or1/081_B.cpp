// https://atcoder.jp/contests/abc081/tasks/abc081_b

//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N,count=-1;
    bool a = true;
    cin >> N;

    vector<int> nums(210);

    for (int i=0;i<N;i++){
        cin >> nums[i];
    }

    while(a){
        count++;
        for (int j=0;j<N;j++){
            if (nums[j]%2 != 0) {
                a = false;
                break;
            }
            nums[j] = nums[j]/2;
        }
    }
    cout << count << endl;

    return 0;
}

