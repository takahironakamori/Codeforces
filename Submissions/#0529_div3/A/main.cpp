#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  string answer = "";

  int count = 0;
  int i = 0;

  while (i < n) {
    answer += s[i];
    count++;
    i += count;
  }

  cout << answer << endl;  

}