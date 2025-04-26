#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int>& memo) {
   if (n <= 1) return n;
   if (memo[n] != -1) return memo[n];
   return memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
}

int main() {
   cout << "Enter the number of Fibonacci numbers to generate: ";
   int n;
   cin >> n;
   vector<int> memo(n + 1, -1); // Ensure n is valid (n >= 0), if n = 5 then memo: {-1,-1,-1,-1,-1,-1}
   cout << fib(n, memo) << endl;
   return 0;
}
