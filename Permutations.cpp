#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  int z=n-1;
  if (n>3) {
    while (z>0) {
      cout << z << " ";
      z = z-2;
    }
    while (n>0) {
      cout << n << " ";
      n = n-2;
    }
  }else {
    if (n==1) cout << 1 << endl;
    else cout << "NO SOLUTION\n";
  }
  return 0;
}
