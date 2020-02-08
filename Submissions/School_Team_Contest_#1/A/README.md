### School Team Contest #1 (Winter Computer School 2010/11)

# F. Pacifist frogs

  [問題はこちら](https://codeforces.com/contest/39/problem/F)

- 概要<br>

  Thumbelina は小さな島の沼地から海岸に行きたいと思っている<br>。
  小さな島と海岸を結ぶ直線に沿って位置する丘によってのみ海岸に行くことができる。<br>
  丘には 1 から n までの番号が付けられ、丘の数は、丘と島の間のメートル単位の距離に等しいと仮定する。<br>
  n 番目の丘と海岸の間の距離も 1 メートルとする。<br>

  Thumbelina は、そのようなジャンプをするには小さすぎるので、沼地に住んでいるカエルの協力を得る。<br>
  Thumbelina は m 匹のからカエルから 1 匹のカエルを選択する。<br>
  各カエルには一定のジャンプ長があり、Thumbelina がジャンプ長が d のカエルを選択したとき、カエルは丘 d の島からジャンプし、2d、3dのように海岸に着くまでジャンプする。<br>

  ただし、カエルが蚊のいる丘の上でジャンプすると、カエルは蚊を潰してしまう。蚊がいる丘は k 個あり、蚊がいる丘の番号を与えられる。<br>
  できるだけ潰してしまう蚊の数を少なくできるカエルを選択したとき、選択できるカエルの数とそのカエルの番号を出力せよ。


- 発想<br>
  各カエルについて、潰してしまう蚊の数を数えて、最も少ない蚊の数であるカエルの番号を出力する。  


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> d(m);
    for (int i = 0; i < m; i++) {
      cin >> d[i];
    }

    vector<int> h(k);
    for (int i = 0; i < k; i++) {
      cin >> h[i];
    }

    vector<int> sum(m);
    for (int i = 0; i < m; i++) {
      int current = 0;
      for (int j = 0; j < k; j++) {
        if (h[j] % d[i] == 0) {
          current++;
        }
      }
      sum[i] = current;
    }

    int minSum = 1000000000;
    for (int i = 0; i < m; i++) {
      minSum = min(minSum, sum[i]);
    }

    int answer = 0;
    for (int i = 0; i < m; i++) {
      if (minSum == sum[i]) {
        answer++;
      }
    }

    cout << answer << endl;

    int flg = true;
    for (int i = 0; i < m; i++) {
      if (minSum == sum[i]){
        if (flg) {
          flg = false;
          cout << i + 1;
        } else {
          cout << " " << i + 1;
        }
      }
    }
    cout << endl;

    return 0;

  }
  ```
