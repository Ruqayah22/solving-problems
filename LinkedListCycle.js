// Linked List Cycle leetcode

// class ListNode {
//   constructor(val) {
//     this.val = val;
//     this.next = null;
//   }
// }

var hasCycle = function (head) {
  let fast = head;
  let slow = head;
  //   let fast = new ListNode(head);
  //   let slow = new ListNode(head);

  while (fast && fast.next) {
    fast = fast.next.next;
    slow = slow.next;
    if (fast === slow) return true;
  }
  return false;
};

// head = [3, 2, 0, -4];
head = [1, 2];
// head = [1];
console.log(hasCycle(head));
