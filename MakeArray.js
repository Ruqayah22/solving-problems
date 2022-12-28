// Make Array Consecutive 2 from codeSignal

// function solution(statues) {
//   let sortedArray = statues.sort();
//   //   console.log(sortedArray);
//   let count = 0;
//   let different;

//   for (let i = 0; i < sortedArray.length - 1; i++) {
//     different = sortedArray[i + 1] - sortedArray[i];
//     if (different > 1) {
//       count += different - 1;
//     }
//   }
//   return count;
// }

// statues = [6, 2, 3, 8];
// // solution(statues) = 3
// // statues = [0, 3];
// // solution(statues) = 2
// // statues = [5, 4, 6];
// // solution(statues) = 0
// console.log(solution(statues));

//____________________________________________________
// function solution(statues) {
//   statues.sort();
//   let count = 0;

//   var min = statues[0];
//   var max = statues[statues.length - 1];

//   for (let i = min; i < max; i++) {
//     if (statues.indexOf(i) === -1) {
//       count++;
//     }
//   }
//   return count;
// }

// statues = [6, 2, 3, 8];
// // solution(statues) = 3
// // statues = [0, 3];
// // solution(statues) = 2
// // statues = [5, 4, 6];
// // solution(statues) = 0
// console.log(solution(statues));

//_____________________________________________

// function solution(statues) {
//   statues.sort();

//   let count = 0;

//   for (let i = 0; i < statues.length - 1; i++) {
//     if (statues[i + 1] - statues[i] !== 1) {
//       let miss = 0;
//       miss = statues[i + 1] - statues[i] - 1;

//       count += +miss;
//     }
//   }
//   return count;
// }

// statues = [6, 2, 3, 8];
// // solution(statues) = 3
// // statues = [0, 3];
// // solution(statues) = 2
// // statues = [5, 4, 6];
// // solution(statues) = 0
// console.log(solution(statues));

//____________________________________________________

function solution(statues) {
  let num = 0;
  statues.sort(function (a, b) {
    return a - b;
  });
  for (let i = 0; i < statues.length; i++) {
    if (statues[i] + 1 === statues[i + 1]) {
      return num;
    } else {
      statues.splice(i + 1, 0, statues[i] + 1);
      return (num += 1);
    }
  }
  return num;
}

statues = [6, 2, 3, 8];
// solution(statues) = 3
// statues = [0, 3];
// solution(statues) = 2
// statues = [5, 4, 6];
// solution(statues) = 0
console.log(solution(statues));
