// // Design Singly Linked List leetcode
// class Node {
//   constructor(val = null, prev = null, next = null) {
//     this.val = val;
//     this.prev = prev;
//     this.next = next;
//   }
// }

// class MyLinkedList {
//   constructor() {
//     this.head = new Node();
//     this.tail = new Node();
//     this.length = 0;
//     this.head.next = this.tail;
//     this.tail.prev = this.head;
//   }
//   get(idx) {
//     if (idx < 0 || idx >= this.length) {
//       return -1;
//     }
//     let curNode = this.head.next;

//     while (idx--) {
//       curNode = curNode.next;
//     }
//     return curNode.val;
//   }

//   addAtHead(val) {
//     let prev = this.head;
//     let next = this.head.next;

//     let node = new Node(val, prev, next);

//     prev.next = node;
//     next.prev = node;

//     this.length++;
//   }
//   addAtTail(val) {
//     let prev = this.tail.prev;
//     let next = this.tail;

//     let node = new Node(val, prev, next);

//     prev.next = node;
//     next.prev = node;

//     this.length++;
//   }

//   addAtIndex(idx, val) {
//     if (idx < 0 || idx > this.length) {
//       return null;
//     }
//     if (idx === this.length) {
//       this.addAtTail(val);
//       return;
//     }
//     let prev = this.head;

//     while (idx--) {
//       prev = prev.next;
//     }
//     let next = prev.next;
//     let node = new Node(val, prev, next);

//     prev.next = node;
//     next.prev = node;

//     this.length++;
//   }

//   deleteAtIndex(idx) {
//     if (idx < 0 || idx >= this.length) {
//       return null;
//     }
//     let prev = this.head;

//     while (idx--) {
//       prev = prev.next;
//     }
//     let next = prev.next.next;

//     prev.next = next;
//     next.prev = prev;

//     this.length--;
//   }
// }

// // console.log(MyLinkedList);

// //Your input
// //  [
// //    "MyLinkedList",
// //    "addAtHead",
// //    "addAtTail",
// //    "addAtIndex",
// //    "get",
// //    "deleteAtIndex",
// //    "get",
// //  ][([], [1], [3], [1, 2], [1], [1], [1])];

// // Expected answer
// // [null,null,null,null,2,null,3]

//////////////////////////////////
class Node {
  constructor(val = null, prev = null, next = null) {
    this.val = val;
    this.prev = prev;
    this.next = next;
  }
}

var MyLinkedList = function () {
  constructor();
  this.head = new Node();
  this.tail = new Node();
  this.length = 0;
  this.head.next = this.tail;
  this.tail.prev = this.head;
};

MyLinkedList.prototype.get = function (idx) {
  if (idx < 0 || idx >= this.length) {
    return -1;
  }
  let curNode = this.head.next;

  while (idx--) {
    curNode = curNode.next;
  }
  return curNode.val;
};

MyLinkedList.prototype.addAtHead = function (val) {
  let prev = this.head;
  let next = this.head.next;

  let node = new Node(val, prev, next);

  prev.next = node;
  next.prev = node;

  this.length++;
};

MyLinkedList.prototype.addAtTail = function (val) {
  let prev = this.tail.prev;
  let next = this.tail;

  let node = new Node(val, prev, next);

  prev.next = node;
  next.prev = node;

  this.length++;
};

MyLinkedList.prototype.addAtIndex = function (idx, val) {
  if (idx < 0 || idx > this.length) {
    return null;
  }
  if (idx === this.length) {
    this.addAtTail(val);
    return;
  }
  let prev = this.head;

  while (idx--) {
    prev = prev.next;
  }
  let next = prev.next;
  let node = new Node(val, prev, next);

  prev.next = node;
  next.prev = node;

  this.length++;
};

MyLinkedList.prototype.deleteAtIndex = function (idx) {
  if (idx < 0 || idx >= this.length) {
    return null;
  }
  let prev = this.head;

  while (idx--) {
    prev = prev.next;
  }
  let next = prev.next.next;

  prev.next = next;
  next.prev = prev;

  this.length--;
};
