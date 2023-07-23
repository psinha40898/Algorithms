class ListNode:
    def __init__(self, val = 0, next=None):
        self.val = val 
        self.next = next

class Solution:
    def pairSum(self, head):
        fast = slow = head
        prev = None
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        #print(slow.val) 4
        while slow:
            tmp = slow.next
            slow.next = prev
            prev = slow
            slow = tmp

        second = prev
        first = head
        res = 0
        while second:
            # print(first.val)
            # print(second.val)
            twin = first.val + second.val
            res = max(res, twin)
            first = first.next
            second = second.next
        print(res)
    def swapPairs(self, head):
        dummy = ListNode(0, head)
        p = dummy
        m = None
        r = None
        #check if we have one node
        if head:
            m = head
        else:
            return
        #check if we have more than 1 node
        
        if head.next:
            r = head.next
        else:
            return
        
        while m:
            #swap
            p.next = r
            t = r.next
            r.next = m
            m.next = t

            #update
            p = r.next
            m = m.next
            if m and m.next:
                r = m.next
            else:
                break
        return dummy.next



        


if __name__ == "__main__":
    # The number of nodes in the list is an even integer in the range [2, 105].

    #case 1 (1) -> (2) - > (3) -> (4) -> (5) -> (6)
    node1 = ListNode(1)
    node2 = ListNode(2)
    node3 = ListNode(3)
    node4 = ListNode(4)
    node5 = ListNode(5)
    node6 = ListNode(6)
    
    node1.next = node2
    node2.next = node3
    node3.next = None

    # case2 (1) - > (10000)

    # node1 = ListNode(1)
    # node2 = ListNode(10000)
    # node1.next = node2
    # node2.next = None
    # head = node1
    # solution.pairSum(head)


    head = node1
    solution = Solution()
    cur = solution.swapPairs(head)
    while cur:
        print(cur.val)
        cur = cur.next
    
    

    


