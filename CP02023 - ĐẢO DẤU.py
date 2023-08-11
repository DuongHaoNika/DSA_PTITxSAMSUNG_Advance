from math import *

if __name__ == '__main__':
    n, k = map(int, input().split())
    a = input().split()
    cnt = 0
    for i in range(0, n):
        a[i] = int(a[i])
        if(a[i] < 0): cnt+=1
    sum = 0
    a = sorted(a)
    for i in range(0, n):
        if(k > 0):
            if(a[i] < 0):
                a[i] = abs(a[i])
                k-=1
            else: break
        else: break

    a = sorted(a)
    if(k % 2 == 1): k = 1
    else: k = 0

    for i in range(0, n):
        if(k > 0):
           sum -= a[i]
           k-=1
        else:
            sum += a[i]
    print(sum, end='')