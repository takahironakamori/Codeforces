#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string answer = "";

  int current = 1;
  while (answer.size() < n) {
    answer += to_string(current);
    current++;
  }

  cout << answer[n - 1] << endl;

}