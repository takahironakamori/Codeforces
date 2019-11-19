### Codeforces Beta Round #103 (Div. 2)

# A. Arrival of the General

  [問題はこちら](https://codeforces.com/problemset/problem/144/A)
  
- 概要<br>
  n 人の人の身長の情報が与えられる。<br>
  i 番目の身長は a_i である。<br>
  これらの人を並べ変えたいが、最も長身が先頭（i = 1）、最も背が低い人が末尾（i = n）になるように並べ変えたい。<br>
  最初と最後さえルールを守っていれば、それ以外はなんでもいい。<br>
  隣り合う人を入れ替える作業（例 a_i と a_i+1 を入れ替える）を最低何回するといいか。
  
- 発想<br>
  n 人の人の身長を配列と考える。<br>
  最も高い人かつ 0 に近い人（位置を maxC とする）と、<br>
  最も低い人かつ n に近い人（位置を minC とする）を探す。<br>
  maxC < minC の場合は個別に入れ替えればいいので、maxC - 1 + n - minC が回答となる。<br>
  minC < maxC の場合は、お互いに入れ替わる作業が 1 回だぶるので、maxC - 2 + n - minC が回答となる。
  
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int maxV = 0;
    int maxC = 0;
    int minV = 999;
    int minC = 0;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (maxV < a) {
        maxV = a;
        maxC = i+1;
      }
      if (a <= minV) {
        minV = a;
        minC = i+1;
      }
    } 

    if (minC < maxC) {
      cout << maxC - 2 + n - minC << endl;
    } else {
      cout << maxC - 1 + n - minC << endl;
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

      int maxV = 0;
      int maxC = 0;
      int minV = 999;
      int minC = 0;

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        if (maxV < a) {
          maxV = a;
          maxC = i + 1;
        }
        if (a <= minV) {
          minV = a;
          minC = i + 1;
        }
      }

      sc.close();

      if (minC < maxC) {
        System.out.println(maxC - 2 + n - minC);
      } else {
        System.out.println(maxC - 1 + n - minC);
      }

    }

  }
  ```
    