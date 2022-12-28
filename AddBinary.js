//Add two Binary number from leetcode

var addBinary = function (a, b) {
  // return (a + b).toString(2); // solution 1
  // let z = (parseInt(a, 2) + parseInt(b, 2)).toString(2); // solution 2

  // solution 3 , time complexity: O(n) - linear , space complexity: O(1) - constant
  let sum = "";
  let carry = 0;
  let i = a.length - 1;
  let j = b.length - 1;
  while (i >= 0 || j >= 0) {
    let A = a[i] ? a[i] : "0"; //let A = a[i];
    let B = b[j] ? b[j] : "0"; //let B =b[j];
    sum = String(A ^ B ^ carry) + sum;
    if (A === B && A !== String(carry)) {
      carry = Number(!carry); //  parseInt(!carry)
    }
    i--;
    j--;
  }
  if (carry) {
    sum = String(carry) + sum;
  }

  return sum;
  // return carry ? String(carry) + sum : sum;
};

console.log(addBinary("11", "1"));
// 100
console.log(addBinary("1010", "1011"));
// (a = "1010"), (b = "1011");
// 10101;

a =
  "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
b =
  "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";

// // "110111101100010011000101110110100000011101000101011001000011011000001100011110011010010011000000000";
console.log(addBinary(a, b));
