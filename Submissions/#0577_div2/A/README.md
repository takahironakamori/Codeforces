### Codeforces Round #577 (Div. 2)

# A. Important Exam

  [問題はこちら](https://codeforces.com/problemset/problem/1201/A)
  
- 概要<br>
  n 人の生徒がいて、m 問の問題を解く。<br>
  それぞれの問題は、A、B、C、D、E を選択する方式で、<br>
  i 問目で正解すると a_i 点獲得できる。<br>
  n 人の生徒の、すべての問題での答えが与えられるので、<br>
  生徒全員が獲得することができる最大点数は何点か。<br>
  なお、各問題の正答が何かはわからない。

  
- 発想<br>
  n 人の生徒が、i 問目に何を答えたのかを集計して、<br>
  最も多い数を、a_i でかけた点数の合計が答えとなる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> count(m,vector<int>(5));

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      for (int j = 0; j < m; j++) {
        count[j][(int) s[j] - 'A']++;
      }
    }

    int answer = 0;
    vector<int> mx(m);

    for (int i = 0; i < m; i++) {
      int p;
      cin >> p;
      for (int j = 0; j < 5; j++) {
        mx[i] = max(mx[i], count[i][j]);
      }
      answer += mx[i] * p;
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
      int m = sc.nextInt();

      int[][] count = new int[m][5];

      for (int i = 0; i < n; i++) {
        String S = sc.next();
        char[] s = S.toCharArray();
        for (int j = 0; j < m; j++) {
          count[j][(int) s[j] - 'A']++;
        }
      }

      int answer = 0;
      int[] mx = new int[m];

      for (int i = 0; i < m; i++) {
        int p = sc.nextInt();
        for (int j = 0; j < 5; j++) {
          mx[i] = Math.max(mx[i], count[i][j]);
        }
        answer += mx[i] * p;
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    