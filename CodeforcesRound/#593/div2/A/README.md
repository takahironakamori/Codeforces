### Codeforces Round #583 (Div. 2)

# A. Stones

  [問題はこちら](https://codeforces.com/contest/1236/problem/A)
  
- 概要<br>
  a, b, c の石が積まれている 3 つの山がある。<br>
  以下の 2 つ操作を順不同、何回でも行うことができる場合、最大何個の石を取ることができるか。<br>
  ・【操作 1 】a から 1 個と b から 2 個を同時に取る。どちらかが不足している場合は 1 個も取れない。<br>
  ・【操作 2 】b から 1 個と c から 2 個を同時に取る。どちらかが不足している場合は 1 個も取れない。<br>
  
- 発想<br>
  【操作 2 】をできるかぎりやって、残った石で【操作 1 】をできる限り行う。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<vector<int>> abc(n,vector<int>(3));  
    for (int i = 0; i < n; i++) {
      cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
    }

    vector<int> answer(n);
    for (int i = 0; i < n; i++) {
      if ((abc[i][2] / 2) < abc[i][1]) {
        answer[i] += abc[i][2] / 2 * 3;
        abc[i][1] -= abc[i][2] / 2;
      } else {
        answer[i] += abc[i][1] * 3;
        abc[i][1]  = 0;
      }
      if ((abc[i][1] / 2) < abc[i][0]) {
        answer[i] += abc[i][1] / 2 * 3;
      } else {
        answer[i] += abc[i][0] * 3;
      }
    }

    for (int i = 0; i < n; i++) {
      cout << answer[i] << endl;
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
      int[][] abc = new int[n][3];
      for (int i = 0; i < n; i++) {
        abc[i][0] = sc.nextInt();
        abc[i][1] = sc.nextInt();
        abc[i][2] = sc.nextInt();
      } 
      sc.close();

      int[] answer = new int[n];

      for (int i = 0; i < n; i++) {
        if ((abc[i][2] / 2) < abc[i][1]) {
          answer[i] += abc[i][2] / 2 * 3;
          abc[i][1] -= abc[i][2] / 2;
        } else {
          answer[i] += abc[i][1] * 3;
          abc[i][1]  = 0;
        }
        if ((abc[i][1] / 2) < abc[i][0]) {
          answer[i] += abc[i][1] / 2 * 3;
        } else {
          answer[i] += abc[i][0] * 3;
        }
      }

      for (int i = 0; i < n; i++) {
        System.out.println(answer[i]);
      }

    }

  }
  ```
    