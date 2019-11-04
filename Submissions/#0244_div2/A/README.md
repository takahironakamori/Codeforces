### Codeforces Round #244 (Div. 2)

# A. Police Recruits

  [問題はこちら](https://codeforces.com/problemset/problem/427/A)
  
- 概要<br>
  n 個のイベントが与えられる。<br>
  -1 は犯罪の発生で、正の整数はその数だけ警察官を補充することを示す。<br>
  最初の警察官は 0 人である。<br>
  警察官が 0 人のときに犯罪が発生すると未解決事件として処理される。<br>
  警察官がいるときは、-1 につき、警察官 1 人が割り当てられ、その 1 人は、以後犯罪に対応することはできない。<br>
  イベントが全て発生した後の未処理事件の数は何件か。
  
  
- 発想<br>
  n を順番に調べる。<br>
  -1 のとき、警官の数が 1 以上の場合は、警察官を 1 減らす。<br>
  -1 のとき、警察の数が 0 の場合は、未解決事件として 1 加える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;
    int police = 0;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a == -1) {
        if (0 < police) {
          police--;
        } else {
          answer++;
        }
      } else {
        police += a;
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

      int answer = 0;
      int police = 0;

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        if (a == -1) {
          if (0 < police) {
            police--;
          } else {
            answer++;
          }
        } else {
          police += a;
        }
      }
      sc.close();

      System.out.println(answer);

    }

  }
  ```
    