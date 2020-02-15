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

int main() {

  string s;
  cin >> s;

  vector<string> v = stringSplit(s, '.');

  string v_ = v[1].substr(0,1);

  double d = stod("0." + v_);

  v_ = v[0].substr(v[0].size() - 1,1);

  int n = stoi(v_);

  if (n == 9) {
    cout << "GOTO Vasilisa." << endl;
  } else {
    n += (int) round(d);
    cout << v[0].substr(0, v[0].size() - 1);
    cout << n << endl;
  }

  return 0;

}
