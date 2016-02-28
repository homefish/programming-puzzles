// solution to https://projecteuler.net/problem=4
// written in C++ 4.9.3
//
// Usage:
// Open a linux terminal and compile this file with
// g++ pe4.cpp -std=c++11 -O2 -o pe4.out
//
// Run the binary file pe4.out with
// ./pe4.out


#include <bits/stdc++.h>
using namespace std;


bool is_pali(int n) {
    string s = to_string(n);
    return ( s == string(s.rbegin(), s.rend()) );
    // see http://stackoverflow.com/questions/8362572/check-if-a-string-is-palindrome
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int res = 0;
    
    for (int i=100; i<1000; i++) {
        for (int k=i+1; k<1000; k++) {
            int p = i * k;
            if (is_pali(p)) {
                res = max(res, p);
            }
        }
    }
    
    cout << res << '\n';    
    
    return 0;
}
