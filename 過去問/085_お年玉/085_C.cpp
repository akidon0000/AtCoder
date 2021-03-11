//https://atcoder.jp/contests/abc085/tasks/abc085_c

//GIVE ME AC!!!

#include <iostream>
using namespace std;

int main(void){
    long long N,Y;

    cin >> N >> Y;
    for (int i=0; i<N+1; i++){
        for (int j=0; j<N+1-i; j++){
            if (i*10000 + j*5000 + (N-i-j)*1000 == Y){
                cout << i << ' ' << j << ' ' << (N-i-j);
                return 0;
            }
        }
    }
    cout << -1 << ' ' << -1 << ' ' << -1;
    return 0;
}