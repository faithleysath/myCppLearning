// P1125
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
char s[111];
int cnt[222], maxn = 0, minn = 111;
int main() {
  cin >> s;
  for (int i = 0; s[i]; i++) { //strlen (a)
    if (++cnt[s[i]] > maxn)
      maxn = cnt[s[i]];
  }
  for (int i = 0; s[i]; i++) {
    if (cnt[s[i]] < minn) {
        minn = cnt[s[i]];
    }
  }
  int n = maxn - minn;
  if (n != 2) {
    bool flag = (false || n == 1 || !n);
    if (!(n & 1))
      flag = true;
    for (int i = 3; i < (n >> 1); i += 2) {
      if (!(n % i))
        flag = true;
    }
    if (flag) {
      cout << "No Answer\n0";
      return 0;
    }
  }
  cout << "Lucky Word\n";
  cout << n;
  return 0;
}