### Codeforces Round #535 (Div. 3)

# A. Two distinct points

  [問題はこちら](https://codeforces.com/problemset/problem/1108/A)
  
- 概要<br>
  x 軸上の位置を示す 2 つの数値が 2 組与えられる。<br>
  これらの整数は、l1 < r1 であり、l2 < r2 である。<br>
  l1 と r1、l2 と r2 を区間と考えると、互いに交差、重複、または一致する場合がある。<br>
  l1 ≦ a ≦ r1, l2 ≦ b ≦ r2, a ≠ b を満たす整数 a と b を求めたい。<br>
  複数回答がある場合は、どれか 1 組出力せよ。 

  
- 発想<br>
  l1、r1、l2、r2 の各点が a か b の1つになるので、全部の点を確認すればいい。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

      int l1, r1, l2, r2;
      cin >> l1 >> r1 >> l2 >> r2;

      vector<int> a({l1, r1, l2, r2});

      int answer1 = 0;
      int answer2 = 0;

      for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
          if (l1 <= a[i] && a[i] <= r1 && l2 <= a[j] && a[j] <= r2 && a[i] != a[j]) {
            answer1 = a[i];
            answer2 = a[j];
          }
        }
      } 

      cout << answer1 << " " << answer2 << endl;

    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();

      for (int i = 0; i < t; i++) {

        int l1 = sc.nextInt();
        int r1 = sc.nextInt();
        int l2 = sc.nextInt();
        int r2 = sc.nextInt();

        int[] a = {l1, r1, l2, r2};

        int answer1 = 0;
        int answer2 = 0;

        for (int j = 0; j < a.length; j++) {
          for (int k = 0; k < a.length; k++) {
            if (l1 <= a[j] && a[j] <= r1 && l2 <= a[k] && a[k] <= r2 && a[j] != a[k]) {
              answer1 = a[j];
              answer2 = a[k];
            }
          }
        } 

        System.out.println(answer1 + " " + answer2);

      }

      sc.close();

    }

  }
  ```
    