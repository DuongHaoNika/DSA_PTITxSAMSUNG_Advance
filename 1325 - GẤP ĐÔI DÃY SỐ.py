from math import *
def solve(n, k):
    x = pow(2, n - 1)
    if(k == x): return n
    if(k < x): return solve(n - 1, k)
    return solve(n - 1, k - x)

t = int(input())
while(t > 0):
    t -= 1
    n, k = map(int, input().split())
    print(solve(n, k))