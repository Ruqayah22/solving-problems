var plusOne = function (digits) {
  //   let num = digits.join("");
  //   num++;
  //   let str = String(num)
  //     .split("")
  //     .map((num) => {
  //       return Number(num);
  //     });

  //   return str;
  //   console.log(str);

  for (let i = digits.length - 1; i >= 0; i--) {
    if (digits[i] < 9) {
      digits[i]++;
      return digits;
    } else {
      digits[i] = 0;
    }
  }
  digits.unshift(1);
  return digits;

  //   for (let i = digits.length - 1; i >= 0; i--) {
  //     if (digits[i] === 9) {
  //       digits[i] = 0;
  //     } else {
  //       digits[i]++;
  //       return digits;
  //     }
  //   }
  //   digits.unshift(1);
  //   return digits;
};

// digits = [1, 2, 3];
// digits = [4, 3, 2, 1];
// digits = [9];
// digits = [6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3];
digits = [9, 9];
console.log(plusOne(digits));
