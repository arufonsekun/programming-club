import sys

def solve(i, j):
    if (i == n-2):
        return soma + pyramid[i][j]
    if(j == 0):
        return pyramid[i][j] + solve(i+1, j) + solve(i+1, j+1)
    if (j == n-1):
        return pyramid[i][j] + solve(i+1, j-1) + solve(i+1, j)
    else:
        b = pyramid[i][j] + solve(i+1, j-1)
        c = pyramid[i][j] + solve(i+1, j+1)
        return min(b, c)


def main():
    global n, pyramid, soma
    row = []
    pyramid = []

    n = int(input())

    for e in range(n):
        for e in range(n):
            k = int(input())
            row.append(k)
        pyramid.append(row)
        row = []
    soma = sum(pyramid[n-1])
    #print(pyramid)
    print("soma = {}".format(soma))
    smaller = 15551
    for j in range(n):
        smaller = min(solve(0,j), smaller)
    print(smaller)

if __name__ == '__main__':
    main()
