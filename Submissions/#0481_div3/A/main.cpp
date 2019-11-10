#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> num(1010);

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    num[v]++;
    a[i] = v;
  }

  int count = 0;
  vector<int> answer;
  for (int i = n - 1; 0 <= i; i--) {
    if (1 <= num[a[i]]) {
      answer.push_back(a[i]);
      count++;
      num[a[i]] = 0;
    }
  }

  cout << count << endl;

  for (int i = answer.size() - 1; 0 <= i ; i--) {
    cout << answer[i];
    cout << " ";
  }

  cout << endl;
  
}