#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int answer1 = 1;
  int answer2 = 1;
  int answer3 = n - 2;

  if (n % 3 == 2) {
    answer1 = 1;
    answer2 = 2;
    answer3 = n - 3;
  }

  cout << answer1 << " ";
  cout << answer2 << " ";
  cout << answer3 << endl;

}