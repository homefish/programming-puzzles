// solution to https://projecteuler.net/problem=3
// written in C++ 4.9.3
//
// Usage:
// Open a linux terminal and compile this file with
// g++ pe3.cpp -o pe3.out
//
// or even better with
// g++ pe3.cpp -O2 -std=c++11 -o pe3.out
//
// Run the binary file pe3.out with
// ./pe3.out



#include <bits/stdc++.h>
using namespace std;
typedef long long LL;


LL largest_prime_factor(LL n) {
    LL i = 2LL;
    while (i * i <= n) {
        while (n % i == 0LL) {
            n /= i;
        }
        if (n == 1LL) return i;
        i++;
    }
    return n;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    LL n = 600851475143LL;
    cout << largest_prime_factor(n) << '\n';
    
    return 0;
}
