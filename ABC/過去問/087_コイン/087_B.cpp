// https://atcoder.jp/contests/abc087/tasks/abc087_b

//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int A,B,C,X,count=0;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;


    for (int i=0;i<A+1 ;i++){
        for (int j=0;j<B+1;j++){
            for (int l=0;l<C+1;l++){
                if (i*500 + j * 100 + l * 50 == X) count++;
            }
        }
    }
    
    
    cout << count << endl;

    return 0;
}

