#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int n;
  cin >> n;
 
  vector<int> a(n);
  vector<int> check(101);
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  sort(a.begin(), a.end());

  set<int> answer;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (check[a[j]] == 0) {
        if (a[j] % a[i] == 0) {
          check[a[j]] = 1;
          answer.insert(a[i]);
        }
      }
    }
  } 

  cout << answer.size() << endl;
 
}