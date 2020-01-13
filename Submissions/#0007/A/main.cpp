#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<string> v(8);

  for (int i = 0; i < 8; i++) {
    cin >> v[i];
  }

  vector<string> h(8);
  for (int i = 0; i < 8; i++) {
    string h_ = "";
    for (int j = 0; j < 8; j++) {
      h_ += v[j][i];
    }
    h[i] = h_;
  }

  int answer = 0;

  for (int i = 0; i < 8; i++) {
    if (v[i] == "BBBBBBBB"){
      answer++;
    }
    if (h[i] == "BBBBBBBB"){
      answer++;
    }
  }
  
  if (answer == 16) {
    answer = 8;
  }

  cout << answer << endl;

}