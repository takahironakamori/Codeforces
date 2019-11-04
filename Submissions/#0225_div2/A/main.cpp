#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  deque<int> que;

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    que.push_back(v);
  }
  
  int first = 0;
  int second = 0;
  int current = 0;
  
  while (!que.empty()) {

    int f = que.front();
    int b = que.back();
    int v = 0;

    if (b < f){
      v = f;
      que.pop_front();
    } else {
      v = b;
      que.pop_back();
    }
    if (current % 2 == 0){
      first += v;
    } else {
      second += v;
    }
    current++;
  }

  cout << first << " " << second << endl;
  
}