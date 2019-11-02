#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  vector<int> y(m);
  for (int i = 0; i < m; i++) {
    cin >> y[i];
  }

  deque<int> que;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (x[i] == y[j]) {
        que.push_back(x[i]);
      }
    }
  }

  while (!que.empty()) {
    cout << que.front() << " ";
    que.pop_front();
  }

  cout << endl;

}