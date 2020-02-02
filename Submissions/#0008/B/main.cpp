#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  set<pair<int,int>> pos;
  pos.insert(make_pair(0,0));

  int currentX = 0;
  int currentY = 0;

  string answer = "OK";

  for (int i = 0; i < s.size(); i++){

    vector<pair<int,int>> p_(4);

    if (s[i] == 'U') {
      currentY++;
      p_[0] = make_pair(currentX, currentY);
      p_[1] = make_pair(currentX, currentY + 1);
      p_[2] = make_pair(currentX - 1, currentY);
      p_[3] = make_pair(currentX + 1, currentY);
    } else if (s[i] == 'D') {
      currentY--;
      p_[0] = make_pair(currentX, currentY);
      p_[1] = make_pair(currentX, currentY - 1);
      p_[2] = make_pair(currentX - 1, currentY);
      p_[3] = make_pair(currentX + 1, currentY);
    } else if (s[i] == 'L') {
      currentX--;
      p_[0] = make_pair(currentX, currentY);
      p_[1] = make_pair(currentX, currentY + 1);
      p_[2] = make_pair(currentX, currentY - 1);
      p_[3] = make_pair(currentX - 1, currentY);
    } else {
      currentX++;
      p_[0] = make_pair(currentX, currentY);
      p_[1] = make_pair(currentX, currentY + 1);
      p_[2] = make_pair(currentX, currentY - 1);
      p_[3] = make_pair(currentX + 1, currentY);
    }

    for (int i = 0; i < 4; i++) {
      if (pos.find(p_[i]) != pos.end()) {
        answer = "BUG";
        break;
      }
    }

    pos.insert(p_[0]);

  }

  cout << answer << endl;

  return 0;

}
