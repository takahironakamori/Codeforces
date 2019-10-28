#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int answer = 0;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "Tetrahedron") {
      answer += 4;
    } else if (s == "Cube") {
      answer += 6;
    } else if (s == "Octahedron") {
      answer += 8;
    } else if (s == "Dodecahedron") {
      answer += 12;
    } else {
      answer += 20;
    }
  }

  cout << answer << endl;

}