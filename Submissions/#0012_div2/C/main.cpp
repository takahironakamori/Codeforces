#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> price(n);
  for (int i = 0; i < n; i++){
    cin >> price[i];
  }

  sort(price.begin(), price.end());

  map<string,int> mp;
  for (int i = 0; i < m; i++){
    string s_;
    cin >> s_;
    mp[s_]++;
  }

  vector<pair<int,string>> v;
  for (auto item:mp) {
    pair<int,string> p_ = make_pair(item.second, item.first);
    v.push_back(p_);
  }

  sort(v.begin(), v.end());

  int answerMin = 0;
  int answerMax = 0;

  for (int i = 0; i < v.size(); i++) {
    int v_ = v.size() - i - 1;
    answerMin += v[v_].first * price[i];
    answerMax += v[v_].first * price[n - i - 1];
  }

  cout << answerMin << " " << answerMax << endl;

  return 0;

}
