#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  set<int> year;
  int current = 1;
  for (int i = 0; i < n; i++) {
    int a_;
    cin >> a_;
    if (a_ == current) {
      year.insert(2000 + i + 1);
      current++;
    }
  }

  cout << year.size() << endl;

  for(auto item:year) {
    cout << item << " ";
  }

  if(year.size() != 0) {
    cout << endl;
  }

  return 0;

}
