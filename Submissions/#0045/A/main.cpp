#include <bits/stdc++.h>
using namespace std;

int main() {

  string F, M, S;
  cin >> F >> M >> S;

  string answer = "?";

  if (F == "paper" && M == "rock" && S == "rock") {
    answer = "F";
  }
  if (F == "rock" && M == "scissors" && S == "scissors") {
    answer = "F";
  }
  if (F == "scissors" && M == "paper" && S == "paper") {
    answer = "F";
  }

  if (M == "paper" && F == "rock" && S == "rock") {
    answer = "M";
  }
  if (M == "rock" && F == "scissors" && S == "scissors") {
    answer = "M";
  }
  if (M == "scissors" && F == "paper" && S == "paper") {
    answer = "M";
  }

  if (S == "paper" && M == "rock" && F == "rock") {
    answer = "S";
  }
  if (S == "rock" && M == "scissors" && F == "scissors") {
    answer = "S";
  }
  if (S == "scissors" && M == "paper" && F == "paper") {
    answer = "S";
  }

  cout << answer << endl;

}