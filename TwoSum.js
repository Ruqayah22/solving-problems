// two sum array fromleetcode

var twoSum = function (nums, target) {
  // let array = [];
  for (i = 0; i < nums.length; i++) {
    for (j = i + 1; j < nums.length; j++) {
      if (nums[i] + nums[j] === target) {
        console.log([i, j]);
        // return [i, j];
        // array.push(i, j);
      }
    }
  }
  // console.log(array);
  // return array;
};
// nums = [2, 7, 11, 15];
// target = 9;

// nums = [3, 2, 4];
// target = 6;

nums = [3, 2, 3];
target = 6;

// nums = [3, 2, 4];
// target = 6;

twoSum(nums, target);

// var twoSum = function (nums, target) {
//   let array = [];
//   for (i = 0; i < nums.length; i++) {
//     if (nums[i] + nums[i + 1] === target) {
//       array.push(i, i + 1);
//     } else {
//     }
//   }
//   console.log(array);
//   // return array;
// };
