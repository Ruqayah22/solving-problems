// // Merge Sorted Array from leetcode

// var merge = function (nums1, m, nums2, n) {
//   let first = m - 1;
//   let second = n - 1;

//   for (let i = m + n - 1; i >= 0; i--) {
//     if (second < 0) {
//       break;
//     }
//     if (nums1[first] > nums2[second]) {
//       nums1[i] = nums1[first];
//       first--;
//     } else {
//       nums1[i] = nums2[second];
//       second--;
//     }
//   }
//   return nums1;
// };

// // nums1 = [1, 2, 3, 0, 0, 0];
// // m = 3;
// // nums2 = [2, 5, 6];
// // n = 3;

// // nums1 = [1];
// // m = 1;
// // nums2 = [];
// // n = 0;

// nums1 = [0];
// m = 0;
// nums2 = [1];
// n = 1;

// console.log(merge(nums1, m, nums2, n));

var merge = function (nums1, m, nums2, n) {
  let p1 = m - 1;
  let p2 = n - 1;
  let i = m + n - 1;

  while (p2 >= 0) {
    if (p1 >= 0 && nums1[p1] > nums2[p2]) {
      nums1[i--] = nums1[p1--];
    } else {
      nums1[i--] = nums2[p2--];
    }
  }
  return nums1;
};

nums1 = [1, 2, 3, 0, 0, 0];
m = 3;
nums2 = [2, 5, 6];
n = 3;

// nums1 = [1];
// m = 1;
// nums2 = [];
// n = 0;

// nums1 = [0];
// m = 0;
// nums2 = [1];
// n = 1;

console.log(merge(nums1, m, nums2, n));
