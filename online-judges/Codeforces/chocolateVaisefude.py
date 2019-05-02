t = int(input())
counter = 0
bars = 0
while counter < t:
    try:
        s,a,b,c = list(map(int, input().split(' ')))
        bars = s // c

        if bars >= a:
            bars += (bars // a) * b
        print(bars)
        bars = 0
    except EOFError:
        break

