#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n; cin >> n;
  vector<long long> v(n);
  long long cnt=0;
  for (auto &x : v) cin >> x;

  for (long long i=1; i<n; i++){
    if (v[i]<v[i-1]){
      cnt += v[i-1] - v[i];
      v[i] =v[i-1];
    }
  }

  cout << cnt << endl;
  return 0;
}
