// Make Array Consecutive 2 from codeSignal

function solution(statues) {
  let sortedArray = statues.sort();
  //   console.log(sortedArray);
  let count = 0;
  let different;

  for (let i = 0; i < sortedArray.length - 1; i++) {
    different = sortedArray[i + 1] - sortedArray[i];
    if (different > 1) {
      count += different - 1;
    }
  }
  return count;
}

statues = [6, 2, 3, 8];
// solution(statues) = 3
// statues = [0, 3];
// solution(statues) = 2
// statues = [5, 4, 6];
// solution(statues) = 0
console.log(solution(statues));
