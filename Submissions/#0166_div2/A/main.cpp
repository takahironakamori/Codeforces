#include <bits/stdc++.h>
using namespace std;

int main() {

  int y;
  cin >> y;

  for (int i = y + 1; y < 9001; i++) {
    int y1 = i / 1000;
    int y2 = (i % 1000) / 100;
    int y3 = (i % 100) / 10;
    int y4 = i % 10;
    if (y1 != y2 && y1 != y3 && y1 != y4 && y2 != y3 && y2 != y4 && y3 != y4) {
      cout << i << endl;
      break;
    }
  }

}