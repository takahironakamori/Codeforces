#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m, k;
  cin >> n >> m >> k;

  int desks = 0;
  int lanes = 0;
  int count = 0;
  
  string p = "";

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      for (int l = 0; l < 2; l++) {
        count++;
        if (count == k) {
          desks = i;
          lanes = j;
          if (l == 0) {
            p = "L";
          } else {
            p = "R";
          }
        }
      }
    }
  }

  cout << desks << " " << lanes << " " << p << endl;

}


#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m, k;
  cin >> n >> m >> k;

  int p = (k - 1) / 2;
  
  if (k % 2 == 0) {
    cout << p / m + 1 << " " << p % m + 1 << " R" << endl;
  } else {
    cout << p / m + 1 << " " << p % m + 1 << " L" << endl;
  }

}