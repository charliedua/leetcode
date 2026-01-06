# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        l3 = None
        pl3 = l3
        while l1.next != None:
            while l2.next != None:
                val = l1.val + l2.val
                if l3 == None:
                    l3 = ListNode(val)
                else:
                    if (val >= 10):
                        l_val = int( val / 10 )
                        l3 = ListNode(l3.val + l_val)
                        l3.next = ListNode(val-(val%10))
                    else:
                        l3.next = ListNode(val)
                l2 = l2.next
            l1 = l1.next
        return l3
