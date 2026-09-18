def intersection(a,b):
    n = min([len(a), len(b)])
    res = ""
    i = 0
    while (i < n and a[i] == b[i]):
        res += a[i]
        i+=1

    return res

n = int(input())
words = []
for i in range(n):
    new = input()
    words.append(new)

words.sort(reverse=True)
words = list(dict.fromkeys(words))
# print(words)

k = ""
l = 0
m = 0
for act in words:
    # print(act)
    if (intersection(k, act) == ""):
        k = act
        l = len(k)
    else:
        if (len(act) > l): 
            k = act
            l = len(k)

        else:
            k = intersection(act, k)
            l = len(k)
            m = max([m, l])



print(m)
