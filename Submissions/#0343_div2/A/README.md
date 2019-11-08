### Codeforces Round #343 (Div. 2)

# A. Far Relative’s Birthday Cake

  [問題はこちら](https://codeforces.com/problemset/problem/629/A)
  
- 概要<br>
  n * n のマスがあり、"C" と "." で構成される。<br>
  "C" について、同じ行または同じ列にある "C" で 2 個ずつ組を作った場合、何組作ることができるか。<br>
  1 度使った "C" はもう使えない。
  
- 発想<br>
  x を 5 で割れるだけ割る。<br>
  5 で割り切れない場合は、余りは、4、3、2、1 のどれかなので 1 回加える。<br>
  すなわち、x を 5 で割った数を小数点第 1 位で切り上げる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> row(n);
    vector<int> col(n);
    for (int i = 0; i < n; i++) {
      string c;
      cin >> c;
      for (int j = 0; j < n; j++) {
        if (c[j] == 'C'){
          row[i]++;
          col[j]++;
        }
      }
    }

    int answer = 0;

    for (int i = 0; i < n; i++) {
      if (2 <= row[i]) {
        answer += (row[i] - 1) * row[i] / 2;
      }
      if (2 <= col[i]) {
        answer += (col[i] - 1) * col[i] / 2;
      }
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
      int[] row = new int[n];
      int[] col = new int[n];
      for (int i = 0; i < n; i++) {
        String C = sc.next();
        String[] c = C.split("");
        for (int j = 0; j < c.length; j++) {
          if (c[j].equals("C")){
            row[i]++;
            col[j]++;
          }
        }
      }
      sc.close();

      int answer = 0;

      for (int i = 0; i < n; i++) {
        if (2 <= row[i]) {
          answer += (row[i] - 1) * row[i] / 2;
        }
        if (2 <= col[i]) {
          answer += (col[i] - 1) * col[i] / 2;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    