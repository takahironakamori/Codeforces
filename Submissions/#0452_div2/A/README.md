### Codeforces Round #452 (Div. 2)

# A. Splitting in Teams

  [問題はこちら](https://codeforces.com/problemset/problem/899/A)
  
- 概要<br>
  n 個のグループがある。<br>
  i 番目のグループの人数は、a_i であり、人数は 1 人か 2 人である。<br>
  これらのグループを使って、3 人グループを作りたい。<br>
  しかし、2 人グループを分けることはしない。<br>
  最大で何グループ作ることができるか。
  
  
- 発想<br>
  1 人グループの数、2 人グループの数を数える。<br>
  ・2 人グループが 0 のとき、1 人グループの数 / 3 が回答となる。<br>
  ・2 人グループの数が、1 人グループの数より少ない場合は、2 人グループの数 + (1 人グループの数 - 2 人グループの数) / 3 が回答となる。<br>
  ・それ以外の場合は、1 人グループの数が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> count(3);
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      count[a]++;
    }

    int answer = 0;

    if (count[2] == 0) {
      answer = count[1] / 3;
    } else if (count[2] <= count[1]) {
      answer = count[2];
      count[1] = count[1] - count[2];
      if (0 < count[1]) {
        answer += count[1] / 3;
      }
    } else {
      answer = count[1];
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

      int[] count = new int[3];
      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        count[a]++;
      }

      sc.close();

      int answer = 0;

      if (count[2] == 0) {
        answer = count[1] / 3;
      } else if (count[2] <= count[1]) {
        answer = count[2];
        count[1] = count[1] - count[2];
        if (0 < count[1]) {
          answer += count[1] / 3;
        }
      } else {
        answer = count[1];
      }

      System.out.println(answer);

    }

  }
  ```
    