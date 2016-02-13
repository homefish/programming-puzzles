# solution to https://projecteuler.net/problem=3
# written in Python 3.4
#
# Usage: 
# In a linux terminal type:
# python3.4 pe3.py


from sys import stdin, stdout


def largest_prime_factor(n):
    i = 2
    while i * i <= n:
        while n % i == 0:
            n = n // i
        if n == 1:
            return i
        i += 1
    return n


def main():
    n = 600851475143
    stdout.write(str(largest_prime_factor(n)) + '\n')

        
main()
