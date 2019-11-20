### VK Cup 2012 Round 2 (Unofficial Div. 2 Edition)

# A. Chores

  [問題はこちら](https://codeforces.com/problemset/problem/169/A)
  
- 概要<br>
  n 個の雑用がある。<br>
  i 番目の雑用の量は h_i である。<br>
  Petya は h_i > x になるような雑用を a 個したい。<br>
  Vasya は x <= h_i になるような雑用を b 個したい。<br>
  a + b = n になる。<br>
  上記の条件を満たす x の個数は何個か。<br>
  満たさない場合は、0 を出力すること。
  
  
- 発想<br>
  n 個の雑用を昇順に並び替える。<br>
  h[b] - h[b - 1] が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, a, b;
    cin >> n >> a >> b;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }

    sort(h.begin(), h.end());

    cout << h[b] - h[b - 1] << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int a = sc.nextInt();
      int b = sc.nextInt();

      int[] h = new int[n];
      for (int i = 0; i < n; i++) {
        h[i] = sc.nextInt();
      }
      sc.close();

      Arrays.sort(h);

      System.out.println(h[b] - h[b - 1]);

    }

  }
  ```
    