### Codeforces Round #355 (Div. 2)

# A. Vanya and Fence

  [問題はこちら](https://codeforces.com/problemset/problem/677/A)
  
- 概要<br>
  高さ h のフェンスがある。<br>
  n 人の人がいて、それぞれ身長は a_i である。<br>
  フェンスの高さを超えると警備員に見つかるため、フェンスより高い人は背をかがめて移動する。<br>
  横一列に並んで歩いた場合、普通に歩く人は幅 1 、かがめて歩く人は幅 2 必要である。<br>
  n 人の場合、どれだけの幅になるか。
  
- 発想<br>
  h より高い人は +2、そうでない人は +1 して合計を出す。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, h;
    cin >> n >> h;

    int answer = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (h < a) {
        answer += 2;
      } else {
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
      int h = sc.nextInt();
      int answer = 0;
      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        if (h < a) {
          answer += 2;
        } else {
          answer++;
        }
      }
      sc.close();

      System.out.println(answer);    

    }

  }
  ```
    