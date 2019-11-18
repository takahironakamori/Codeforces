#include <bits/stdc++.h>
using namespace std;

int main() {

  string f, s;
  cin >> f >> s;

  for (int i = 0; i < f.size(); i++) {
    int answer = f[i] ^ s[i];
    cout << answer;
  }
  
  cout  << endl;

}