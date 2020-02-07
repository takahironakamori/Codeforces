#include <bits/stdc++.h>
using namespace std;

int main() {

  string rook, knight;
  cin >> rook >> knight;

  set<pair<int,int>> answer;

  int rRook = rook[0] - 'a' + 1;
  int cRook = rook[1] - '0';

  int rKnight = knight[0] - 'a' + 1;
  int cKnight = knight[1] - '0';

  answer.insert(make_pair(rRook, cRook));
  answer.insert(make_pair(rKnight, cKnight));

  for (int i = 1; i <= 8; i++) {
    answer.insert(make_pair(rRook, i));
    answer.insert(make_pair(i, cRook));
  }

  vector<pair<int, int>> r(8);
  r[0] = make_pair(rRook - 2, cRook - 1);
  r[1] = make_pair(rRook - 1, cRook - 2);
  r[2] = make_pair(rRook + 1, cRook - 2);
  r[3] = make_pair(rRook + 2, cRook - 1);
  r[4] = make_pair(rRook - 2, cRook + 1);
  r[5] = make_pair(rRook - 1, cRook + 2);
  r[6] = make_pair(rRook + 1, cRook + 2);
  r[7] = make_pair(rRook + 2, cRook + 1);

  vector<pair<int, int>> k(8);
  k[0] = make_pair(rKnight - 2, cKnight - 1);
  k[1] = make_pair(rKnight - 1, cKnight - 2);
  k[2] = make_pair(rKnight + 1, cKnight - 2);
  k[3] = make_pair(rKnight + 2, cKnight - 1);
  k[4] = make_pair(rKnight - 2, cKnight + 1);
  k[5] = make_pair(rKnight - 1, cKnight + 2);
  k[6] = make_pair(rKnight + 1, cKnight + 2);
  k[7] = make_pair(rKnight + 2, cKnight + 1);

  for (int i = 0; i < 8; i++) {
    if (0 < r[i].first && 0 < r[i].second && r[i].first < 9 && r[i].second < 9) {
      answer.insert(r[i]);
    }
    if (0 < k[i].first && 0 < k[i].second && k[i].first < 9 && k[i].second < 9) {
      answer.insert(k[i]);
    }
  }

  cout << 64 - answer.size() << endl;

  return 0;

}
