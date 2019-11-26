#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string home;
  cin >> home;

  int count = 0;  
  
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s.substr(0,3) == home) {
      count++;
    }
    if (s.substr(5,3) == home) {
      count--;
    }
  }

  if (count == 0) {
    cout << "home" << endl;
  } else {
    cout << "contest" << endl;
  }

}