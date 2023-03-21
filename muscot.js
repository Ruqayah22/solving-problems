// function sum() {
//   let a = prompt("enter the number:");
//   let b = prompt("enter the number:");

//   return a + b;
// }
// sum();

// function sum(a, b) {
//   return a + b;
// }

// sum(2, 2);

// // a = 2;
// // b = 2;
// console.log(sum());
// // console.log(sum(a, b));

// function sum(a, b) {
//     let z=a+b;
//     return z;
// }

// sum(2,2)

// function arraySum() {

// }
////////////////////////////////////////////////////////////////
//one

// function photo(n, k) {
//   let z;

//   //   z = Math.floor(n / k);
//   z = Math.ceil(n / k);

//   return z;
// }

// console.log(photo(12, 4));
// console.log(photo(7, 3));
// console.log(photo(3, 5));
// console.log(photo(2, 15));
// console.log(photo(15, 4));
//////////////////////////////

//two

// function countPits(n, a) {
//   let count = 0;
//   //   let array = [];
//   //   for (let i = 0; i < a.length; i++) {
//   //     array.append();
//   //   }

//   for (let i = 1; i <= n - 1; i++) {
//     if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
//       count += 1;
//     }
//   }

//   return count;
// }

// n = 10;
// a = [1, 3, 1, 4, 2, 2, 5, 3, 6, 2];
// console.log(countPits(n, a));
// n = 13;
// a = [2, 1, 5, 1, 7, 7, 7, 1, 4, 2, 3, 1, 3];
// console.log(countPits(n, a));
// n = 5;
// a = [1, 2, 3, 4, 5];
// console.log(countPits(n, a));

////////////////////////////////////////////////////////////////////////////////////////////

// six

// function UniqueMatrix(N) {
//   let element_value = 1;
//   let i = 0;

//   while (i < N) {
//     if (i % 2 == 0) {
//       for (let f = element_value; f < element_value + N; f++) {
//         console.log(f);
//       }
//       element_value += N;
//     } else {
//       for (let k = element_value + N - 1; k > element_value - 1; k--) {
//         console.log(k);
//       }
//       element_value += N;
//     }
//     i = i + 1;
//   }
// }

// let N = 2;

// UniqueMatrix(N);
////////////////////////////////////////////////////////////////

//
// function BKB(n, k, s, s1) {
//   //   let n, k, s, s1;
//   let sum = 0;
//   let num = 0;
//   while (k--) {
//     s[s1[0] - "a"] = 1;
//   }
//   for (let i = 0; i < n; i++) {
//     if (s[s[i] - "a"] == 1) {
//       num++;
//     } else {
//       sum = sum + (num * (num + 1)) / 2;
//       num = 0;
//     }
//   }
//   return sum;
// }

// n = 5;
// k = 2;
// s = "abcab";
// s1 = "a b";
// console.log(BKB(n, k, s, s1));

// function numberOfSubstrings(params) {
//   for (let i = 0; i < params.length; i++) {
//     console.log(params[i]);
//   }
// }
// numberOfSubstrings(params);
