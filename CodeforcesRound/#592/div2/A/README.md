### Codeforces Round #592 (Div. 2)

# A. Pens and Pencils

  [問題はこちら](https://codeforces.com/contest/1244/problem/A)
  
- 概要<br>
  ある日、a コマと b コマの講義を受ける。<br>
  a コマの講義ではそれぞれ 1 つの講義でペンを c 本使う。b コマの講義ではそれぞれ 1 つの講義でえんぴつを d 本使う。<br>
  a と b のすべての講義を受けるために必要なペンと鉛筆を持っていきたいが、ペンと鉛筆の合計は k 本に抑えたい。
  希望に叶うペンと鉛筆の本数の組み合わせを 1 つ出力しなさい。<br>
  組み合わせがない場合は、-1 を出力しなさい。
  
- 発想<br>
  x = a / c を切り上げで計算する。<br>
  y - b / d を切り上げで計算する。<br>
  x + y ≦ k なら、x と y を出力する。<br>
  x + y > k なら、-1 を出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    vector<vector<int>> cases(t, vector<int>(5));  
    for (int i = 0; i < t; i++) {
      cin >> cases[i][0] >> cases[i][1] >> cases[i][2] >> cases[i][3] >> cases[i][4];
    }

    vector<string> answer(t);
    for (int i = 0; i < t; i++) {
      int x = ceil((double) cases[i][0] / cases[i][2]);
      int y = ceil((double) cases[i][1] / cases[i][3]);
      if (x + y <= cases[i][4]){
        answer[i] = to_string(x) + " " + to_string(y);
      } else {
        answer[i] = "-1";
      }
    }

    for (int i = 0; i < t; i++) {
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
      int t = sc.nextInt();
      int[][] cases = new int[t][5];
      for (int i = 0; i < t; i++) {
        cases[i][0] = sc.nextInt();
        cases[i][1] = sc.nextInt();
        cases[i][2] = sc.nextInt();
        cases[i][3] = sc.nextInt();
        cases[i][4] = sc.nextInt();
      } 
      sc.close();

      String[] answer = new String[t];

      for (int i = 0; i < t; i++) {
      int x = (int) Math.ceil((double) cases[i][0] / cases[i][2]);
      int y = (int) Math.ceil((double) cases[i][1] / cases[i][3]);
      if (x + y <= cases[i][4]){
        answer[i] = String.valueOf(x) + " " + String.valueOf(y);
      } else {
        answer[i] = "-1";
      }
    }

      for (int i = 0; i < t; i++) {
        System.out.println(answer[i]);
      }

    }

  }
  ```
    