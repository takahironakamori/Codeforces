#include <bits/stdc++.h>
using namespace std;

string f(int v, int n){
  long long ans = 0;
  for (int i = 0; 0 < v ; i++)
  {
    ans = ans + (v % n) * pow(10, i);
    v = v / n;
  }
  return to_string(ans);
}

int main() {

  int k;
  cin >> k;

  for (int i = 1; i < k; i++) {
    for (int j = 1; j < k; j++) {
      cout << f(i * j, k) << " ";
    }
    cout << endl;
  }

  return 0;

}
