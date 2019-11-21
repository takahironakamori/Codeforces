### Codeforces Round #192 (Div. 2)

# A. Cakeminator

  [問題はこちら](https://codeforces.com/problemset/problem/330/A)
  
- 概要<br>
  r * c のマス目状のケーキがあり、イチゴがある箇所は S 、無い箇所は . で表される。<br>
  cakeminator は 1 行のうち 1 つもイチゴがない行をすべて食べてしまう。<br>
  また、1 列のうち 1 つもイチゴがない列をすべて食べてしまう。<br>
  cakeminator は 何マス分のケーキを食べるか。
  
  
- 発想<br>
  1 行のうち 1 つもイチゴがない行数（count1）を数える。<br>
  1 列のうち 1 つもイチゴがない列（count2）を数える。<br>
  ダブりを気にしないと、count1 * c + count2 * r となるが、<br>
  count1 * count2 マス分ダブるので、<br>
  count1 * c + count2 * r - count1 * count2 が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int r, c;
    cin >> r >> c;

    vector<string> a(r);
    for (int i = 0; i < r; i++) {
      cin >> a[i];
    }

    int answer = 0;
    int countR = 0;
    int countC = 0;

    for (int i = 0; i < r; i++) {
      string a_ = a[i];
      bool flg = true;
      for (int j = 0; j < c; j++) {
        if (a_[j] == 'S') {
          flg = false;
          break;
        }
      }
      if (flg) {
        countR++;
        answer += c;
      }
    }

    for (int i = 0; i < c; i++) {
      bool flg = true;
      for (int j = 0; j < r; j++) {
        string a_ = a[j];
        if (a_[i] == 'S') {
          flg = false;
          break;
        }
      }
      if (flg) {
        countC++;
        answer += r;
      }
    }

    cout << answer - (countR * countC) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int r = sc.nextInt();
      int c = sc.nextInt();

      String[][] a = new String[r][c];
      for (int i = 0; i < r; i++) {
        String A = sc.next();
        a[i] = A.split("");
      }

      sc.close();

      int answer = 0;
      int countR = 0;
      int countC = 0;

      for (int i = 0; i < r; i++) {
        boolean flg = true;
        for (int j = 0; j < c; j++) {
          if (a[i][j].equals("S")) {
            flg = false;
            break;
          }
        }
        if (flg) {
          countR++;
          answer += c;
        }
      }

      for (int i = 0; i < c; i++) {
        boolean flg = true;
        for (int j = 0; j < r; j++) {
          if (a[j][i].equals("S")) {
            flg = false;
            break;
          }
        }
        if (flg) {
          countC++;
          answer += r;
        }
      }

      System.out.println(answer - (countR * countC));

    }

  }
  ```
    