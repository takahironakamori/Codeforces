### Codeforces Beta Round #35 (Div. 2)

# A. Shell Game

  [問題はこちら](https://codeforces.com/contest/35/problem/A)


- 概要<br>
  今日は Z 市の住民はいかさまゲームを楽しむ日。<br>
  住民は、息をのむようなパフォーマンスを見るために、メイン広場に集められる。<br>
  パフォーマーは 3 つの不透明なカップを底を上にして一列に置く。<br>
  それから、彼は小さなボールをカップの一つに入れて、素早くシャッフルする。そして、3 回シャッフルする。<br>
  その後、見物人はボールが入っていると思うカップを一つ選ぶ。それが、正解ならば賞がもらえる。<br><br>
  あなたはボールを見つけることができるでしょうか。<br>


- 発想<br>
  入出力が標準入力、出力ではない点に注意する。<br>
  要素数 3 の配列を用意して、手順通りに入れ替える。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    ifstream ifs;
    ofstream ofs;
    ifs.open("input.txt");
    ofs.open("output.txt");

    int n;
    ifs >> n;

    vector<int> cups(3);
    cups[n - 1]++;

    for (int i = 0; i < 3; i++) {
      int s_, e_;
      ifs >> s_ >> e_;
      swap(cups[s_ - 1], cups[e_ - 1]);
    }

    for (int i = 0; i < 3; i++) {
      if (cups[i] == 1) {
        ofs << i + 1 << endl;
        return 0;
      }
    }

  }
  ```
