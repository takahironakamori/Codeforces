#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n;
  cin >> n;

  long long answer = 0;

  if (n == 1 || n == 2 ){
    answer = 1;
  } else {
    answer = n / 3 * 2;
    if (n % 3 != 0) {
      answer++;
    }
  }

  cout << answer << endl;

}