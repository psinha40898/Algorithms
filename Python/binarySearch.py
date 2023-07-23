def bsRegular (lst, x):
    l = 0
    r = len(lst) - 1
    while l <= r:
        m = (l + r) // 2
        if lst[m] == x:
            return m
        if lst[m] > x:
            r = m - 1
        if lst[m] < x:
            l = m + 1
    return - 1
def bsLow(lst, x):
    l = 0
    r = len(lst) - 1
    res = 0
    while l<= r:
        m = (l + r) // 2
        if lst[m] <= x: #we found something lower, save it and go right (it'll output the closest element that is lower if element not there)
            res = lst[m]
            l = m + 1
        else:
            r = m - 1
    return res
def bsHigh(lst, x):
    l = 0
    r = len(lst) - 1
    res = 0
    while l <= r:
        m = (l + r) // 2
        if lst[m] >= x: #we found something higher, save it and go left, (it'll output the closest element that is greater if element not there)
            res = lst[m]
            r = m - 1
        else:
            l = m + 1
    return res
def bsInsertL(lst, x):
    l = 0 
    r = len(lst)
    while l < r:
        m = (l + r) // 2
        if lst[m] < x: #if lower go right
            l = m + 1
        else:           #if equal or greater, go left (that's where we would insert it)
            r = m 
    return l
def bsInsertR(lst, x):
    l = 0
    r = len(lst)
    while l < r:
        m = (l + r) // 2
        if lst[m] > x: #if greater, go left
            r = m
        else:
            l = m + 1 #if equal or lower, go right (That's where we would insert it)
    return l

def bsLeftMostIndex(lst, x):
    l = 0
    r = len(lst) - 1
    i = -1
    while l<=r:
        m = (l + r) // 2
        if lst[m] > x:
            r = m - 1
        elif lst[m] < x:
            l = m + 1
        else:           #we found the element, see if we can go left and still find it
            i = m
            r = m - 1
    return i

def bsRightMostIndex (lst, x):
    l =0 
    r = len(lst) - 1
    i = - 1
    while l <= r:
        m = (l + r ) // 2
        if lst[m] > x:
            r = m- 1
        elif lst[m] < x:
            l = m+1
        else:           #we found the element, see if we can go rigth and still find it
            i = m
            l = m + 1
    return i        
        

myList = [1,2,3,5,6,7]

print(bsRegular(myList, 4)) # should be - 1
print(bsLow(myList, 4)) #should be the lowest closest, 3
print(bsHigh(myList, 4)) #should be the highest closest, 5
print(bsInsertL(myList, 3)) #should be the lowest insertion point, 2
print(bsInsertR(myList, 3)) #should be the highest insertion point, 3
testLIST = [5,7,7,8,8,10]
print("testList = [5,7,7,8,8,10]")
print(bsLow(testLIST, 8))
print(bsHigh(testLIST, 8))
print(bsLeftMostIndex(testLIST, 8))
print(bsRightMostIndex(testLIST, 8))
prev = None
prev = 0
if prev:
    print("yeah")


    