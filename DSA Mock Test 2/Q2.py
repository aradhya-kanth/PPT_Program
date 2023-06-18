# Here is the code in Python.
def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    node = ListNode(0)
    curr = node
    carry = 0
    while l1 or l2 or carry!=0:
        a = l1.val if l1 else 0
        b = l2.val if l2 else 0
        sum_node = carry + a + b
        carry = sum_node//10
        curr.next = ListNode(sum_node%10)
        curr = curr.next
        l1 = l1.next if l1 else None
        l2 = l2.next if l2 else None
    return node.next
