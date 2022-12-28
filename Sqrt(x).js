// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
// leetCode

var mySqrt = function (x) {
  let p = Math.pow(x, 0.5);
  let n = Math.floor(p); // the lower nearest integer
  //   let n = Math.round(p); // the hightest nearest integer

  return n;
};

x = 4; // 2
// x = 8; // 2
// x = 9; //3
// x = 15;

console.log(mySqrt(x));
