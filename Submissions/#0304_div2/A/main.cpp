#include <bits/stdc++.h>
using namespace std;

int main() {

  int k, n, w;
  cin >> k >> n >> w;

  int answer = 0;

  for (int i = 0; i < w; i++){
    answer += (i + 1) * k;
  }

  answer = answer - n;

  if (0 < answer) {
    cout << answer << endl;
  } else {
    cout << 0 << endl;
  }

}