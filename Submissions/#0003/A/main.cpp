#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string s, t;
  cin >> s >> t;
 
  map<char, int> side;
  side['a'] = 1;
  side['b'] = 2;
  side['c'] = 3;
  side['d'] = 4;
  side['e'] = 5;
  side['f'] = 6;
  side['g'] = 7;
  side['h'] = 8;

  int startS = side[s[0]];
  int startV = s[1] - '0';

  int endS = side[t[0]];
  int endV = t[1] - '0';

  vector<string> answer;

  while (startS != endS || startV != endV) {
    string a = "";
    if (startS < endS) {
      startS++;
      a += "R";
    } else if(endS < startS) {
      endS++;
      a += "L";
    }
    if (startV < endV) {
      startV++;
      a += "U";
    } else if(endV < startV) {
      endV++;
      a += "D";
    }
    answer.push_back(a);
  }

  cout << answer.size() << endl;
  for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << endl;
  }

}