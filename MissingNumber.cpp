#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n; cin >> n;

  long long val=n;
  for (long long i=1; i<n; i++) val += i;

  long long cnt=0;
  for (long long j=1; j<n; j++){
    long long x; cin >> x;
    cnt+=x;
  }
  cout << val-cnt << endl;
  return 0;
}
