### Codeforces Round #279 (Div.2)

# A. Team Olympiad

  [問題はこちら](https://codeforces.com/problemset/problem/490/A)
  
- 概要<br>
  学校に n 人の生徒がいる。<br>
  i 番目の生徒がプログラミングが得意な場合は、t_i が 1 となる。<br>
  i 番目の生徒が数学が得意な場合は、t_i が 2 となる。<br>
  i 番目の生徒が体育が得意な場合は、t_i が 3 となる。<br>
  1 チーム 3 人のチームを組みたい。<br>
  しかし、3 人が得意なものはバラバラにしたい。<br>
  何チーム作ることができるか。<br>
  チームを作ることができる場合は、チームを構成する生徒の番号も出力せよ。<br>
  複数パターンある場合は、どれか 1 パターンでいい。
  
  
- 発想<br>
  プログラミング、数学、体育が得意な生徒の番号をそれぞれ map 等で保持する。<br>
  map の大きさが最も小さい数が、作ることができるチーム数となる。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    map<int, int> map1; // programming
    map<int, int> map2; // math
    map<int, int> map3; // PE

    int countMap1 = 0;
    int countMap2 = 0;
    int countMap3 = 0;

    for (int i = 0; i < n; i++) {
      char t;
      cin >> t;
      if (t == '1') {
        map1[countMap1] = i + 1;
        countMap1++;
      } else if (t == '2') {
        map2[countMap2] = i + 1;
        countMap2++;
      } else {
        map3[countMap3] = i + 1;
        countMap3++;
      }
    }

    int count = (int) map1.size();
    count = min(count, (int) map2.size());
    count = min(count, (int) map3.size());

    cout << count << endl;
    for (int i = 0; i < count; i++) {
      cout << map1[i] << " " << map2[i] << " " << map3[i] << endl;
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

      TreeMap<Integer, Integer> map1 = new TreeMap<>(); // programming
      TreeMap<Integer, Integer> map2 = new TreeMap<>(); // math
      TreeMap<Integer, Integer> map3 = new TreeMap<>(); // PE

      int countMap1 = 0;
      int countMap2 = 0;
      int countMap3 = 0;

      for (int i = 0; i < n; i++) {
        String t = sc.next();
        if (t.equals("1")) {
          map1.put(countMap1, i + 1);
          countMap1++;
        } else if (t.equals("2")) {
          map2.put(countMap2, i + 1);
          countMap2++;
        } else {
          map3.put(countMap3, i + 1);
          countMap3++;
        }
      }

      sc.close();

      int count = map1.size();
      count = Math.min(count, map2.size());
      count = Math.min(count, map3.size());

      System.out.println(count);
      for (int i = 0; i < count; i++) {
        System.out.println(map1.get(i) + " " + map2.get(i) + " " + map3.get(i));
      }

    }

  }
  ```
    