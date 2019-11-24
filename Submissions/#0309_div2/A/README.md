### Codeforces Round #309 (Div. 2)

# A. Kyoya and Photobooks

  [問題はこちら](https://codeforces.com/problemset/problem/554/A)
  
- 概要<br>
  26 枚の写真があり、a から z までラベルが付いている。<br>
  これらの写真でフォトブックレットを作りたい。<br>
  文字列 s が与えられる。<br>
  s に含まれる文字列の写真は、必ずフォトブックレットに入れる。<br>
  s に含まれていない文字列の写真は、1 枚ずつしか使わない。<br>
  また、1 冊のフォトブックレットに同じ写真は入れない。<br>
  最も多くフォトブックレットを作る場合、何冊作ることができるか。
  
  
- 発想<br>
  最も多くブックレットを作るには、s の文字列の写真に 1 枚写真を加えたものにする必要がある。<br>
  s の文字列 + 1 を 26 倍したものから、ダブっている分（ s の文字列の数）を引けばいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    cout << (s.size() + 1) * 26 - s.size() << endl;

  }     
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      System.out.println((s.length + 1) * 26 - s.length);

    }

  }
  ```
    