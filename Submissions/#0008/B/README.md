### Codeforces Beta Round #8

# B. Obsession with Robots

  [問題はこちら](https://codeforces.com/problemset/problem/8/B)

- 概要<br>
  ロボットの移動経路が文字列として与えられる。<br>
  ロボットが最短ルートである地点に進んでいるのかを確認したい。<br>
  ロボットは、マス目上を移動しており、<br>
  U の場合は 1 マス上<br>
  D の場合は 1 マス下<br>
  R の場合は 1 マス右<br>
  L の場合は 1 マス左<br>
  に移動する。<br>
  あるマス目には、ロボットが通ることができない箇所もある。<br>
  以上の条件で、ロボットが最短経路を進んだと言える場合は、OK を、<br>
  最短経路を進んでいない場合は BUG を出力せよ。

- 発想<br>
  最短経路を進んでいない場合は、以下の場合である。<br>
  ・過去に 1 度同じ位置を通ったことがある場合<br>
  ・過去に進んできた方向以外の 3 方向で 1 マス離れた位置を通ったことがある場合<br>
  　例えば、U で (3,2) の位置に進んだ場合、過去に (3,3)、(2,2)、(4,2) を通ったことがある場合は最短ルートではない。


- コード（C++）

  ```cpp
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
  ```
