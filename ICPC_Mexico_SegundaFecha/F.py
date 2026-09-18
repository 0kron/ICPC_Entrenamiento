import bisect

def binary_search_bisect(arr, x):
    i = bisect.bisect_left(arr, x)
    if i != len(arr) and arr[i] == x:
        return i
    else:
        return -1
dp = [0, 2, 3]
n = 1000000
if (n < len(dp)): print(dp[n])
else:
    for i in range(len(dp), n+1):
        ind = binary_search_bisect(dp, i)
        if (ind >= 0): dp.append(ind*3)
        else: dp.append(dp[-1] + 1) 

    print(dp)




