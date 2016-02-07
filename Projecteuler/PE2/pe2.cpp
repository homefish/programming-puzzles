// solution to https://projecteuler.net/problem=2
// written in C++ 4.9.3
//
// Usage:
// Open a linux terminal and compile the file with
// g++ pe2.cpp -O2 -std=c++11 -o pe2.out
//
// Run the binary file pe2.out with
// ./pe2.out


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int upper_bound = 4000000;
    int a = 1;
    int b = 2;
    int res = 2;
    
    while (true) {
        int c = a + b;
        if (c > upper_bound) break;
        if (c % 2 == 0) res += c;
        a = b;
        b = c;
    }
    
    cout << res << '\n';
    
    return 0;
}
