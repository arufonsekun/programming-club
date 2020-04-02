# -*- coding: utf-8 -*-

d = float(input())
p1 = 0
p2 = 0
p3 = 0
if d <= 2000.00:
    print('Isento')
elif 2000.01 <= d <= 3000:
    p1 = d - 2000.0
elif 3000.01 <= d <= 4500:
    p1 = 1000
    p2 = d - 3000.0
else:
    p1 = 1000
    p2 = 1500
    p3 = d - 4500.0

if p1 != 0:
    print('R$ {:.2f}'.format(p1*8/100+p2*18/100+p3*28/100))
