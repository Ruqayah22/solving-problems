// Palindrome Number in leetCode

var isPalindrome = function (x) {
  let Z = x.toString();
  let R = x.toString().split("").reverse().join("");

  console.log(x);
  console.log(R);

  if (Z === R) {
    return true;
  } else {
    return false;
  }
};

// x = 121;
// x = -121;
// x = 10;
x = 22;
console.log(isPalindrome(x));
