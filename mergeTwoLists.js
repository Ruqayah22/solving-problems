//Merge Two Sorted Lists from leetcode
// is for list (node list)

// Definition for singly-linked list.
function ListNode(val, next) {
  this.val = val === undefined ? 0 : val;
  this.next = next === undefined ? null : next;
}

var mergeTwoLists = function (list1, list2) {
  let curr = new ListNode(0);
  const dummy = curr;

  // (list1 != null && list2 != null)
  while (list1 && list2) {
    if (list1.val < list2.val) {
      curr.next = list1;
      list1 = list1.next;
    } else {
      curr.next = list2;
      list2 = list2.next;
    }
    curr = curr.next;
  }
  // (list1 != null)
  if (list1) {
    curr.next = list1;
  }
  // (list2 != null)
  if (list2) {
    curr.next = list2;
  }
  // console.log(JSON.stringify(dummy));
  // return dummy.next;
  console.log(dummy.next);
};
list1 = [1, 2, 4];
list2 = [1, 3, 4];

// Expected = [1,1,2,3,4,4]

// list1 = [];
// list2 = [];
//  //Expected = []

// list1 = [];
// list2 = [0];
// //Expected = [0];

mergeTwoLists(list1, list2);

//____________________________________________________
// if is it an array
// var mergeTwoLists = function (list1, list2) {
//   let list3 = [];
//   list3 = list1.concat(list2);
//   // list3 = [...list1, ...list2];
//   // for (let i = 0; i < list2.length; i++) {
//   //   list1.push(list2[i]);
//   // }
//   console.log(list1.sort());
// };
// list1 = [1, 2, 4];
// list2 = [1, 3, 4];

// // list1 = [];
// // list2 = [];

// // list1 = [];
// // list2 = [0];
// mergeTwoLists(list1, list2);
