#include <bits/stdc++.h>
using namespace std;

long mod = 1000000000 + 7;

long long big_pow(long long x,long long y)
{

   long long ans = 1;

   x = x % mod;

   while(y) {
       if(y % 2 == 1){
           ans = (ans * x) % mod;
       }
       y = y / 2;
       x = (x * x) % mod;
   } 
   return ans;
}

int main() {

  long n, m;
  cin >> n >> m;

  cout << big_pow(big_pow(2, m) - 1, n) << endl;

}