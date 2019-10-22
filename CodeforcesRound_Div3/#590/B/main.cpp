#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int n,k;
  cin >> n >> k;

  map<int, int> mp;
  list<int> li;
  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    if (mp[v] == 0) {
      li.push_front(v);
      mp[v] = 1;
    }
    if (k < li.size()){
      mp[li.back()] = 0;
      li.pop_back();
    }
  }

  int li_count = 0;
  cout << li.size() << endl;
  for (auto item: li) {
    cout << item; 
    li_count++;
    if (li_count == li.size()) {
      cout << endl;
    } else {
      cout << " ";
    }
  }

}