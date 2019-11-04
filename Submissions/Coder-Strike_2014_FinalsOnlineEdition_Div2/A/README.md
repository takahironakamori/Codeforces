### Coder-Strike 2014 - Finals (online edition, Div. 2)

# A. Pasha and Hamsters

  [問題はこちら](https://codeforces.com/problemset/problem/421/A)
  
- 概要<br>
  Arthur と Alexander がいる。<br>
  n 個のりんごがある。<br>
  Arthur は a 個の好きなりんごがある。<br>
  Alexander は b 個の好きなりんごがある。<br>
  Arthur と Alexander のそれぞれに好きなりんごを配りたい。<br>
  どのように配ったらいいか。1 例を出力せよ。
  
  
- 発想<br>
  りんごの個数の要素を持つ配列を作り[a_i] に 1 を [b_i] に 2 を入れて、配列を出力する。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, a, b;
    cin >> n >> a >> b;

    vector<int> answer(n);
    for (int i = 0; i < a; i++) {
      int v;
      cin >> v;
      answer[v - 1] = 1;
    }

    for (int i = 0; i < b; i++) {
      int v;
      cin >> v;
      answer[v - 1] = 2;
    }

    for (int i = 0; i < n; i++) {
      cout << answer[i] << " ";
    }
    cout << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int a = sc.nextInt();
      int b = sc.nextInt();

      int[] answer = new int[n];

      for (int i = 0; i < a; i++) {
        int v = sc.nextInt();
        answer[v - 1] = 1;
      }

      for (int i = 0; i < b; i++) {
        int v = sc.nextInt();
        answer[v - 1] = 2;
      }

      sc.close();

      for (int i = 0; i < n; i++) {
        System.out.print(answer[i] + " ");
      }

      System.out.println("");

    }

  }
  ```
    