sal=float(input())
novo_sal=sal
if sal>=0 and sal<=400.00:
    novo_sal *= 1.15
    print('''Novo salario: {:.2f}
Reajuste ganho: {:.2f}
Em percentual: 15 %'''.format(novo_sal,novo_sal-sal))
elif sal>=400.01 and sal<=800.00:
    novo_sal *= 1.12
    print('''Novo salario: {:.2f}
Reajuste ganho: {:.2f}
Em percentual: 12 %'''.format(novo_sal,novo_sal-sal))
elif sal>=800.01 and sal<=1200.00:
    novo_sal *= 1.10
    print('''Novo salario: {:.2f}
Reajuste ganho: {:.2f}
Em percentual: 10 %'''.format(novo_sal,novo_sal-sal))
elif sal>=1200.01 and sal<=2000.00:
    novo_sal *= 1.07
    print('''Novo salario: {:.2f}
Reajuste ganho: {:.2f}
Em percentual: 7 %'''.format(novo_sal,novo_sal-sal))
elif sal>2000:
    novo_sal *= 1.04
    print('''Novo salario: {:.2f}
Reajuste ganho: {:.2f}
Em percentual: 4 %'''.format(novo_sal,novo_sal-sal))
