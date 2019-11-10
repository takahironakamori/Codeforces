### Codeforces Round #464 (Div. 2)

# A. Love Triangle

  [問題はこちら](https://codeforces.com/problemset/problem/939/A)
  
- 概要<br>
  n 個の整数が与えられる。<br>
  i 番目の整数は、i 番が好きな番号を示す。<br>
  A 番は B 番が好き、B 番は C 番が好き、 C 番は A 番が好きという三角関係があれば YES を、<br>
  なければ NO を出力せよ。
  
- 発想<br>
  map に i 番目と好きな番号を保持すれば、確認できる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      mp[i] = a - 1;
    }

    string answer = "NO";

    for (int i = 0; i < n; i++) {
      int v1 = mp[i];
      int v2 = mp[v1];
      int v3 = mp[v2];
      if (i == v3) {
        answer = "YES";
        break;
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

      TreeMap<Integer, Integer> mp = new TreeMap<>();

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        mp.put(i, a - 1);
      }

      sc.close();

      String answer = "NO";

      for (int i = 0; i < n; i++) {
        int v1 = mp.get(i);
        int v2 = mp.get(v1);
        int v3 = mp.get(v2);
        if (i == v3) {
          answer = "YES";
          break;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    