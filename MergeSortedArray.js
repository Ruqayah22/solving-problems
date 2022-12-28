// Merge Sorted Array from leetcode

function merge(nums1, m, nums2, n) {
  var result = [];

  const nums11 = nums1.filter((element) => element != 0).length;
  const nums22 = nums2.filter((element) => element != 0).length;
  //   nums11.sort(function (a, b) {
  //     return a - b;
  //   });
  //   nums22.sort(function (a, b) {
  //     return a - b;
  //   });

  //   console.log(nums11, nums22);

  result = nums11.concat(nums22);
  //   return nums11;
  console.log(result);
  //   console.log(`m = ${m}, n = ${n}`);
  //   return result;
}

nums1 = [1, 2, 3, 0, 0, 0];
m = 3;
nums2 = [2, 5, 6];
n = 3;

// nums1 = [1];
// // m = 1;
// nums2 = [];
// // n = 0;

// nums1 = [0];
// m = 0;
// nums2 = [1];
// n = 1;

merge(nums1, m, nums2, n);
// console.log(merge(nums1, m));
