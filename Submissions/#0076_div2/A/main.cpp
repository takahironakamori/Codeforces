#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  map<string,int> number;
  for (int i = 0; i < 10; i++) {
    string n_;
    cin >> n_;
    number[n_] = i;
  }

  for (int i = 0; i < 8; i++) {
    string s_ = s.substr((10 * i),10);
    cout << number[s_];
  }
  cout << endl;

  return 0;

}
