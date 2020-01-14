### Codeforces Beta Round #4(Div.2 Only)

# B. Before an Exam

  [問題はこちら](https://codeforces.com/problemset/problem/4/B)
  
- 概要<br>
  d 日後までに sumTime 時間勉強する必要がある。<br>
  i 日目に勉強できる時間は、最低 minTime_i 時間、最高 maxTime_i 時間である。<br>
  sumTime 時間勉強できる場合は YES と d 日後までの勉強時間を出力し、<br>
  できない場合は NO を出力せよ。
  
  
- 発想<br>
  minTime_x と maxTime_x の合計をそれぞれ集計しておき、<br>
  minTimeの合計 ≦ sumTime かつ sumTime ≦ maxTimeの合計なら YES になる。<br>
  d 日間の実際の時間は、すべて maxTime で行ったと仮定して、maxTime と sumTime の差分を<br>
  minTime にならないように引いてく。<br>
  そうでない場合は、NO になる。<br>

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int d, sumTime;
    cin >> d >> sumTime;

    vector<int> mx(d);
    vector<int> mn(d);
    int sumMin = 0;
    int sumMax = 0;

    for (int i = 0; i < d; i++) {
      cin >> mn[i] >> mx[i];
      sumMin += mn[i];
      sumMax += mx[i];
    }

    if (sumMin <= sumTime && sumTime <= sumMax) {
      cout << "YES" << endl;
      vector<int> answer(d);
      int dif = sumMax - sumTime;
      for (int i = 0; i < d; i++) {
        if (mx[i] - dif < mn[i]) {
          answer[i] = mn[i];
          dif -= mx[i] - mn[i];
        } else {
          answer[i] = mx[i] - dif;
          dif = 0; 
        }
      }
      for (int i = 0; i < d; i++) {
        cout << answer[i];
        if (i != d - 1) {
          cout << " ";
        }
      }
      cout << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  ```
    