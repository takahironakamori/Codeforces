#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  int answer = n;

  for (int i = 0; i < n - 1; i++) {
    if (s[i] != s[i + 1]){
      i++;
      answer--; 
    }
  }

  cout << answer << endl;

}