#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int n;
  cin >> n;
 
  string s;
  cin >> s;

  string answer = "";
  int count = 0;

  for (int i = 0; i < n - 1; i += 2) {
    if (s[i] == 'a' && s[i + 1] == 'a') {
      count++;
      answer += "b";
      answer += s[i + 1];
    } else if (s[i] == 'b' && s[i + 1] == 'b') {
      count++;
      answer += "a";
      answer += s[i + 1];
    } else {
      answer += s[i];
      answer += s[i + 1];
    }
  }

  cout << count << endl;
  if (count != 0) {
    cout << answer << endl;
  } else {
    cout << s << endl;
  }
}