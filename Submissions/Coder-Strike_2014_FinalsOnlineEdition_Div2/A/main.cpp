#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, a, b;
  cin >> n >> a >> b;

  vector<int> answer(n);
  for (int i = 0; i < a; i++) {
    int v;
    cin >> v;
    answer[v - 1] = 1;
  }

  for (int i = 0; i < b; i++) {
    int v;
    cin >> v;
    answer[v - 1] = 2;
  }

  for (int i = 0; i < n; i++) {
    cout << answer[i] << " ";
  }
  cout << endl;
  
}