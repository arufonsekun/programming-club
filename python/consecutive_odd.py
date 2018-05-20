def summ(x,y):
    sum = 0
    while x <= y:
        if x % 2 == 1:
            sum += x
        x += 1
    return sum
def consecutive():
    x = int(input())
    sums = []
    numbers = []
    while x > 0:
         z, y = map(int, input().split())
         numbers.append(z)
         numbers.append(y)
         numbers.sort()
         sums.append(summ(numbers[0] +1, numbers[1]-1))
         numbers = []
         x -= 1
    for el in sums:
        print (el)
consecutive()
