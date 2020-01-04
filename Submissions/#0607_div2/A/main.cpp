#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int t;
  cin >> t;
 
  while (0 < t) {
 
    string s;
    cin >> s;
 
    string s2 = s.substr(s.size() - 2);
 
    if (s2 == "po") {
      cout << "FILIPINO" << endl;
    } else if (s2 == "su"){
      cout << "JAPANESE" << endl;
    } else if (s2 == "da"){
      cout << "KOREAN" << endl;
    }
 
    t--;
 
  }
 
}