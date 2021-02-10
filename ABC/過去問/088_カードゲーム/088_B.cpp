// https://atcoder.jp/contests/abc088/tasks/abc088_b

//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;

    int nums[210];
    for (int i=0;i<N;i++){
        cin >> nums[i];
    }

    sort(nums, nums + N);

    int A=0,B=0;
    for (int j=0;j<N;j++){
        if (j%2 ==0) A += nums[j];
        else B += nums[j];
    }

    cout << abs(A-B) << endl;

    return 0;
}