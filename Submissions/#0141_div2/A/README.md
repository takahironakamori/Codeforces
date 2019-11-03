### Codeforces Round #141 (Div. 2)

# A. Is your horseshoe on the other hoof?

  [問題はこちら](https://codeforces.com/problemset/problem/228/A)
  
- 概要<br>
  馬の足に色が異なる靴、すなわち4色の靴をはかしたい。<br>
  今持っている靴は 4 つで、色の番号が与えられる。<br>
  色の番号はほぼ無限にあると考えていい。<br>
  今持っている靴の色のパターンはいろいろ考えられる。<br>
  4 色異なる靴をはかせるには、最低何色の靴を買う必要があるか。<br>
  
- 発想<br>
  s_1, s_2, s_3, s_4 で何種類の数字を使っているのかを数えて、その値を4から引く。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    set<int> st;

    for (int i = 0; i < 4; i++) {
      int s = 0;
      cin >> s;
      st.insert(s);
    }

    cout << 4 - st.size() << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      Set<Integer> st = new TreeSet<Integer>();

      for (int i = 0; i < 4; i++) {
        int s = sc.nextInt();
        st.add(s);
      }

      sc.close();

      System.out.println(4 - st.size());

    }

  }
  ```
    