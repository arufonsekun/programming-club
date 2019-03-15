import sys

def solve(i):
    if i == n-1: return lifes[i]
    else: return max(lifes[i] + solve(i+1), lifes[i])


def main():
    global lifes, n, cache
    cache = list()
    lifes= list()
    n = int(input())
    k = int()

    for i in range(n):
        cache.append('s')
        k = int(input())
        lifes.append(k)

    bigger = 0
    for i in range(n):
        bigger = max(bigger, solve(i))
    print(bigger)

if __name__ == '__main__':
    main()
