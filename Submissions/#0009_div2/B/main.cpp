#include <bits/stdc++.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
  long long x =(long long) (x2 - x1) * (x2 - x1);
  long long y =(long long) (y2 - y1) * (y2 - y1);
  return (double) sqrt(x + y);
}

int main() {

  int n, vb, vs;
  cin >> n >> vb >> vs;

  vector<int> xn(n);
  for (int i = 0; i < n; i++) {
    cin >> xn[i];
  }

  int xu, yu;
  cin >> xu >> yu;

  int answer;
  double minTime;
  double walk;

  for (int i = 1; i < n; i++) {
    double d = distance(xn[i], 0, xu, yu);
    double w = (double) d / vs;
    double time =(double) (xn[i] - 0) / vb + w;
    if (i == 1) {
      minTime = time;
      walk = w;
      answer = i + 1;
    } else {
      if (time < minTime) {
        minTime = time;
        walk = w;
        answer = i + 1;
      } else if (time == minTime) {
        if (w < walk) {
          minTime = time;
          walk = w;
          answer = i + 1;
        }
      }
    }
  }

  cout << answer << endl;

  return 0;

}
