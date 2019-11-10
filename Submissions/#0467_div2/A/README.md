### Codeforces Round #467 (Div. 2)

# A. Olympiad

  [問題はこちら](https://codeforces.com/problemset/problem/937/A)
  
- 概要<br>
  n 人の参加から修了の基準を考える。<br>
  各参加者の点数は a として与えられる。<br>
  条件としては、<br>
  ・最低 1 人は修了とする。<br> 
  ・0 点の人は修了できない。<br>
  ・基準とする点数以上の参加者は全員修了とする。<br>
  修了の基準は何パターンあるか。
  
- 発想<br>
  a_i として取得される点数で 0 点以外の点数の数だけ修了の基準を設定することができる。<br>
  0 以外の a を set に入れて size を出力する。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    set<int> st;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a != 0){
        st.insert(a);
      }
    }

    cout << st.size() << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      Set<Integer> st = new TreeSet<Integer>();

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        if (a != 0) {
          st.add(a);
        }
      }

      sc.close();

      System.out.println(st.size());

    }

  }
  ```
    