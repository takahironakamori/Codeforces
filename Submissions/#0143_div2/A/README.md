### Codeforces Round #143 (Div. 2)

# A. Team

  [問題はこちら](https://codeforces.com/problemset/problem/231/A)
  
- 概要<br>
  Petya, Vasya, Tonya の3人でチームを組んで、プログラミグのコンテストに出る。<br>
  1 つの問題について、2 人以上確信があったら回答を提出する。<br>
  n 問出題され、Petya, Vasya, Tonyaの順番に、それぞれ確証がある場合は 1、ない場合は 0 とする。<br>
  何問、回答を提出するか?
  
- 発想<br>
  Petya, Vasya, Tonya について 0 か 1 の情報をすべて足して、2 以上である問題を数える。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;
    for (int i = 0; i < n; i++) {
      int p, v, t;
      cin >> p >> v >> t;
      if (1 < (p + v + t)){
        answer++;
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
        int p = sc.nextInt();
        int v = sc.nextInt();
        int t = sc.nextInt();
        if (1 < (p + v + t)){
          answer++;
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    