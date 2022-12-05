class Solution {
    public ListNode removeZeroSumSublists(ListNode head) {
        if(head == null) return null;
        
        ListNode pH = new ListNode(-1, head);
        ListNode p = pH, c;
        while(p != null) {
            c = p.next;
            int count = 0;
            while(c != null) {
                count += c.val;
                if(count == 0) p.next = c.next;
                c = c.next;
            }
            p = p.next;
        }
        
        return pH.next;
    }
}