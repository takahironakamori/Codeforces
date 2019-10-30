### Codeforces Round #527 (Div. 3)

# B. Teams Forming

  [問題はこちら](https://codeforces.com/problemset/problem/1092/B)
  
- 概要<br>
  n 人（偶数）の生徒いる。<br>
  i 番目のプログラミングスキルは a_i である。<br>
  生徒を n / 2 の 2 人組のグループに分けたいが、2 人組グループのそれぞれのプログラミングスキルを同じにしたい。<br>
  生徒は、問題を 1 問解くことでプログラミングスキルを 1 上げることができる。<br>
  生徒全体で問題を解く数を少なくなるようにグループに分けた場合に、解く問題の最小は何問か。

  
- 発想<br>
  生徒のプログラミングスキルを並び替え、i 番目と i + 1 番目をグループにすると差が最も少なくなる。<br>
  あとは差を集計する。
  
  
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

    int answer = 0;
    for (int i = 0; i < n - 1; i += 2) {
      answer += a[i+1] - a[i];
    }

    cout << answer << endl;

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

      int answer = 0;
      for (int i = 0; i < n - 1; i += 2) {
        answer += a[i+1] - a[i];
      }

      System.out.println(answer);

    }

  }
  ```
    