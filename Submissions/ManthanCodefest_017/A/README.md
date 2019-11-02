### Manthan, Codefest 17

# A. Tom Riddle's Diary

  [問題はこちら](https://codeforces.com/problemset/problem/855/A)
  
- 概要<br>
  n 回名前が呼ばれる。<br>
  2 回以上呼ばれた名前だったら YES を、1回目だったら NO を出力せよ。<br>
  
- 発想<br>
  map に名前を入れる。<br>
  すでに名前が入っている場合は、YES を出力する。<br>
  名前がまだ入っていない場合は、NO を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    map<string, int> hashmap;
    for (int i = 0; i < n; i++) {
      string v;
      cin >> v;
      if (hashmap.count(v) == 0) {
        hashmap[v] = 1;
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      TreeMap<String, Integer> hashmap = new TreeMap<>();

      for (int i = 0; i < n; i++) {
        String v = sc.next();
        if (hashmap.containsKey(v) == false) {
          hashmap.put(v, 1);
          System.out.println("NO");
        } else {
          System.out.println("YES");
        }
      }

    }

  }
  ```
    