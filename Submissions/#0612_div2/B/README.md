### Codeforces Round #612 (Div. 2)

# B. Hyperset

  [問題はこちら](https://codeforces.com/contest/1287/problem/B)
  
  
- 概要<br>
  S, E, T の 3 種類の文字で構成される k 文字の文字列が n 個与えられる。<br>
  n 枚のカードのうち同じカードはない。<br>
  n 枚のうち 3 枚のカードのセットを作りたい。<br>
  しかし、3 枚のカードそれぞれの i 番目の文字がすべて異なるか、すべて同じ文字でないといけない。<br>
  3 枚のカードのセットを作ることができる組み合わせの数を求めよ。<br>
  
  
- 発想<br>
  1 枚目のカードが SETT<br>
  2 枚目のカードが TEST<br>
  とすると、セットを作ることができるのは、EEET でないといけない。<br>
  すなわち、1 枚目と 2 枚目のカードをループで指定して、セットになりうるカードを生成する。<br>
  そして、生成した文字列が今まで 1 枚目として調べたカードに含まれていれば、組み合わせが作れる。<br>
  含まれていなければ組み合わせは作れない。<br>
  カウントがダブるため、1 枚目として調べたカードから探す必要がある。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    vector<string> card(n);

    map<string, int> mp;

    for (int i = 0; i < n; i++) {
      cin >> card[i];
    }

    long long answer = 0;

    mp[card[0]]++;

    for (int i = 1; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        string current = "";

        for (int k_ = 0; k_ < k; k_++) {
          if (card[i][k_] == card[j][k_]) {
            current += card[i][k_];
          } else {
            if (card[i][k_] != 'S' && card[j][k_] != 'S') {
              current += 'S';
            }
            if (card[i][k_] != 'E' && card[j][k_] != 'E') {
              current += 'E';
            }
            if (card[i][k_] != 'T' && card[j][k_] != 'T') {
              current += 'T';
            }
          }
        }

        if (mp.count(current)) {
          answer += mp[current];
        }

      }

      mp[card[i]]++;

    }

    cout << answer << endl;

  }
  ```

    