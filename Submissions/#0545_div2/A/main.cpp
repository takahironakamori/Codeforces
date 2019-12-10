#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n;
  cin >> n;

  int count1 = 0;
  int count2 = 0;

  vector<int> count;

  for (int i = 0; i < n; i++) {
    
    int t;
    cin >> t;

    if (t == 1) {
      if(count2 != 0) {
        count.push_back(count2);
        count2 = 0;
      }
      count1++;
    } else {
      if(count1 != 0) {
        count.push_back(count1);
        count1 = 0;
      }
      count2++;
    }

    if(i == n - 1) {
      if (count1 != 0) {
        count.push_back(count1);
      }
      if (count2 != 0) {
        count.push_back(count2);
      }
    }

  }

  int answer = 0;

  for (int i = 0; i < count.size() - 1; i++) {
    int mi = min(count[i],count[i+1]);
    answer = max(answer, mi * 2);
  }

  cout << answer << endl;

}