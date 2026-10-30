#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
#define pb push_back
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(NULL);

inline int ceil_div(int a, int b) { return (a + b - 1) / b; }

inline void toLowerCase(string& s) {
  transform(s.begin(), s.end(), s.begin(), ::toupper /*tolower*/);
}

void solve() {
  int n, m;
  cin >> n >> m;
  map<string, string> mp1;
  for (int i = 0; i < n; i++)

  {
    string name, ip;
    cin >> name >> ip;
    mp1[ip] = name;
  }

  for (int i = 0; i < m; i++) {
    string name2, ip2;
    cin>>name2>>ip2;
    ip2.pop_back();
    cout << name2 << " " << ip2 << "; #" << mp1[ip2] << nl;
  }
}

signed main() {
  FAST_IO;

  int t = 1;
  // cin >> t;
  // cin.ignore();

  while (t--) solve();

  return 0;
}
