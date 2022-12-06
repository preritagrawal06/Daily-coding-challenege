class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode f = head.next ;
        ListNode s = head;
        while(f != null){
            s = s.next;
            if(f.next == null){
                f = f.next;
            }
            else {
                f = f.next.next;
            }
        }
        return s;
    }
}
