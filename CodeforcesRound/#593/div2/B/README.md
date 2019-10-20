### Codeforces Round #583 (Div. 2)

# B. Alice and the List of Presents

  [問題はこちら](https://codeforces.com/contest/1236/problem/B)
  
- 概要<br>
  n 種類のプレゼントと m 個の箱がある。<br>
  以下の条件でプレゼントを箱に入れたいが組み合わせは何通りあるか。<br>
  ・1つの箱に、n 種類ものプレゼントを入れることができる。<br>
  ・1つの箱に、同じ種類のプレゼントは1個しか入れることができない。 <br>
  ・n 種類のプレゼントは、必ずどこかの箱に入っていなければならない。<br>
  組み合わせの数を 10^9+1 で割った余りを回答せよ。
  
- 発想<br>
  1つのプレゼントは m 個の箱に対して、入れる、入れないの2通りがあるので、すべての組み合わせは、2 の m 乗あるが、<br>
  全ての箱に入れないという選択肢は使えないので、1 を引く。<br>
  すなわち、1つのプレゼントにつき、2 の m 乗 - 1 通り。<br>
  プレゼントは n 種類あるので、(2 の m 乗 - 1) の n 乗が回答となる。 
  
- 実装のポイント<br>
  べき乗の計算がありとても大きい数になる。<br>
  pow() は使わずに独自のべき乗関数を使った方がいい。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long mod = 1000000000 + 7;

  long long big_pow(long long x,long long y)
  {
    
     long long ans = 1;

     x = x % mod;

     while(y) {
         if(y % 2 == 1){
             ans = (ans * x) % mod;
         }
         y = y / 2;
         x = (x * x) % mod;
     } 
     return ans;
  }

  int main() {

    long n, m;
    cin >> n >> m;

    cout << big_pow(big_pow(2, m) - 1, n) << endl;

  }
  ```
    