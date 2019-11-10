#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  map<int, int> mp;

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    mp[v] = i;
  }

  if (k <= mp.size()) {
    
    cout << "YES" << endl;

    vector<int> answer(mp.size());
    int current = 0;
    
    for (auto item:mp) {
      answer[current] = item.second + 1;
      current++;
    }
    
    sort(answer.begin(), answer.end());
    
    for (int i = 0; i < k; i++) {
      cout << answer[i] << " ";
    }
    
    cout << endl;
  
  } else {
    cout << "NO" << endl;
  }

}