### Codeforces Round #595 (Div. 3)

# B2. Books Exchange (hard version)

  [問題はこちら](https://codeforces.com/contest/1249/problem/B2)
  
- 概要<br>
  n 人の子供がいて、それぞれ 1 日に 1 冊本を読む。<br>
  i 番目の子供は、本を読んだら、次の日に p_i　番目の子供に本を渡す。<br>
  i = p_i の場合は、渡さないことを示す。<br>
  n 人の子供について、最初に読んだ本が自分に戻ってくるのはそれぞれ何日後か。
  
- 発想<br>
  n の上限が 2*10^5 と多い。<br>
  i の子供と p_i の子供は同じ日数になるので、メモ化に近いことをすれば計算量を減らすことができる。
  
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

      int n;
      cin >> n;

      vector<int> p(n);
      for (int j = 0; j < n; j++) {
        cin >> p[j];
        p[j]--;
      }

      vector<int> answer(n);
      vector<int> used(n);

      for (int j = 0; j < n; j++) {
        if (!used[j]) {
          vector<int> c;
          while (!used[j]) {
            c.push_back(j);
            used[j] = 1;
            j = p[j];
          }
          for (auto item: c) {
            answer[item] = c.size();
          }
        }
      }

      for (int j = 0; j < n; j++) {
        cout << answer[j] << " ";
      }
      cout  << endl;

    }

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

        int n = sc.nextInt();
        int[] p = new int[n];
        for (int j = 0; j < n; j++) {
          p[j] = sc.nextInt();
          p[j]--;
        }

        int[] answer = new int[n];
        int[] used = new int[n];

        for (int j = 0; j < n; j++) {
          if (used[j] != 1) {
            Deque<Integer> c = new ArrayDeque<>();
            while (used[j] != 1) {
              c.addLast(j);
              used[j] = 1;
              j = p[j];
            }
            int size = c.size();
            while (!c.isEmpty()) {
              Integer v = c.pollFirst();
              answer[v] = size;
            }
          }
        }

        for (int j = 0; j < n; j++) {
          System.out.print(answer[j] + " ");
        }
        System.out.println("");

      }

      sc.close();

    }

  }
  ```
    