#include <bits/stdc++.h>
using namespace std;

// v を c 進数に変換して、各桁の合計を計算する
int digits(int v, int c) {
  int res = 0;
  while (0 < v){
    res += v % c;
    v = v / c;
  }
  return res;
}

// 最大公約数
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {

  int A;
  cin >> A;

  int sum_ = 0;
  for (int i = 2; i < A; i++) {
    sum_ += digits(A, i);
  }

  int gcd_ = gcd(sum_, A - 2);

  cout << sum_ / gcd_  << "/" << (A - 2) / gcd_ << endl;

}
