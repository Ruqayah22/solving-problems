// Longest Common Prefix in leetCode
// var longestCommonPrefix = function (strs) {
//   let first = strs[0];

//   for (let i = 1; i < strs.length; i++) {
//     while (strs[i].indexOf(first) !== 0) {
//       first = first.substring(0, first.length - 1);
//     }
//   }
//   return first;
// };

// // strs = ["flower", "flow", "flight"]; //"fl"
// strs = ["dog", "racecar", "car"]; // ""
// console.log(longestCommonPrefix(strs));

var longestCommonPrefix = function (strs) {
  if (strs.length == 0) {
    return "";
  }
  for (let i = 0; i < strs[0].length; i++) {
    for (let j = 0; j < strs.length; j++) {
      if (strs[0][i] != strs[j][i]) {
        return strs[0].slice(0, i);
      }
    }
  }
  return strs[0];
};

strs = ["flower", "flow", "flight"]; //"fl"
// strs = ["dog", "racecar", "car"]; // ""
console.log(longestCommonPrefix(strs));
