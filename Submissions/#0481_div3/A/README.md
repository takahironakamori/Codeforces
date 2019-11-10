### Codeforces Round #481 (Div. 3)

# A. Remove Duplicates

  [問題はこちら](https://codeforces.com/problemset/problem/978/A)
  
- 概要<br>
  n 文字の数字が与えられる。<br>
  重複する数字を削除し、削除前と同じ右からの順番で出力せよ。
  
  
- 発想<br>
  配列や map などを使った複数ある数値や数値の順序を把握しながら出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> num(1010);

    for (int i = 0; i < n; i++) {
      int v;
      cin >> v;
      num[v]++;
      a[i] = v;
    }

    int count = 0;
    vector<int> answer;
    for (int i = n - 1; 0 <= i; i--) {
      if (1 <= num[a[i]]) {
        answer.push_back(a[i]);
        count++;
        num[a[i]] = 0;
      }
    }

    cout << count << endl;

    for (int i = answer.size() - 1; 0 <= i ; i--) {
      cout << answer[i];
      cout << " ";
    }

    cout << endl;

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
      int[] num = new int[1010];

      for (int i = 0; i < n; i++) {
        int v = sc.nextInt();
        num[v]++;
        a[i] = v;
      }

      int count = 0;
      Deque<Integer> answer = new ArrayDeque<>();
      for (int i = n - 1; 0 <= i; i--) {
        if (1 <= num[a[i]]) {
          answer.addLast(a[i]);
          count++;
          num[a[i]] = 0;
        }
      }

      System.out.println(count);

      while (!answer.isEmpty()) {
        Integer v = answer.pollLast();
        System.out.print(v + " ");
      }

      System.out.println("");

    }

  }
  ```
    