### Codeforces Round #509 (Div. 2)

# A. Heist

  [問題はこちら](https://codeforces.com/problemset/problem/1041/A)
  
- 概要<br>
  昨晩、電気店が盗難にあった。<br>
  全てのキーボードに x から順番に番号が付いている。<br>
  x = 4 で、3 つキーボードがあった場合、4、5、6であり、<br>
  x = 10 で、7 個キーボードがあった場合、10、11、12、13、14、15、16 となる。<br>
  盗難後、n 個のキーボードが残っていて、i 個のキーボードには、a_i と番号を付いている。<br>
  盗難になったキーボードは最低何個あるか。<br>
  なお、電気店のスタッフは、盗難前のキーボードの数は覚えていない。
  
  
- 発想<br>
  a_i 配列に入れて、並び替える。<br>
  盗難前のキーボードは、最低、(配列の最大値 - 最小値 + 1) だけはあったはずと考えらえれる。<br>
  この数から n を引いた数は少なくとも盗難されている。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    int all = a[n - 1] - a[0] + 1;

    cout << all - n << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      Arrays.sort(a);

      int all = a[n - 1] - a[0] + 1;

      System.out.println(all - n);

    }

  }
  ```
    