#include <bits/stdc++.h>
using namespace std;

string binary(int v){
  long long ans = 0;
  for (int i = 0; v > 0 ; i++)
  {
    ans = ans + (v % 2) * pow(10, i);
    v = v / 2;
  }
  return to_string(ans);
}

int main() {

  int n;
  cin >> n;

  string answer = binary(n);

  for (int i = 0; i < answer.size(); i++) {
    if (answer[i] == '1') {
      cout << answer.size() - i << " ";
    }
  }

  cout << endl;

}