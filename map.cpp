//map problem :->https://www.spoj.com/problems/ADAFRIEN/
//soln:
int n, m;
  cin >> n >> m;
  map<string, int> mp;

  for (int i = 0; i < n; i++) {
    string s;
    int cost;
    cin >> s >> cost;
    mp[s] += cost;// same key r value gulo jog korci 
  }

  vector<int> vec;

  for (auto it : mp) {
    vec.pb(it.second);
  }
  sort(vec.rbegin(), vec.rend());
  int ans = 0;
  for (int i = 0; i < m; i++) {
    ans += vec[i];
  }
  cout << ans << nl;
