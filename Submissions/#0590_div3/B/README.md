### Codeforces Round #590 (Div. 3)

# B2. Social Network (hard version)

  [問題はこちら](https://codeforces.com/contest/1234/problem/B2)
  
- 概要<br>
  SNSをやっていて、id_iの友達が n 人いる。<br>
  スマホの画面にはメッセージを受信した id を k 個まで表示することができる。<br>
  画面に表示する k 個の id を決めるルールは以下の通り。<br>
  ・k 個の中に、同じ id がある場合は、その id からメッセージを受信した場合でも、id は表示されない。<br>
  ・異なる id の場合は、先入れ先出し方で表示する。<br>
  
- 実装のポイント<br>
  id および k の数が 2×10の5乗 なので、二重のfor文はできない。<br>
  id について、k に含まれているか否かを判断するためのフラグを持った map を用意する。<br>
  k の状況をシミュレーションするために キュー（deque）を使う。<br>
  最大で 2×10の5乗 個を出力する可能性があるので、Java の場合は出力に PrintWriter を使った方がいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n,k;
    cin >> n >> k;

    map<int, int> mp;
    list<int> li;
    for (int i = 0; i < n; i++) {
      int v;
      cin >> v;
      if (mp[v] == 0) {
        li.push_front(v);
        mp[v] = 1;
      }
      if (k < li.size()){
        mp[li.back()] = 0;
        li.pop_back();
      }
    }

    int li_count = 0;
    cout << li.size() << endl;
    for (auto item: li) {
      cout << item; 
      li_count++;
      if (li_count == li.size()) {
        cout << endl;
      } else {
        cout << " ";
      }
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;
  import java.io.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int k = sc.nextInt();

      HashMap<Integer, Integer> map = new HashMap<>();
      Deque<Integer> deque = new ArrayDeque<>();

      for (int i = 0; i < n; i++) {
        int v = sc.nextInt();
        if (map.containsKey(v)) {
          if (map.get(v) == 0) {
            deque.addFirst(v);
            map.put(v, 1);
          }
        } else {
          deque.addFirst(v);
          map.put(v, 1);
        }
        if (k < deque.size()) {
          int b = deque.getLast();
          map.put(b, 0);
          deque.pollLast();
        }

      }

      sc.close();

      System.out.println(deque.size());
      int li_count = 0;
      PrintWriter out = new PrintWriter(System.out);
      for (Integer value : deque) {
        out.print(value);
        li_count++;
        if (li_count == deque.size()) {
          out.println("");
        } else {
          out.print(" ");
        }
      }
      out.flush();

    }

  }
  ```
    