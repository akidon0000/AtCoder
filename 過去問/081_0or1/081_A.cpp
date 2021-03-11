// https://atcoder.jp/contests/abc081/tasks/abc081_a

//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

int main(void){
    string a;
    int ans = 0;
    cin >> a;

    if (a[0] == '1') ++ans;
    if (a[1] == '1') ++ans;
    if (a[2] == '1') ++ans;

    cout << ans << endl;

    return 0;
}

