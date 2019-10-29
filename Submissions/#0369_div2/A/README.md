### Codeforces Round #369 (Div. 2)

# A. Bus to Udayland

  [問題はこちら](https://codeforces.com/problemset/problem/711/A)
  
- 概要<br>
  n 行、4 列シートのバスがあります。<br>
  バスは、2 人掛けです。<br>
  2 人が一緒に座れる場所があるか探したい。<br>
  バスのシートは、空席は O、誰かが座っている場合は X、通路を | で表される。<br>
  2 人が一緒に座れる場所がある場合はYESを出力し、 ++ に置き換えて出力せよ。<br>
  座れる場所が複数ある場合はどこか 1 つ置き換えればいい。
  
- 発想<br>
  順番に文字列を取得してき、OO があれば ++ に置き換える。<br>
  1 回置き換えたら、置き換える必要がない。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<string> v(n);
    string answer = "NO";
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      if (answer == "NO") {
        if (v[i][0] == 'O' && v[i][1] == 'O') {
          answer = "YES";
          v[i][0] = '+';
          v[i][1] = '+';
        } else if (v[i][3] == 'O' && v[i][4] == 'O'){
          answer = "YES";
          v[i][3] = '+';
          v[i][4] = '+';
        }
      }
    }

    cout << answer << endl;
    if (answer == "YES") {
      for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
      }
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      String[][] v = new String[n][5];
      String answer = "NO";
      for (int i = 0; i < n; i++) {
        String V = sc.next();
        v[i] = V.split("");
        if (answer.equals("NO")) {
          if (v[i][0].equals("O") && v[i][1].equals("O")) {
            answer = "YES";
            v[i][0] = "+";
            v[i][1] = "+";
          } else if (v[i][3].equals("O") && v[i][4].equals("O")){
            answer = "YES";
            v[i][3] = "+";
            v[i][4] = "+";
          }
        }
      }

      sc.close();

      System.out.println(answer);
      if (answer.equals("YES")) {
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < 5; j++) {
            System.out.print(v[i][j]);
          }
          System.out.println("");
        }
      }

    }

  }
  ```
    