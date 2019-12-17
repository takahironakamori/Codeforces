### Codeforces Round #584 - Dasha Code Championship - Elimination Round (rated, open for everyone, Div. 1 + Div. 2)

# A. Paint the Numbers

  [問題はこちら](https://codeforces.com/problemset/problem/1209/A)
  
- 概要<br>
  n 個の正の整数で構成される数列が与えらえる。<br>
  i 番目の数値は、a_i である。<br>
  この配列を何個かのグループに分けて、それぞれのグループについて「グループ内のすべての整数がグループ内の最小値で割り切れる」という条件を満たすようにしたい。
  これを実現するためのグループ数の最小値を出力せよ。
  
  
- 発想<br>
  カウントを数える用の変数を用意する。（コードではsetにしていますが、intでも十分）
  配列を小さい順に並び替える。<br>
  以下の作業を、配列の先頭から配列が終わるまで繰り返す。<br>
  　配列の i 番目の要素を取得する。<br>
  　以下の作業を、配列の先頭から配列が終わるまで繰り返す。<br>
  　　j 番目の値がすでに割り切られている場合は、次の要素へ進む。<br>
  　　j 番目の値が割り切られていない場合は、取得した要素で割り切れるか否かをチェックする。<br>
   　割り切れる場合は、j 番目の値に印をつける。<br>
  　　（要素自身では必ず割り切れるので、)カウントを 1 加える。<br>
  カウントの値が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> check(101);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    set<int> answer;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (check[a[j]] == 0) {
          if (a[j] % a[i] == 0) {
            check[a[j]] = 1;
            answer.insert(a[i]);
          }
        }
      }
    } 

    cout << answer.size() << endl;

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
      int[] check = new int[101];

      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(a);

      Set<Integer> answer = new TreeSet<Integer>();

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (check[a[j]] == 0) {
            if (a[j] % a[i] == 0) {
              check[a[j]] = 1;
              answer.add(a[i]);
            }
          }
        }
      }

      System.out.println(answer.size());

    }

  }
  ```
    