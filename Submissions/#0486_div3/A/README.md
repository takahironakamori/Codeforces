### Codeforces Round #486 (Div. 3)

# A. Diverse Team

  [問題はこちら](https://codeforces.com/problemset/problem/988/A)
  
- 概要<br>
  n 人から k 人を選びたい。<br>
  生徒の番号 i 番の人は a_i としてレートが与えられる。<br>
  k 人を選ぶ際に同じレートを人を 2 人以上入れないようにしたい。<br>
  そのような組み合わせが可能な場合は YES を出力し、組み合わせのパターンを 1 つ出力せよ。<br>
  組み合わせは、人の番号で出力すること。
  
  
- 発想<br>
  同じレートの場合、その中から 1 人だけの情報（レートと生徒の番号）を保持すれば十分。<br>
  a_i の種類が k より少ない場合は組み合わせはできないので、 NO を出力する。<br>
  上記以外の場合は、生徒の番号を出力する。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
      int v;
      cin >> v;
      mp[v] = i;
    }

    if (k <= mp.size()) {

      cout << "YES" << endl;

      vector<int> answer(mp.size());
      int current = 0;

      for (auto item:mp) {
        answer[current] = item.second + 1;
        current++;
      }

      sort(answer.begin(), answer.end());

      for (int i = 0; i < k; i++) {
        cout << answer[i] << " ";
      }

      cout << endl;

    } else {
      cout << "NO" << endl;
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
      int k = sc.nextInt();

      TreeMap<Integer, Integer> mp = new TreeMap<>();

      for (int i = 0; i < n; i++) {
        int v = sc.nextInt();
        mp.put(v, i);
      }
      sc.close();

      if (k <= mp.size()) {

        System.out.println("YES");

        int[] answer = new int[mp.size()];
        int current = 0;

        for (Integer value : mp.values()) {
          answer[current] = value + 1;
          current++;
        }

        Arrays.sort(answer);

        for (int i = 0; i < k; i++) {
          System.out.print(answer[i] + " ");
        }

        System.out.println("");

      } else {
        System.out.println("NO");
      }

    }

  }
  ```
    