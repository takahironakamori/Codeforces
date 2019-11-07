### Codeforces Round #27 (Div. 2)

# A. George and Accommodation

  [問題はこちら](https://codeforces.com/problemset/problem/467/A)
  
- 概要<br>
  宿泊施設に n 個の部屋があり、i 番目の部屋には q_i 人泊まることができ、p_i 人宿泊している。<br>
  George と Alex は他の宿泊客との相部屋はいいが、一緒の部屋に泊まりたいとすると、何部屋泊まることができる部屋があるか。
  
- 発想<br>
  q_i - p_i <= 2 を満たす部屋の数を数える。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
      int p, q;
      cin >> p >> q;
      if (2 <= q - p) {
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
        int q = sc.nextInt();
        if (2 <= q - p) {
          answer++;
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    