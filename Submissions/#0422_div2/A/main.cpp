#include <bits/stdc++.h>
using namespace std;

int main() {

  long A, B;
  cin >> A >> B ;

  int answer = 1;

  for (int i = 1; i <= min(A, B); i++) {
    answer *= i;
  }

  cout << answer << endl;

}