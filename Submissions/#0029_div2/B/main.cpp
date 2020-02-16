#include <bits/stdc++.h>
using namespace std;

int main() {

  int distance, trafficlight, speed, green, red;
  cin >> distance >> trafficlight >> speed >> green >> red;

  // 信号機がない場合の移動時間
  double answer = (double) distance / speed;

  // 信号機に着く時間
  double t_ = (double) trafficlight / speed;

  // 信号機に着く時間を小数点以下切り捨てたもの
  int t2_ = floor(t_);

  // 青信号と赤信号のどの地点なのか
  int t3_ = t2_ % (green + red);

  // 信号機に着く時間の小数点部分のみ
  double t4_ = t_ - t2_;

  if (green <= t3_) {
    answer += (double) red - ((t3_ + t4_) - green);
  }

  cout << setprecision(11) << answer << endl;

  return 0;

}
