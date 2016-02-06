from sys import stdin, stdout


# calculate the sum 1 + 2 + ... + n in O(1) time.
def gauss(n):
    return n*(n+1)//2


def main():
    res = 0
    upper_bound = 1000
    upper_bound -= 1      # less than upper_bound
    
    three = 3 * gauss(upper_bound // 3)
    five = 5 * gauss(upper_bound // 5)
    fifteen = 15 * gauss(upper_bound // 15)
    
    res = three + five - fifteen
    stdout.write(str(res))


if __name__ == "__main__":
    main()
