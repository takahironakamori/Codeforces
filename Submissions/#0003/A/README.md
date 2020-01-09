### Codeforces Beta Round #3

# A. Shortest path of the king

  [問題はこちら](https://codeforces.com/problemset/problem/3/A)
  
- 概要<br>
  チェスのボードがある。<br>
  下から上へ 1 から 8 、左から右へ a から h が付いている。左下のマスは a1 と呼び、右上は h8 と呼ぶ。<br>
  スタートのマス s とゴールのマス t が与えられるので、s から t へ最小の移動手数と移動方法を出力せよ。<br>
  なお、1 回の移動で、右（R）左（L）上（U）下（D）右上（RU）右下（RD）左上（LU）左下（LD）の 8 種類から選ぶことができる。<br>
  移動方法が複数ある場合は、どれか 1 パターンでいい。
  
  
- 発想<br>
  まず、a から h を 1 から 8 に置き換える。<br>
  スタート位置とゴール位置を横と縦それぞれの位置に分解し、<br>
  スタート位置（横）とゴール位置（横）、スタート位置（縦）とゴール位置（縦）が同じ値になるまで移動する。<br>
  スタート位置（横）とゴール位置（横）、スタート位置（縦）とゴール位置（縦）の両方が異なる場合は、斜めに移動する方が効率的。<br>

  
- コード（C++）

  ```cpp
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
  ```
    