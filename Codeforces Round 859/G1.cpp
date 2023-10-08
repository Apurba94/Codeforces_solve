/*
author:Apurbo94
sunday
19-03-2023

*/


#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x: a) cin >> x;
    sort(a.begin(), a.end());
    if (a[0] != 1) {
      cout << "NO\n";
      continue;
    }
    bool ok = 1;
    long long s = 1;
    for (int i = 1; i < n; i++) {
      if (a[i] > s) ok = 0;
      s += a[i];
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
}
