#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string answer = "EASY";

  for (int i = 0; i < n; i++) {

    int a;
    cin >> a;

    if (a == 1){
      answer = "HARD";
    }

  }

  cout << answer << endl;

}