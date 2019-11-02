#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, d;
  cin >> n >> d;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int answer = 0;

  deque<int> que;
  for (int i = 0; i < n; i++) {
    que.clear();
    que.push_back(a[i]);
    for (int j = 0; j < n; j++) {
      if (i != j) {
        if (abs(a[i] - a[j]) <= d) {
          que.push_back(a[j]);
        }
      }
    }
    answer += que.size() - 1;
  }

  cout << answer << endl;

}