n = int(input())
c = [int(i) for i in input().split()]
k = [int(i) for i in input().split()]
c.sort()
k.sort()

count = 0
flag = False

for i in range(n):
    if (k[i] > c[i]):
        print(-1)
        flag = True
    elif i==0:
        count += k[i]
    else: 
        count += c[i]

if not flag: print(count)
