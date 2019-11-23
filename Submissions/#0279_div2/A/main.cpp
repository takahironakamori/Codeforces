#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  map<int, int> map1; // programming
  map<int, int> map2; // math
  map<int, int> map3; // PE

  int countMap1 = 0;
  int countMap2 = 0;
  int countMap3 = 0;
  
  for (int i = 0; i < n; i++) {
    char t;
    cin >> t;
    if (t == '1') {
      map1[countMap1] = i + 1;
      countMap1++;
    } else if (t == '2') {
      map2[countMap2] = i + 1;
      countMap2++;
    } else {
      map3[countMap3] = i + 1;
      countMap3++;
    }
  }

  int count = (int) map1.size();
  count = min(count, (int) map2.size());
  count = min(count, (int) map3.size());
  
  cout << count << endl;
  for (int i = 0; i < count; i++) {
    cout << map1[i] << " " << map2[i] << " " << map3[i] << endl;
  }

}