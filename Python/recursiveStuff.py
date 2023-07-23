def recursive_append_extend_after(a, b, depth):
    if depth == 0:
        return a
    else:
        res = recursive_append_extend_after(a, b, depth - 1)
        a += [b]
        return res #this is pointing to the same memory that was modified since a is being modified 

def recursive_append_newlist_after(a, b, depth):
    if depth == 0:
        return a
    else:
        res = recursive_append_newlist_after(a, b, depth - 1)
        a = a + [b]
        return res #this is pointing to the same memory that was NOT modified since a is not being modified 

def binaryStrings(lst, length):
    res = []
    def recursiveCall(cur, n):
        if n == 0:
            res.append(cur.copy())
            return
        cur.append(0)
        recursiveCall(cur, n-1)
        cur.pop()
        cur.append(1)
        recursiveCall(cur, n-1)
        cur.pop() #have to see why this is important, was very close.
    recursiveCall(lst, length)
    return res


print(recursive_append_extend_after([], 1, 3))  # Outputs: [1, 1, 1]
print(recursive_append_newlist_after([], 1, 3))  # Outputs: [1]
print(binaryStrings([],2))