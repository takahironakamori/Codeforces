### Codeforces Round #508 (Div. 2)

# A. Equality

  [問題はこちら](https://codeforces.com/problemset/problem/1038/A)
  
- 概要<br>
  長さ n の文字列 s が与えられる。<br>
  文字列は アルファベットの最初の k 文字（大文字）だけで構成されている。<br>
  s のサブシークエンスは、文字の順序を変更することなく、同じ文字を削除した後の文字列である。<br>
  例えば "ADE"や "DB" は "ABCDE"のサブシークエンスであるが、"DEA" は "ABCDE"のサブシークエンスではない。<br>
  良いサブシークエンスは、サブシークエンスで使われている文字の種類が k と同じであるものをいう。<br>
  最大の良いサブシークエンスは何文字になるか。
  
  
- 発想<br>
  アルファベットごとに何回使われているかを数える。<br>
  A から k文字目までで使われている回数の最小値を探して、k をかける。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> count(26);

    for (int i = 0; i < n; i++) {
      int l = (int) s[i];
      count[l - 65]++;
    }

    int answer = count[0];

    for (int i = 1; i < k; i++) {
      answer = min(answer, count[i]);
    }

    cout << answer * k << endl;

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
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      int[] count = new int[26];

      for (int i = 0; i < n; i++) {
        int l = (int) s[i];
        count[l - 65]++;
      }

      int answer = count[0];

      for (int i = 1; i < k; i++) {
        answer = Math.min(answer, count[i]);
      }

      System.out.println(answer * k);

    }

  }
  ```
    