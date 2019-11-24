#include <bits/stdc++.h>
using namespace std;

int main() {

  int count;
  cin >> count;

  string s1, s2;
  cin >> s1 >> s2;

  if (s2 == "week") {
    if (count == 5 || count == 6) {
      cout << 53 << endl;
    } else {
      cout << 52 << endl;
    }
  } else {
    if (count == 31) {
      cout << 7 << endl;
    } else if (count == 30) {
      cout << 11 << endl; 
    } else {
      cout << 12 << endl; 
    }
  }

}