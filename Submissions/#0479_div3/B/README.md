### Codeforces Round #479 (Div. 3)

# B. Two-gram

  [問題はこちら](https://codeforces.com/problemset/problem/977/B)
  
- 概要<br>
  n 文字の英大文字で構成する文字列 s がある。<br>
  この文字列から文字の順番を維持しながら 2 文字を抜き出す。<br>
  例：BBAABBBA だと BB、BA、AA、AB がある。<br>
  s の中で最も多い 2 文字の文字列を 1 つ出力せよ。
  
  
- 発想<br>
  キーを 2 文字の文字列、値を文字列を使っている回数の map を使う。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    map<string, int> mp;

    for (int i = 0; i < n - 1; i++) {
      string s_ = s.substr(i, 2);
      mp[s_]++;
    }

    string answer = "";
    int maxCount = 0;

    for (auto item:mp) {
      if (maxCount < item.second) {
        maxCount = item.second;
        answer = item.first;
      }
    }

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();
      String s = sc.next();
      sc.close();

      TreeMap<String, Integer> mp = new TreeMap<>();

      for (int i = 0; i < n - 1; i++) {
        String s_ = s.substring(i, i + 2);
        if (mp.containsKey(s_)) {
          int v_ = mp.get(s_);
          mp.put(s_, v_ + 1);
        } else {
          mp.put(s_, 1);
        }
      }

      String answer = "";
      int maxCount = 0;

      for (Map.Entry<String, Integer> map : mp.entrySet()) {
        if (maxCount < map.getValue()) {
          maxCount = map.getValue();
          answer = map.getKey();
        }
      }

      System.out.println(answer);

    }

  }
  ```
    