#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int k = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x&1) k -= x;
      else k += x;
    }
    cout << (k > 0 ? "YES" : "NO") << '\n';
  }
}
