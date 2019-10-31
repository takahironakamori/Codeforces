### Codeforces Round #524 (Div. 2)

# A. Petya and Origami

  [問題はこちら](https://codeforces.com/problemset/problem/1080/A)
  
- 概要<br>
  n 人の友達へ招待状を送りたい。<br>
  招待状を作るには、赤の折り紙が 2 枚、緑の折り紙が 5 枚、青の折り紙が 8 枚使う。<br>
  折り紙はどれか 1 色 k 枚入りしか売っていない。<br>
  折り紙を何セット買えばいいか。

  
- 発想<br>
  各色で何枚色紙がいるかを計算し、k の商（切り上げ）を足し合わせる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    int red = n * 2;
    int green = n * 5;
    int blue = n * 8;
    int answer = 0;

    answer += ceil((double) red / k);
    answer += ceil((double) green / k);
    answer += ceil((double) blue / k);

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
      int k = sc.nextInt();
      sc.close();

      int red = n * 2;
      int green = n * 5;
      int blue = n * 8;
      int answer = 0;

      answer += Math.ceil((double) red / k);
      answer += Math.ceil((double) green / k);
      answer += Math.ceil((double) blue / k);

      System.out.println(answer);

    }

  }
  ```
    