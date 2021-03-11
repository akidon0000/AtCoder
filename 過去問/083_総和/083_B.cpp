// https://atcoder.jp/contests/abc083/tasks/abc083_b

//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;


int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main(void){
    int N, A, B;
  cin >> N >> A >> B;
  int total = 0;

  for (int i = 1; i <= N; ++i) {
    int sum = findSumOfDigits(i); 
    if (A <= sum && sum <= B) { 
      total += i;
    }
  }
  cout << total << endl;
    return 0;
}