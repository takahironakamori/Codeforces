#include <bits/stdc++.h>
using namespace std;

vector<string> StringSplit(const string &str, char sep) {
  vector<string> v;
  stringstream ss(str);
  string buffer;
  while (getline(ss, buffer, sep)) {
    v.push_back(buffer);
  }
  return v;
}
 
int main() {
 
  string v = "";

  int count = 0;
  int answer = 0;
  
  while (getline(cin, v)) {
    if (v[0] == '-'){
      count--;
    }
    if (v[0] == '+'){
      count++;
    }
    vector<string> v_ = StringSplit(v,':');
    if (1 < v_.size()) {
      answer += v_[1].size() * count;
    }
  }

  cout << answer << endl;
 
}