#include <bits/stdc++.h>
using namespace std;

int main() {

  ifstream ifs;
  ofstream ofs;
  ifs.open("input.txt");
  ofs.open("output.txt");

  int n;
  ifs >> n;

  vector<int> cups(3);
  cups[n - 1]++;

  for (int i = 0; i < 3; i++) {
    int s_, e_;
    ifs >> s_ >> e_;
    swap(cups[s_ - 1], cups[e_ - 1]);
  }

  for (int i = 0; i < 3; i++) {
    if (cups[i] == 1) {
      ofs << i + 1 << endl;
      return 0;
    }
  }

}
