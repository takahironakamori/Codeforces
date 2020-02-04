### Codeforces Beta Round #9 (Div. 2 Only)

# B. Running Student

  [問題はこちら](https://codeforces.com/problemset/problem/9/B)

- 概要<br>
  生徒が 1 人（0,0）地点に止まっているバスに乗っている。<br>
  バスは、(x,0) と x 軸上を正の方向へ進む。<br>
  このバスが停まるバス停が n 箇所（（0,0）を含む）ある。<br>
  i 番目のバス停は (x<sub>i</sub>,0) の位置にある。<br>
  バスが進むスピードは v<sub>s</sub> であり、生徒が歩くスピードは v<sub>s</sub> である。<br>
  スピードは一定と考え、停車している時間も考慮する必要はない。<br>
  生徒の学校は、(x<sub>u</sub>, y<sub>u</sub>) の位置にある。<br>
  生徒が学校へ最も早く行くには、何番目のバス停で降りたらいいかを出力せよ。<br>
  複数候補がある場合は、学校に最も近いバス停で回答すること。


- 発想<br>
  各バス停で降りた場合のバスを利用したときの時間と歩く時間を計算して、最小値であるバス停の位置を出力する。<br>
  移動時間が同じ場合は、バス停の位置が大きい方を出力する。<br>
  歩く時間が短い方でもいい。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  double distance(int x1, int y1, int x2, int y2) {
    long long x =(long long) (x2 - x1) * (x2 - x1);
    long long y =(long long) (y2 - y1) * (y2 - y1);
    return (double) sqrt(x + y);
  }

  int main() {

    int n, vb, vs;
    cin >> n >> vb >> vs;

    vector<int> xn(n);
    for (int i = 0; i < n; i++) {
      cin >> xn[i];
    }

    int xu, yu;
    cin >> xu >> yu;

    int answer;
    double minTime;
    double walk;

    for (int i = 1; i < n; i++) {
      double d = distance(xn[i], 0, xu, yu);
      double w = (double) d / vs;
      double time =(double) (xn[i] - 0) / vb + w;
      if (i == 1) {
        minTime = time;
        walk = w;
        answer = i + 1;
      } else {
        if (time < minTime) {
          minTime = time;
          walk = w;
          answer = i + 1;
        } else if (time == minTime) {
          if (w < walk) {
            minTime = time;
            walk = w;
            answer = i + 1;
          }
        }
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
