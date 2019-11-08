### Codeforces Round #359 (Div. 2)

# A. Free Ice Cream

  [問題はこちら](https://codeforces.com/problemset/problem/686/A)
  
- 概要<br>
  x のアイスクリームを持っている。<br>
  n 個のイベントがある。<br>
  + で表記されるイベントは、アイスクリームが補充される。<br>
  − で表記されるイベントは、子供にアイスクリームを d 個渡す。<br>
  d 個のアイスクリームが欲しいのに、足らない場合は 1 個も渡さない。<br>
  すべてのイベントが終わった後のアイスクリームの個数と、アイスクリームを渡すことができなかった子供の数を出力せよ。
  
- 発想<br>
  x にアイスクリームを + - を行う。<br>
  - のときにアイスクリームの数が d に満たない場合は、あげられなかった子供の数を1加える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, x;
    cin >> n >> x;

    long long answer = x;
    int count = 0;

    for (int i = 0; i < n; i++) {
      string k;
      cin >> k;
      int d;
      cin >> d;
      if (k == "+") {
        answer += d;
      } else {
        if (d <= answer) {
           answer -= d;
        } else {
          count++;
        }
      } 
    }

    cout << answer << " " << count << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int x = sc.nextInt();

      long answer = x;
      int count = 0;

      for (int i = 0; i < n; i++) {
        String k = sc.next();
        int d = sc.nextInt();
        if (k.equals("+")) {
          answer += d;
        } else {
          if (d <= answer) {
             answer -= d;
          } else {
            count++;
          }
        } 
      }
      sc.close();

      System.out.println(answer + " " + count);

    }

  }
  ```
    