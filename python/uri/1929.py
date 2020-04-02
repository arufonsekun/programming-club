sides = list(map(int, input().split(' ')))
sides = sorted(sides)

if (sides[0] + sides[1] > sides[2] and abs(sides[0] - sides[1]) < sides[2]):
    print('S')
elif (sides[0] + sides[1] > sides[3] and abs(sides[0] - sides[1]) < sides[3]):
    print('S')
elif (sides[1] + sides[2] > sides[3] and abs(sides[1] - sides[2]) < sides[3]):
    print('S')
elif (sides[0] + sides[2] > sides[3] and abs(sides[0] - sides[2]) < sides[3]):
    print('S')
else:
    print('N')
