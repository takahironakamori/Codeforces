### Codeforces Beta Round #78 (Div. 2 Only)

# A. Help Far Away Kingdom

  [問題はこちら](https://codeforces.com/problemset/problem/99/A)

- 概要<br>
  ある遠くにある多くには王様、王子、靴屋、仕立て屋そして多くの市民がいた。<br>
  彼らは幸せに暮らしていた。王国に問題が起こるまでは。<br>
  ACMers がそこに居着いたのである。<br>
  それらの変な生物が王国に与える主な損害は、高い精度番号が好きだということだった。<br>
  その結果、王国の治療者は、丁度0.273549107のビールを売るように頼まれた商人とすでに3回の予約していた。<br>
  この問題をなんとかするために、王様は全ての数を簡単な計算で近い整数に切り上げる義務を負わせるという命令を出した。<br>
  具体的には、命令は以下の通りである。<br>
  ・数値の整数部分が9で終わらず、小数部分が0.5未満である場合は、整数部分も同時に数字を切り上げる。<br>
  ・数値の整数部分が9で終わらず、小数部分が0.5未満でない場合は、整数部分に1加えたら、切り上げた値とすることができる。<br>
  ・整数部分が9で終わる場合は、切り上げ数字はVasilisaの賢者へ行かなければならない。<br>
  王国では、彼女は次の位置に運ぶ特殊な操作を実行できる唯一の人です。<br>
  商人はアルゴリズムがとても複雑だとわかった。そして、あなた（ACMers）に彼らを助けるよう頼んだ。<br>
  王様の命令に応じて丸める作業を実行するプログラムを書くことができますか？


- 発想<br>
  文字列で取得し、「.」で整数部分と小数部分切り分ける。<br>
  整数部分の 1 の位の値が 9 のときは、GOTO Vasilisa. を出力する。<br>
  整数部分の 1 の位の値が 8 以下のときは、<br>
  小数部分の最上位、すなわち小数第一位が 5 以上であれば、整数部分の 1 位の値に 1 加えたものを出力する。<br>
  小数部分の最上位、すなわち小数第一位が 5 未満であれば、整数部分をそのまま出力する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  vector<string> stringSplit(const string &str, char sep) {
    vector<string> v;
    stringstream ss(str);
    string buffer;
    while (getline(ss, buffer, sep)) {
      v.push_back(buffer);
    }
    return v;
  }

  int main() {

    string s;
    cin >> s;

    vector<string> v = stringSplit(s, '.');

    string v_ = v[1].substr(0,1);

    double d = stod("0." + v_);

    v_ = v[0].substr(v[0].size() - 1,1);

    int n = stoi(v_);

    if (n == 9) {
      cout << "GOTO Vasilisa." << endl;
    } else {
      n += (int) round(d);
      cout << v[0].substr(0, v[0].size() - 1);
      cout << n << endl;
    }

    return 0;

  }
  ```
