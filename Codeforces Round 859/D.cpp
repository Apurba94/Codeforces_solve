#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n, q;
    cin >> n >> q;
    vector<int> s(n+1);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      s[i+1] = s[i]^(x&1);
    }
    while (q--) {
      int l, r, k;
      cin >> l >> r >> k;
      cout << (s[n]^s[l-1]^s[r]^((r-l+1)&k&1) ? "YES" : "NO") << '\n';
    }
  }
}
