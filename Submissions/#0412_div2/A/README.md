### Codeforces Round #412 (rated, Div. 2, base on VK Cup 2017 Round 3)

# A. Is it rated?

  [問題はこちら](https://codeforces.com/problemset/problem/807/A)
  
- 概要<br>
  競技プログラミングの問題がある。<br>
  参加者のレートが変わっている場合は、その問題は "rated" である。<br>
  また、"rated"の場合は、レートが低い参加者の順位が高いレートの参加者の順位より高い場合はレートが変わる。<br>
  n 人の問題開始前と終了時のレートが与えられる。<br>
  また、1 〜 n は今回の問題の順位が高い順にならんでいる。<br>
  今回の問題について rated か、unrated 、判断がつかない場合は maybe を出力せよ。  
  
  
- 発想<br>
  開始前と終了時のレートに変化があったら "rated"。<br>
  すべての人が開始前と終了時のレートが同じで、レートが降順に並んでいれば "maybe"<br>
  順位が低いのに、上位よりレートが高い人がいれば "unrated" となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> rate(n);

    string answer = "maybe";

    for (int i = 0; i < n; i++) {

      int a, b;
      cin >> a >> b;

      if (a != b) {
        answer = "rated";
      } else {
        rate[i] = a;
      }

    }

    if (answer == "maybe") {
      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          if (rate[i] < rate[j]) {
            answer = "unrated";
            break;
          }
        }
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

      int[] rate = new int[n];

      String answer = "maybe";

      for (int i = 0; i < n; i++) {

        int a = sc.nextInt();
        int b = sc.nextInt();

        if (a != b) {
          answer = "rated";
        } else {
          rate[i] = a;
        }

      }

      sc.close();

      if (answer == "maybe") {
        for (int i = 0; i < n; i++) {
          for (int j = i + 1; j < n; j++) {
            if (rate[i] < rate[j]) {
              answer = "unrated";
              break;
            }
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    