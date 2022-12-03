t=int(input('t = '))
for i in range(t):
    n=int(input('n = '))
    if n>37 and n%5>2: print(n+5-n%5)
    else: print(n)