/////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, c, n) for (int i = c; i < (n); ++i)
#define yn(ok, True, False) if (ok) { p(True) } else {p(False)};
//以下debug用
#define d(x) cout << #x << "; " << x << endl;
#define p(x) cout << x << endl;
#define f(x)                         \
  for (int i = 0; i < x.size(); i++) \
    cout << #x << "[" << i << "]; " << x[i] << endl;

int a, b, c, d, e, f, i, j, m, n, M, N, L, R, ans = 0, counter = 0, num = 0;
long long llans = 0, llcounter = 0, llnum = 0;
string str, str1, str2, str3;
bool ok = false;
vector<int> datas(100);

int main()
{
  cin >> n;
  a = log10(n) + 1;
  if (a==4){
    num = 9
  }else if (a==6)
  {
    num = 9 * (pow(10, 2));
  }else if (a==8)
  {
    num = 9 * (pow(10, 2))*(pow(10,3));
  } else if (a==10)
  {
    num = 9 * (pow(10, 2))*(pow(10,3))*pow(10,4);
  }
  else if (a == 12)
  {
    num = 9 * (pow(10, 2)) * (pow(10, 3)) * pow(10, 4)*pow(10,5);
  }
// a =　桁数
// b=  桁数/2
// c= pow(10,b)        1313  >> c=100
// d = i/c                 1313/100       d = 13 上2桁
// ((d*c) % i == d)          1300%1313 == d
  b = (a / 2);
  c = pow(10, b);

  ans = 0;
  rep(i, num, n)
  {
    d = i / c;
    if ((d * c) % i == d){
      ans += 1;
    }
  }


  p(num+ans)

      return 0;
}
