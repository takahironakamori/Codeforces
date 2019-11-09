#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;
  
  int answer = 0;
  int current = 1;
  for (int i = 0; i < s.length(); i++) {
    int next = (int) s[i] - 96;
    answer += min(abs(current - next), 26 - abs(current - next));
    current = next;
  }
  
  cout << answer << endl;

}