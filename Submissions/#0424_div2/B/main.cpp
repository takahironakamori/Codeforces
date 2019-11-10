#include <bits/stdc++.h>
using namespace std;

int main() {

  string A, B, C;
  cin >> A >> B >> C;
  map<char, char> mp;

  for (int i = 0; i < 26; i++) {
    int a = (int) A[i];
    int b = (int) B[i];
    mp[char(a)] = char(b);
    mp[char(a - 32)] = char(b - 32);
  }

  for (int i = 0; i < C.length(); i++) {
    int c = (int) C[i];
    if (65 <= c && c <= 90) {
      cout << mp[C[i]];
    } else if (97 <= c && c <= 122) {
      cout << mp[C[i]];
    } else {
      cout << C[i];
    }
    
  }

  cout << endl;

}