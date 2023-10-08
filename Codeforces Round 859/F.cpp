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
    int n, m, i1, j1, i2, j2;
    string d;
    cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> d;
    int bounces = 0;
    bool found = 0;
    for (int i = 0; i < 2*n*m; i++) {
      if (i1 == i2 && j1 == j2) {
        found = 1;
        break;
      }
      bool b = 0;
      if (i1 == 1 && d[0] == 'U') {
        d[0] = 'D';
        b = 1;
      }
      if (i1 == n && d[0] == 'D') {
        d[0] = 'U';
        b = 1;
      }
      if (j1 == 1 && d[1] == 'L') {
        d[1] = 'R';
        b = 1;
      }
      if (j1 == m && d[1] == 'R') {
        d[1] = 'L';
        b = 1;
      }
      bounces += b;
      i1 += (d[0] == 'U' ? -1 : 1);
      j1 += (d[1] == 'L' ? -1 : 1);
    }
    cout << (found ? bounces : -1) << '\n';
  }
}