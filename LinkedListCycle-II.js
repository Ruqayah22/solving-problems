// Linked List Cycle II leetCode
var detectCycle = function (head) {
  if (!head) return null;
  if (!head.next) return null;

  let fast = head;
  let slow = head;

  let pointer = head;

  while (fast && fast.next) {
    fast = fast.next.next;
    slow = slow.next;
    if (fast === slow) break;
  }

  if (fast !== slow) return null;

  while (pointer !== slow) {
    pointer = pointer.next;
    slow = slow.next;
  }
  return slow;
};

console.log(detectCycle([3, 2, 0, -4]));
