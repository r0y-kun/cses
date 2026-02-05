#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  long long cnt=1, ans=1;
  for (long long i = 1; i < s.size()+1; i++) {
    if (s[i]==s[i-1]) cnt++;
    else {
      if (s[i]!=s[i-1]){
        if (cnt>ans) ans=cnt;
        cnt=1;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
