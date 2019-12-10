### Codeforces Round #545 (Div. 2)

# A. Sushi for Two

  [問題はこちら](https://codeforces.com/contest/1138/problem/A)
  
- 概要<br>
  1 と 2 で構成され、要素数が n 個の数列が与えられる。<br>
  1,1,1,2,2,2 や 2,2,1,1 のように 1 と 2 が同じ個数で、それぞれが連続して並ぶ数列を抜き出したい。<br>
  抜き出す際は、もとの数列の並び順を変更することはできない。<br>
  最大の数列を抜き出した場合の要素数を出力せよ。

  
- 発想<br>
  1 か 2 が連続している個数を配列やキューに入れる。<br>
  例えば、{2, 2, 2, 1, 1, 2, 2} の場合は、3, 2, 2 となる。<br>
  できた配列またはキューの i と i + 1 を順番に調べていき、<br>
  小さい方の数の最大値が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int count1 = 0;
    int count2 = 0;

    vector<int> count;

    for (int i = 0; i < n; i++) {

      int t;
      cin >> t;

      if (t == 1) {
        if(count2 != 0) {
          count.push_back(count2);
          count2 = 0;
        }
        count1++;
      } else {
        if(count1 != 0) {
          count.push_back(count1);
          count1 = 0;
        }
        count2++;
      }

      if(i == n - 1) {
        if (count1 != 0) {
          count.push_back(count1);
        }
        if (count2 != 0) {
          count.push_back(count2);
        }
      }

    }

    int answer = 0;

    for (int i = 0; i < count.size() - 1; i++) {
      int mi = min(count[i],count[i+1]);
      answer = max(answer, mi * 2);
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

      int count1 = 0;
      int count2 = 0;

      Queue<Integer> count = new ArrayDeque<>();

      for (int i = 0; i < n; i++) {

        int t = sc.nextInt();

        if (t == 1) {
          if(count2 != 0) {
            count.add(count2);
            count2 = 0;
          }
          count1++;
        } else {
          if(count1 != 0) {
            count.add(count1);
            count1 = 0;
          }
          count2++;
        }

        if(i == n - 1) {
          if (count1 != 0) {
            count.add(count1);
          }
          if (count2 != 0) {
            count.add(count2);
          }
        }

      }

      sc.close();

      int answer = 0;

      int v_ = 100010;

      for (Integer v : count) {
        if (v_ != 100010) {
          int mi = Math.min(v_, v);
          answer = Math.max(answer, mi * 2);
        }
        v_ = v;
      }

      System.out.println(answer);

    }

  }
  ```
    