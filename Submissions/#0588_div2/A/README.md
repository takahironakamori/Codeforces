### Codeforces Round #588 (Div. 2)

# A. Dawid and Bags of Candies

  [問題はこちら](https://codeforces.com/problemset/problem/1230/A)
  
- 概要<br>
  4 つのキャンディが入った袋がある。<br>
  袋には、それぞれ a_1, a_2, a_3, a_4 個のキャンディが入っている。<br>
  2 人の友達に同じ数のキャンディを配りたいが、渡すのは袋ごと渡したい。<br>
  同じ数のキャンディを配ることができる場合は YES を、できない場合は NO を出力せよ。
  
  
- 発想<br>
  袋が 4 つしかないので、考えられるすべてのパターンを調べてもいい（C++のコード）し、<br>
  並び替えると検証するパターンが少なくなる（Javaのコード）。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    if ((a1 + a2) == (a3 + a4)) {
      cout << "YES" << endl;
    } else if ((a1 + a3) == (a2 + a4)){
      cout << "YES" << endl;
    } else if ((a1 + a4) == (a2 + a3)){
      cout << "YES" << endl;
    } else if (a1 == (a2 + a3 + a4)){
      cout << "YES" << endl;
    } else if (a2 == (a1 + a3 + a4)){
      cout << "YES" << endl;
    } else if (a3 == (a1 + a2 + a4)){
      cout << "YES" << endl;
    } else if (a4 == (a1 + a2 + a3)){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```
  
- コード（Java）

  ```cpp
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int[] a = new int[4];
      for (int i = 0; i < 4; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      Arrays.sort(a);

      if (a[3] == a[2] + a[1] + a[0]) {
        System.out.println("YES");
      } else if(a[3] + a[2] == a[1] + a[0]) {
        System.out.println("YES");
      } else if(a[3] + a[1] == a[2] + a[0]) {
        System.out.println("YES");
      } else if(a[3] + a[0] == a[2] + a[1]) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }



    }

  }
  ```
    