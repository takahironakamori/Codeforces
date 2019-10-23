#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {

    int n;
    cin >> n;

    vector<int> p(n);
    for (int j = 0; j < n; j++) {
      cin >> p[j];
      p[j]--;
    }

    vector<int> answer(n);
    vector<int> used(n);

    for (int j = 0; j < n; j++) {
      if (!used[j]) {
        vector<int> c;
        while (!used[j]) {
          c.push_back(j);
          used[j] = 1;
          j = p[j];
        }
        for (auto item: c) {
          answer[item] = c.size();
        }
      }
    }

    for (int j = 0; j < n; j++) {
      cout << answer[j] << " ";
    }
    cout  << endl;

  }

}