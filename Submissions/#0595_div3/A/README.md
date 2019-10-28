### Codeforces Round #595 (Div. 3)

# A. Yet Another Dividing into Teams

  [問題はこちら](https://codeforces.com/contest/1249/problem/A)
  
- 概要<br>
  n 人いる生徒についてプログラミングスキルでチームに分けたい。<br>
  生徒 i のスキルは a_i であり、同じスキルの生徒はいない。<br>
  できる限り少ないチーム数にしたいが、同じチームにプログラミングスキルの差(絶対値) が 1 にとなる2人がいないようにしたい。<br>
  最低何チームに分けることができるか。
  
- 発想<br>
  チーム内のすべての生徒のプログラミングスキルの差は 2 以上である必要がある。<br>
  生徒全員のプログラミングスキルの差が 2 以上であれば 1 チームが最低チーム数となる。<br>
  ある2人の生徒のプログラミングスキルの差が 1 であれば、その生徒はチームを分ける必要がある。<br>
  1人の生徒について、プログラミングスキルの差(絶対値) が 1 となる生徒は最大 2 名であるため、最低2チームに分ければいい。<br>
  したがって、生徒のうちスキルの差(絶対値) が 1 となる組み合わせがあれば、2 チーム。<br>
  組み合わせがない場合は、1チームが回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

      int n;
      cin >> n;

      vector<int> a(n);
      for (int j = 0; j < n; j++) {
        cin >> a[j];
      }

      int answer = 1;

      for (int p1 = 0; p1 < n; p1++) {
        for (int p2 = 0; p2 < p1; p2++) {
          if (abs(a[p1] - a[p2]) == 1) {
            answer = 2;
          }
        }
      }

      cout << answer << endl;

    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int q = sc.nextInt();

      for (int i = 0; i < q; i++) {

        int n = sc.nextInt();
        int[] a = new int[n];
        for (int j = 0; j < n; j++) {
          a[j] = sc.nextInt();
         }

        int answer = 1;

        for (int p1 = 0; p1 < n; p1++) {
          for (int p2 = 0; p2 < p1; p2++) {
            if (Math.abs(a[p1] - a[p2]) == 1) {
              answer = 2;
            }
          }
        }

        System.out.println(answer);

      }

      sc.close();

    }

  }
  ```
    