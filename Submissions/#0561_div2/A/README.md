### Codeforces Round #561 (Div. 2)

# A. A. Silent Classroom

  [問題はこちら](https://codeforces.com/problemset/problem/1166/A)
  
- 概要<br>
  n 人の生徒を 2 つのクラスに分けたい。<br>
  そのとき同じ頭文字の生徒の 2 人組の組み合わせ数が少なくなるように分けたい。<br>
  最小の 2 人組の組み合わせ数を出力せよ。

  
- 発想<br>
  1 つの頭文字の人数を k とすると k / 2 と 残り人数の 2 つに分けるのが最も組み合わせの数が少ない。<br>
  組み合わせの数は、人数 * (人数 - 1) / 2 で求めることができる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> count(26);
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      count[(int) s[0] - 'a']++;
    }

    int answer = 0;
    for (int i = 0; i < 26; i++) {
      int class1 = count[i] / 2;
      int class2 = count[i] - class1;
      answer += class1 * (class1 - 1) / 2;
      answer += class2 * (class2 - 1) / 2;
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

      int[] count = new int[26];
      for (int i = 0; i < n; i++) {
        String S = sc.next();
        char[] s = S.toCharArray();
        count[(int) s[0] - 97]++;
      }

      sc.close();

      int answer = 0;
      for (int i = 0; i < 26; i++) {
        int class1 = count[i] / 2;
        int class2 = count[i] - class1;
        answer += class1 * (class1 - 1) / 2;
        answer += class2 * (class2 - 1) / 2;
      }

      System.out.println(answer);

    }

  }
  ```
    