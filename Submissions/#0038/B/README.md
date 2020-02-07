### School Personal Contest #1 (Winter Computer School 2010/11) - Codeforces Beta Round #38 (ACM-ICPC Rules)

# B. Chess

  [問題はこちら](https://codeforces.com/problemset/problem/38/B)

- 概要<br>
  8 × 8 のチェス盤にルーフとナイトが 1 個ずつ配置されている。<br>
  チェス盤の一方の位置は、1 から 8 で、もう一方が a から h で表す。<br>
  このチェス盤にナイトのコマを 1 つ配置したいが、お互いが取れる位置以外の場所に置きたい。<br>
  そこで、置くことができる場所の数を出力せよ。

- 発想<br>
  ルーフは、縦と横の 1 列移動することができるので、置くことができない。<br>
  ナイトは、ナイトの位置を（x, y）とすると、<br>
  （x-2, y-1）、（x-1, y-2）、（x+1, y-2）、（x+2, y-1）<br>
  （x-2, y+1）、（x-1, y+2）、（x+1, y+2）、（x+2, y+1）<br>
  の8ヶ所に移動することができるので、置くことができない。<br>
  ただし、8 × 8 の枠内を超えた位置はダメ。<br>
  また、ナイトが置かれている位置（x, y）にも置くことができない。<br>
  さらに、ルーフが取られる場所にもナイトを置くこともできない。<br>
  ルーフの位置を（x, y）とするその場所は、ナイトの位置と同じ計算方法で求めることができる 8 ヶ所である。<br>
  ただし、これも 8 × 8 の枠内を超えた位置はダメ。<br>
  これらの位置を set に入れるとダブりを考慮する必要はないので、<br>
  64 - set の長さが回答となる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string rook, knight;
    cin >> rook >> knight;

    set<pair<int,int>> answer;

    int rRook = rook[0] - 'a' + 1;
    int cRook = rook[1] - '0';

    int rKnight = knight[0] - 'a' + 1;
    int cKnight = knight[1] - '0';

    answer.insert(make_pair(rRook, cRook));
    answer.insert(make_pair(rKnight, cKnight));

    for (int i = 1; i <= 8; i++) {
      answer.insert(make_pair(rRook, i));
      answer.insert(make_pair(i, cRook));
    }

    vector<pair<int, int>> r(8);
    r[0] = make_pair(rRook - 2, cRook - 1);
    r[1] = make_pair(rRook - 1, cRook - 2);
    r[2] = make_pair(rRook + 1, cRook - 2);
    r[3] = make_pair(rRook + 2, cRook - 1);
    r[4] = make_pair(rRook - 2, cRook + 1);
    r[5] = make_pair(rRook - 1, cRook + 2);
    r[6] = make_pair(rRook + 1, cRook + 2);
    r[7] = make_pair(rRook + 2, cRook + 1);

    vector<pair<int, int>> k(8);
    k[0] = make_pair(rKnight - 2, cKnight - 1);
    k[1] = make_pair(rKnight - 1, cKnight - 2);
    k[2] = make_pair(rKnight + 1, cKnight - 2);
    k[3] = make_pair(rKnight + 2, cKnight - 1);
    k[4] = make_pair(rKnight - 2, cKnight + 1);
    k[5] = make_pair(rKnight - 1, cKnight + 2);
    k[6] = make_pair(rKnight + 1, cKnight + 2);
    k[7] = make_pair(rKnight + 2, cKnight + 1);

    for (int i = 0; i < 8; i++) {
      if (0 < r[i].first && 0 < r[i].second && r[i].first < 9 && r[i].second < 9) {
        answer.insert(r[i]);
      }
      if (0 < k[i].first && 0 < k[i].second && k[i].first < 9 && k[i].second < 9) {
        answer.insert(k[i]);
      }
    }

    cout << 64 - answer.size() << endl;

    return 0;

  }
  ```
