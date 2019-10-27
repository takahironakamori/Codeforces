### Codeforces Round #404 (Div. 2)

# A. Anton and Polyhedrons

  [問題はこちら](https://codeforces.com/problemset/problem/785/A)
  
- 概要<br>
  立方体の名前が n 個が与えられる。<br>
  ・Tetrahedron は面が 4 面ある。<br>
  ・Cube は面が 6 面ある。<br>
  ・Octahedron は面が 8 面ある。<br>
  ・Dodecahedron は面が 12 面ある。<br>
  ・Icosahedron は面が 20 面ある。
  面の合計を出力せよ。
  
- 発想<br>
  分岐で面を数える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      if (s == "Tetrahedron") {
        answer += 4;
      } else if (s == "Cube") {
        answer += 6;
      } else if (s == "Octahedron") {
        answer += 8;
      } else if (s == "Dodecahedron") {
        answer += 12;
      } else {
        answer += 20;
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

      int answer = 0;

      for (int i = 0; i < n; i++) {
        String s = sc.next(); 
        if (s.equals("Tetrahedron")) {
          answer += 4;
        } else if (s.equals("Cube")) {
          answer += 6;
        } else if (s.equals("Octahedron")) {
          answer += 8;
        } else if (s.equals("Dodecahedron")) {
          answer += 12;
        } else {
          answer += 20;
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    