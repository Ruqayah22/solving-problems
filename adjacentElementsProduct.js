function solution(inputArray) {
  let z;
  let item = inputArray[0] * inputArray[1];
  //   let item = 0;

  for (let i = 1; i < inputArray.length - 1; i++) {
    z = inputArray[i] * inputArray[i + 1];
    if (item < z) {
      item = z;
    }
  }
  //   return item;
  console.log(item);
}

// inputArray = [3, 6, -2, -5, 7, 3];
// inputArray = [-1, -2];
// inputArray = [5, 1, 2, 3, 1, 4];
// inputArray = [1, 2, 3, 0];
inputArray = [9, 5, 10, 2, 24, -1, -48];
// inputArray = [5, 6, -4, 2, 3, 2, -23];
// inputArray = [4, 1, 2, 3, 1, 5];
// inputArray = [-23, 4, -3, 8, -12];
// inputArray = [1, 0, 1, 0, 1000];
solution(inputArray);

//   for (let i = 0; i < inputArray.length - 1; i++) {
//     for (let j = i + 1; j < inputArray.length - 1; j++) {
//       z = inputArray[i] * inputArray[j];
//       //   console.log(z);
//       zArray.push(z);
//       //   console.log(zArray);
//       zArray.forEach((e) => {
//         if (item <= e) {
//           item = e;
//           // console.log(item);
//         }
//       });
//     }
//   }

//   //   return item;
//   console.log(item);
// }
