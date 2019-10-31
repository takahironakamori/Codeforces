### Codeforces Round #485 (Div. 2)) 

# A. Infinity Gauntlet

  [問題はこちら](https://codeforces.com/problemset/problem/987/A)
  
- 概要<br>
  宝石と色の関係は次の通り。<br>
  ・Power の宝石の色は purple<br>
  ・Time の宝石の色は green<br>
  ・Space の宝石の色は blue<br>
  ・Soul の宝石の色は orange<br>
  ・Reality の宝石の色は red<br>
  ・Mind の宝石の色は yellow<br>
  n 個の色が与えられるので、足りていない宝石名を出力せよ。
  
  
- 発想<br>
  色と宝石を連想配列で管理して、与えられた色の場合は宝石名を空にするなど区別する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    map<string, string> mp;
    mp["purple"] = "Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["orange"] = "Soul";
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";

    for (int i = 0; i < n; i++) {
      string l;
      cin >> l;
      mp[l] = "";
    }

    cout << 6 - n << endl;

    for (auto item:mp) {
      if (item.second != "") {
        cout << item.second << endl;
      }
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

      TreeMap<String, String> mp = new TreeMap<>();
      mp.put("purple", "Power");
      mp.put("green", "Time");
      mp.put("blue", "Space");
      mp.put("orange", "Soul");
      mp.put("red", "Reality");
      mp.put("yellow", "Mind");

      for (int i = 0; i < n; i++) {
        String l = sc.next();
        mp.put(l,"");
      }

      sc.close();

      System.out.println(6 - n);

      for (String value : mp.values()) {
        if (value != "") {
          System.out.println(value);
        }
      }

    }

  }
  ```
    