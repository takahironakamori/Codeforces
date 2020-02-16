#include <bits/stdc++.h>
using namespace std;

int main() {

  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);

  vector<int> V1(26);
  vector<int> v1(26);

  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] == ' ') {
      continue;
    }
    int n_ = (int) s1[i] - 0;
    if (64 < n_ && n_ < 91) {
      V1[(int) s1[i] - 'A']++;
    } else {
      v1[(int) s1[i] - 'a']++;
    }
  }

  bool answer = true;

  for (int i = 0; i < s2.size(); i++) {
    if (s2[i] == ' ') {
      continue;
    }
    int n_ = (int) s2[i] - 0;
    if (64 < n_ && n_ < 91) {
      if (V1[(int) s2[i] - 'A'] == 0){
        answer = false;
        break;
      } else {
        V1[(int) s2[i] - 'A']--;
      }
    } else {
      if (v1[(int) s2[i] - 'a'] == 0){
        answer = false;
        break;
      } else {
        v1[(int) s2[i] - 'a']--;
      }
    }
  }

  if (answer) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;

}
