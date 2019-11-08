### Codeforces Round #357 (Div. 2)

# A. A Good Contest

  [問題はこちら](https://codeforces.com/problemset/problem/681/A)
  
- 概要<br>
  レートは2400以上になると赤レートになる。<br>
  Anton は赤レートになりたい。<br>
  赤レートでレートが増えた人よりいいパフォーマンスをすればいいと考えた。<br>
  n 人が参加したコンテストの実施前と実施後のレートが与えられる。<br>
  Anton の考えに基づくと参加した方がいい場合は YES を、そうでなければ NO を出力せよ。
  
- 発想<br>
  2400 <= before かつ before < after の人がいれば YES を、<br>
  いなければ NO を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string answer = "NO";

    for (int i = 0; i < n; i++) {
      string name;
      cin >> name;
      int before, after;
      cin >> before >> after;
      if (2400 <= before && before < after) {
        answer = "YES";
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

      String answer = "NO";

      for (int i = 0; i < n; i++) {
        String name = sc.next();
        int before = sc.nextInt();
        int after = sc.nextInt();
        if (2400 <= before && before < after) {
          answer = "YES";
        }
      }
      sc.close();

      System.out.println(answer);

    }

  }
  ```
    