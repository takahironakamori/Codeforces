#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<pair<int, int>> card(n);

  for (int i = 0; i < n; i++) {
    cin >> card[i].first;
    card[i].second = i + 1;
  }
  
  sort(card.begin(), card.end());
  
  for (int i = 0; i < n / 2; i++) {
    cout << card[i].second;
    cout << " ";
    cout << card[n - 1 - i].second << endl;
  }

}