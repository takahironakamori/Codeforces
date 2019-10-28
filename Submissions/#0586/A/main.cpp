  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
      if (s[i] == 'n') {
        cout << 1 << " ";
      } else if (s[i] == 'z') {
        cout << 0 << " ";
      }
    }

    cout << endl;
  }