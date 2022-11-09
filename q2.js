// Given an array of unique integers numbers, your task is to find the number of pairs of indices (i, j) such that i ≤ j and the sum numbers[i] + numbers[j] is equal to some power of 2.

// Note: numbers 20 = 1, 21 = 2, 22 = 4, 23 = 8, etc. are considered to be powers of 2.

// Example

// For numbers = [1, -1, 2, 3], the output should be solution(numbers) = 5.
// There is one pair of indices where the corresponding elements sum up to 20 = 1:
// (1, 2): numbers[1] + numbers[2] = -1 + 2 = 1
// There are two pairs of indices where the corresponding elements sum up to 21 = 2:
// (0, 0): numbers[0] + numbers[0] = 1 + 1 = 2
// (1, 3): numbers[1] + numbers[3] = -1 + 3 = 2
// There are two pairs of indices where the corresponding elements sum up to 22 = 4:
// (0, 3): numbers[0] + numbers[3] = 1 + 3 = 4
// (2, 2): numbers[2] + numbers[2] = 2 + 2 = 4
// In total, there are 1 + 2 + 2 = 5 pairs summing up to powers of two.
// For numbers = [2], the output should be solution(numbers) = 1.
// The only pair of indices is (0, 0) and the sum of corresponding elements is equal to 22 = 4. So, the answer is 1.
// For numbers = [-2, -1, 0, 1, 2], the output should be solution(numbers) = 5.
// There are two pairs of indices where the corresponding elements sum up to 20 = 1: (2, 3) and (1, 4)
// There are two pairs of indices where the corresponding elements sum up to 21 = 2: (2, 4) and (3, 3)
// There is one pair of indices where the corresponding elements sum up to 22 = 4: (4, 4)
// In total, there are 2 + 2 + 1 = 5 pairs summing up to powers of 2
// Input/Output

// [execution time limit] 4 seconds (js)

// [input] array.integer numbers

// An array of unique integers.

// Guaranteed constraints:
// 1 ≤ numbers.length ≤ 105,
// -106 ≤ numbers[i] ≤ 106.

// [output] integer

// The number of pairs of indices (i, j) such that i ≤ j and the sum of the corresponding elements is equal to some power of 2.

// [JavaScript] Syntax Tips

// function solution(numbers) {
//     let x ;
//     let sum =0 ;

//     for(let i= 0 ; i<numbers.length -1 ; i++){
//         for(let j = i+1; j<numbers.length -1 ; j++){
//             if(numbers.length === 1 ){
//                 return Math.pow(2, 1);
//             }else{
//             sum = numbers[i] + numbers[j]
//             x = Math.pow(2, sum);

//             }
//         }
//     }
//     return x
// }

// Input:
// numbers: [1, -1, 2, 3]
// Output:
// 2
// Expected Output:
// 5

// Input:
// numbers: [2]
// Output:
// Type mismatch
// null
// Expected Output:
// 1

// Input:
// numbers: [-2, -1, 0, 1, 2]
// Output:
// 2
// Expected Output:
// 5

// function solution(numbers) {
//     let x ;
//     let sum =0 ;

//     if(numbers.length === 1 ){
//                 return Math.pow(2, 1);
//             }else{

//     for(let i= 0 ; i<numbers.length -1 ; i++){
//         for(let j = i+1; j<numbers.length -1 ; j++){

//             sum = numbers[i] + numbers[j]
//             x = Math.pow(2, sum);

//             }
//         }
//     }
//     return x
// }
