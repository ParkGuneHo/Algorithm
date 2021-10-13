tmp = int(input())

for i in range(1, tmp+1):
    print(' ' * (tmp-i), sep='', end='')
    for j in range(1, i):
        print('* ', sep='', end='')
    print('*')