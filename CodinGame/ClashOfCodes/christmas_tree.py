'''
From a Clash of Codes:
Print the Christmas tree below


Example:
n = 4 prints

....*....
...***...
..*****..
.*******.
....*....


Below the solution in Python 3.
'''


def write_christmas_tree(n, matrix):
    for i in range(n):
        for k in range(i+1):
            matrix[i][n + k] = '*'
            matrix[i][n - k] = '*'
    matrix[n][n] = '*'
            

def main():
    n = int(input())
    matrix = [['.' for k in range(2*n+1)] for i in range(n+1)]
    write_christmas_tree(n, matrix)
    for row in matrix:
        print("".join(row))


if __name__ == '__main__':
    main()
