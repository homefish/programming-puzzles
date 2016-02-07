# solution to https://projecteuler.net/problem=2
# written in Python 3.4
#
# Usage: 
# In a linux terminal type:
# python3.4 pe2.py


from sys import stdin, stdout


def main():
    upper_bound = 4000000
    
    a = 1
    b = 2
    res = 2
    
    while True:
        c = a + b
        if c > upper_bound:
            break
        if c % 2 == 0:
            res += c
        a, b = b, c
        
    stdout.write(str(res) + '\n')
    

if __name__ == '__main__':
    main()
