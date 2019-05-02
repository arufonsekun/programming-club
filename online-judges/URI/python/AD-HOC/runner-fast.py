import sys
def solve(i):
    if i == n-1:
        cache[i] = lifes[i]
        return cache[i]
    if cache[i+1] == 's':
        cache[i] = max(lifes[i] + solve(i+1), lifes[i])
        return cache[i]
    else:
        cache[i] = max(lifes[i] + cache[i+1], lifes[i])
        return cache[i]

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

    #for i in range(0, n):
        #solve(i)

if __name__ == '__main__':
    main()
