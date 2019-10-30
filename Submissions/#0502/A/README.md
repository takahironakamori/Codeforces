### Codeforces Round #502 (in memory of Leopoldo Taravilse, Div. 1 + Div. 2)

# A. The Rank

  [問題はこちら](https://codeforces.com/problemset/problem/1017/A)
  
- 概要<br>
  トーマスの学生番号は 1 番で、トーマスを含めて n 人生徒がいる。<br>
  n 人の生徒の英語等 4 科目のテストの成績がある。<br>
  全科目の合計点が多い順で順位を決めた場合、トーマスの順位は何位か？<br>
  
- 発想<br>
  合計点を集計して、1 番目の合計点より多い生徒の数 + 1 がトーマスの順位となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> s(n);
    for (int i = 0; i < n; i++) {
      int a, b, c, d;
      cin >> a >> b >> c >> d;
      s[i] = a + b + c + d;
    }

    int count = 0;
    for (int i = 1; i < n; i++) {
      if (s[0] < s[i]) {
        count++;
      }
    }

    cout << count + 1 << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      int[] s = new int[n];
      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        s[i] = a + b + c + d;
      }
      sc.close();

      int count = 0;
      for (int i = 1; i < n; i++) {
        if (s[0] < s[i]) {
          count++;
        }
      }

      System.out.println(count+1);

    }

  }
  ```
    