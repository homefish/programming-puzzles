// solution to https://projecteuler.net/problem=1
// written in C++ 4.9.3
//
// Usage:
// Open a linux terminal and compile the file with
// g++ pe1.cpp -O2 -std=c++11 -o pe1.out
//
// Run the binary file pe1.out with
// ./pe1.out


#include <bits/stdc++.h>
using namespace std;

// calculate sum of integers 1 + 2 + ... + n in O(1) time.
int gauss(int n) {
    return n * (n+1) / 2;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int upper_bound = 1000;
    upper_bound--;             // less than upper_bound
    
    int three = 3 * gauss(upper_bound / 3);
    int five = 5 * gauss(upper_bound / 5);
    int fifteen = 15 * gauss(upper_bound / 15);
    
    int res = three + five - fifteen;
    cout << res << '\n';
    
    return 0;
}

/*
Idea: Consider the multiples of 3 less than 1000 and their sum:
3 + 6 + 9 + 12 + ... + 999
= 3 * (1 + 2 + 3 + 4 + ... + 333)

The term in parantheses is the sum of integers from 1 to 333, and 
this can be easily computed with the method discovered by Gauss, 
see 
http://mathforum.org/library/drmath/view/57919.html
https://nrich.maths.org/2478


sum of integers from 1 to n equals n * (n+1) / 2
In the sum (1 + 2 + ... + 333) n equals 333, and we can compute n by
taking the floor of (1000 - 1) / 3. Thus, we get

A = 3 + 6 + 9 + 12 + ... + 999
= 3 * (1 + 2 + 3 + 4 + ... + 333)
= 3 * n * (n+1) / 2
where n = floor( (1000-1)/3 )
The latter is known as "integer division".

The same holds for the sum of multiples below 1000:

B = 5 + 10 + ... + 995
= 5 * (1 + 2 ... + 199)
= 5 * k * (k+1) / 2
where k = floor( (1000-1)/5 )


If we add all the multiples of 3 and all the multiples of 5 below 1000, 
then we count sum numbers twice, namely 15, 30, 45, etc. Those are the multiples of
15 (the least common multiple of 3 and 5). To account for this we substract 
the muliples of 15:

C = 15 + 30 + ... + 990
= 15 * (1 + 2 + ... + 66)
= 15 * m * (m+1) /2
where m = floor( (1000 - 1)/15 )

The final answer is A + B - C.

*/
