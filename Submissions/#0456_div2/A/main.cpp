#include <bits/stdc++.h>
using namespace std;

int main() {

  long long A, B, yellow, green, blue;
  cin >> A >> B >> yellow >> green >> blue;

  long long yellowcystals = yellow * 2 + green;
  long long bluecystals = blue * 3 + green;

  long long answer = 0;

  if (0 < yellowcystals - A) {
    answer = yellowcystals - A;
  }
  
  if (0 < bluecystals - B) {
    answer += bluecystals - B;
  }

  cout << answer << endl;

}