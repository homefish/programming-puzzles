# solution to https://projecteuler.net/problem=4
# written in Python 3.4
#
# Usage: 
# In a linux terminal type:
# python3.4 pe4.py


from sys import stdout

def main():
    res = 0
    for i in range(100, 1000):
        for k in range(i+1, 1000):
            p = i * k
            s = str(p)
            if s == s[::-1]:
                res = max(res, p)
                
    stdout.write(str(res) + '\n')
    
    
main()

