#include <bits/stdc++.h>
using namespace std;

vector<string> stringSplit(const string &str, char sep) {
  vector<string> v;
  stringstream ss(str);
  string buffer;
  while (getline(ss, buffer, sep)) {
    v.push_back(buffer);
  }
  return v;
}

struct team {
  int index;
  int point;
  int dif;
  int get;
};

bool cmp (const team &a, const team &b) {
  if (a.point > b.point) {
    return true;
  }
  if (a.point < b.point) {
    return false;
  }
  if (a.dif > b.dif) {
    return true;
  }
  if (a.dif < b.dif) {
    return false;
  }
  if (a.get > b.get) {
    return true;
  }
  if (a.get < b.get) {
    return false;
  }
  return false;
}

int main() {

  int n;
  cin >> n;

  vector<string> names(n);
  map<string, team> teams;
  for (int i = 0; i < n; i++) {
    string s_;
    cin >> s_;
    team t_ = team();
    t_.index = i;
    t_.point = 0;
    t_.dif = 0;
    t_.get = 0;
    teams[s_] = t_;
    names[i] = s_;
  }

  int count = n * (n - 1) / 2;

  for (int i = 0; i < count; i++) {
    string t_, r_;
    cin >> t_ >> r_;
    vector<string> tv_ = stringSplit(t_, '-');
    vector<string> rv_ = stringSplit(r_, ':');
    int rv0_ = stoi(rv_[0]);
    int rv1_ = stoi(rv_[1]);
    teams[tv_[0]].dif += rv0_ - rv1_;
    teams[tv_[0]].get += rv0_;
    teams[tv_[1]].dif += rv1_ - rv0_;
    teams[tv_[1]].get += rv1_;
    if (rv0_ == rv1_) {
      teams[tv_[0]].point++;
      teams[tv_[1]].point++;
    } else if (rv0_ < rv1_) {
      teams[tv_[1]].point += 3;
    } else {
      teams[tv_[0]].point += 3;
    }
  }

  vector<team> t_(n);
  int current = 0;
  for (auto item: teams) {
    t_[current] = item.second;
    current++;
  }

  sort(t_.begin(), t_.end(), cmp);

  set<string> answer;
  for (int i = 0; i < n / 2; i++) {
    answer.insert(names[t_[i].index]);
  }

  for (auto item:answer) {
    cout << item << endl;
  }

  return 0;

}
