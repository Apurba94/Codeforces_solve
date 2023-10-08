#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    string s;
    cin >> n >> s;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
      if (i&1) a |= 1<<(s[i]-'a');
      else b |= 1<<(s[i]-'a');
    }
    cout << (a&b ? "NO" : "YES") << '\n';
  }
}
