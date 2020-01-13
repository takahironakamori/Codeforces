### Codeforces Beta Round #7

# A. Kalevitch and Chess

  [問題はこちら](https://codeforces.com/problemset/problem/7/A)
  
- 概要<br>
  8 × 8 マスのチェス盤の色の情報が与えられる。<br>
  W は白で、B は黒である。<br>
  行または列を塗りつぶしで、チェス盤を全部 W にしたい。<br>
  最低、行または列を何回塗りつぶしたらいいか。
  
- 発想<br>
  解答用のカウントを用意する。<br>
  与えられる 8 × 8 マスのチェス盤の色の情報から、行ごとの情報と列ごとの情報を文字列で得る。<br>
  行ごとまたは列ごとの情報の文字列が、"BBBBBBBB" の場合は、塗り潰す必要があるので、<br>
  カウントに 1 加える。<br>
  ただし、全面塗りつぶす場合は、行または列だけでいいので、カウントが 16 の場合だけ 8 を出力する。

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<string> v(8);

    for (int i = 0; i < 8; i++) {
      cin >> v[i];
    }

    vector<string> h(8);
    for (int i = 0; i < 8; i++) {
      string h_ = "";
      for (int j = 0; j < 8; j++) {
        h_ += v[j][i];
      }
      h[i] = h_;
    }

    int answer = 0;

    for (int i = 0; i < 8; i++) {
      if (v[i] == "BBBBBBBB"){
        answer++;
      }
      if (h[i] == "BBBBBBBB"){
        answer++;
      }
    }

    if (answer == 16) {
      answer = 8;
    }

    cout << answer << endl;

  }
  ```
    