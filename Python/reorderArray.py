lst = [1,2,3,4,5]
#output should be
# 1 5 2 4 3 
#o(n)

l = 0
r = len(lst) - 1
res = []

while l <= r:
    if l == r:
        res.append(lst[l])
        break
    res.append(lst[l])
    l += 1
    res.append(lst[r])
    r -= 1

print(res)

#how to come up with o(1)?
#prev and nextprev?
