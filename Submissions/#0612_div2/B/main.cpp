#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n, k;
  cin >> n >> k;
 
  vector<string> card(n);

  map<string, int> mp;
 
  for (int i = 0; i < n; i++) {
    cin >> card[i];
  }
 
  long long answer = 0;

  mp[card[0]]++;
  
  for (int i = 1; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      string current = "";

      for (int k_ = 0; k_ < k; k_++) {
        if (card[i][k_] == card[j][k_]) {
          current += card[i][k_];
        } else {
          if (card[i][k_] != 'S' && card[j][k_] != 'S') {
            current += 'S';
          }
          if (card[i][k_] != 'E' && card[j][k_] != 'E') {
            current += 'E';
          }
          if (card[i][k_] != 'T' && card[j][k_] != 'T') {
            current += 'T';
          }
        }
      }

      if (mp.count(current)) {
        answer += mp[current];
      }

    }
    
    mp[card[i]]++;

  }

  cout << answer << endl;
 
}