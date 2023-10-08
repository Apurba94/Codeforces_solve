/*
author:Apurbo94
sunday
19-03-2023

*/


#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int sesh;
  cin >> sesh;
  while (sesh--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x: a) cin >> x;
    int ans = 0;
    for (int b = 0; b < 30; b++) {
      int expect = 0;
      vector<int> pasa;
      for (int i = 0; i < n; i++) {
        if ((i>>b)&1) pasa.push_back(i), expect += a[i];
      }
      if (pasa.empty()) continue;
      cout << "? " << pasa.size();
      for (int x: pasa) cout << ' ' << x+1;
      cout << endl;
      int res;
      cin >> res;
      if (res > expect) ans |= 1<<b;
    }
    cout << "! " << ans+1 << endl;
  }
}
