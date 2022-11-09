// function solution(a) {

// let b =[];

// for(let i=0; i<a.length -1 ; i++){
//     b[i]= a[i-1] + a[i] + a[i+1]
// }
// return b
// }

// Input:
// a: [4, 0, 1, -2, 3]
// Output:
// [null, 5, -1, 2]
// Expected Output:
// [4, 5, -1, 2, 1]

// function solution(a) {

// let b = []

// for(let i=0; i<a.length  ; i++){

//     b[0] = 0 + a[i] + a[i+1]
//     b[i] = a[i-1] + a[i] + a[i+1]
// }
// return b
// }

// Input:
// a: [9]
// Output:
// [null]
// Expected Output:
// [9]

// Input:
// a: [1, 2, 3, 4]
// Output:
// [null, 6, 9]
// Expected Output:
// [3, 6, 9, 7]

// Input:
// a: [1, 10, 10, -6, 5, -3, -7, 10, 9, 10]
// Output:
// [null, 21, 14, 9, -4, -5, 0, 12, 29]
// Expected Output:
// [11, 21, 14, 9, -4, -5, 0, 12, 29, 19]

// ////////////////////
// function solution(numbers) {
//     let x ;
//     let sum ;

//     for(let i= 0 ; i<numbers.length -1 ; i++){
//         for(let j = i+1; j<<numbers.length -1 ; j++){
//             sum = numbers[i] + numbers[j]
//             x = Math.pow(2, sum);
//         }
//     }
//     return x
// }

// Input:
// numbers: [1, -1, 2, 3]
// Output:
// Type mismatch
// null
// Expected Output:
// 5

// Input:
// numbers: [2]
// Output:
// Type mismatch
// null
// Expected Output:
// 1

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
