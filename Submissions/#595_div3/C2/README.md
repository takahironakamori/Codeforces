### Codeforces Round #595 (Div. 3)

# C2. Good Numbers (hard version)

  [問題はこちら](https://codeforces.com/contest/1249/problem/C2)
  
- 概要<br>
  3 進数で表すことができる数字を良い番号とする。<br>
  しかし、3^0、3^1...3^a まで それぞれ 1 回しか使わない数字を良い番号とする。<br>
  n 以上で最も小さい 3 進数の数値を求めよ。<br>
  ただし、n の上限は 10^18。
  
  
- 発想<br>
  10 進数を 3 進数に変換する方法をそのままシミュレーションする。<br>
  例えば、14 を 3進数で表すと、1 1 2 となる。<br>
  次の値は、1 2 0 だが、3^i は 1 回しか使えないので、<br>
  次の正しい数値は、1 0 0 0 となり、10進数で表すと、27 が回答となる。
  

- 実装のポイント<br>
  3 で割った余りを 配列に保存してく。<br>
  3 進数の表記を逆に考えると実装が楽。<br>
  例えば、14 を 3 進数で表すと、1 1 2 となるが、配列上は 2 1 1 となる。<br>
  配列の末尾に 0 を加え 2 1 1 0 として、<br>
  最後に 2 を追加した位置から 配列の末尾までの間で、0 を探す。<br>
  見つけた 0 を 1 に変えて、配列の 0 の位置 - 1から配列の先頭までをすべて 0 に変える。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

      long long n;
      cin >> n;

      vector<int> vals;
      int pos2 = -1;
      while (0 < n) {
        vals.push_back(n % 3);
        if (vals.back() == 2) {
          pos2 = int(vals.size()) - 1;
        }
        n /= 3;
      }

      vals.push_back(0);

      if (pos2 != -1) {
        int pos0 = find(vals.begin() + pos2, vals.end(), 0) - vals.begin();
        vals[pos0] = 1;
        for (int j = pos0 - 1; 0 <= j; j--) {
          vals[j] = 0;
        }
      }

      long long ans = 0;
      long long c = 1;

      for (int j = 0; j < int(vals.size()); j++) {
        ans += c * vals[j];
        c *= 3;
      }

      if (vals.back() == 1) {
        ans = c / 3;
      }

      cout << ans << endl;

    }

    return 0;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int q = sc.nextInt();

      for (int i = 0; i < q; i++) {

        long n = sc.nextLong();

        List<Long> vals = new ArrayList<>();
        int pos2 = -1;
        while (0 < n) {
          vals.add(n % 3);
          if (vals.get(vals.size() - 1) == 2) {
            pos2 = vals.size() - 1;
          }
          n /= 3;
        }

        vals.add((long) 0);

        if (pos2 != -1) {
          List<Long> _vals = vals.subList(pos2, vals.size());
          int pos0 = _vals.indexOf((long) 0);
          pos0 += pos2;
          vals.set(pos0, (long) 1);
          for (int j = pos0 - 1; 0 <= j; j--) {
            vals.set(j,(long) 0);
          }
        }

        long ans = 0;
        long c = 1;

        for (int j = 0; j < vals.size(); j++) {
          ans += c * vals.get(j);
          c *= 3;
        }

        if (vals.get(vals.size() - 1) == 1) {
          ans = c / 3;
        }

        System.out.println(ans);

      }

      sc.close();

    }

  }
  ```
    