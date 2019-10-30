#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  deque<int> que;
  for (int i = 1; i < n; i++) {
    if (a[i] <= a[i-1]) {
      que.push_back(a[i-1]);
    }
  }
  que.push_back(a[n-1]);

  cout << que.size() << endl;

  while (!que.empty()) {
    cout << que.front() << " ";
    que.pop_front();
  }

  cout << endl;

}