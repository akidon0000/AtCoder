/*
https://atcoder.jp/contests/abc051/tasks/abc051_b
2つの整数 K,Sが与えられます。3つの変数 X,Y,Zがあり、0≦X,Y,Z≦Kを満たす整数の値を取ります。
X+Y+Z=Sを満たす X,Y,Zへの値の割り当ては何通りありますか。
*/

//GIVE ME AC!!!

#include <iostream>
using namespace std;

int main(){
    int K,S,count=0;
    cin >> K >> S;
    for (int i=0; i<K+1; i++){
        for (int j=0; j<K+1; j++){
            if (i+j <= S && S-i-j <= K){
                count++;
            }
        }
    }
    cout << count << endl;
}
