#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  map<string, string> mp;
  mp["purple"] = "Power";
  mp["green"] = "Time";
  mp["blue"] = "Space";
  mp["orange"] = "Soul";
  mp["red"] = "Reality";
  mp["yellow"] = "Mind";

  for (int i = 0; i < n; i++) {
    string l;
    cin >> l;
    mp[l] = "";
  }

  cout << 6 - n << endl;

  for (auto item:mp) {
    if (item.second != "") {
      cout << item.second << endl;
    }
  }

}