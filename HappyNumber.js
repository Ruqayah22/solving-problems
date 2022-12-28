// // Happy Number in leetCode

// var isHappy = function (n) {
//   let m = n % 10;
//   //   console.log(m);
//   let d = Math.floor(n / 10);
//   //   console.log(d);
//   let sqrSum = 0;

//   sqrSum = Math.pow(m, 2);
//   sqrSum += Math.pow(d, 2);

//   return sqrSum;
// };

// // n = 19; // 82 -> (1^2+9^2 = 82)
// // n = 2; // 4 -> (0^2 + 2^2 = 4)
// // n = 55;
// console.log(isHappy(n));

////////////////////////////////////////////////////////////////

// Happy Number in leetCode

var isHappy = function (n) {
  let seen = new Set();

  while (!seen.has(n)) {
    seen.add(n);
    sqSum = 0;
    while (n > 0) {
      sqSum += (n % 10) * (n % 10);
      n = Math.floor(n / 10);
    }
    if (sqSum == 1) {
      return true;
    }
    n = sqSum;
  }

  return false;
};

// n = 19;
// n = 2;
n = 55;
console.log(isHappy(n));
