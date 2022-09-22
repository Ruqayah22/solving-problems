function solution(inputString) {
  let reverseString = inputString.split("").reverse().join("");

  if (inputString === reverseString) {
    console.log("true");
    return true;
  } else {
    console.log("false");
    return false;
  }
}

inputString = "aabaa";
// inputString = "abac";
// inputString = "a";
// inputString = "az";
// inputString = "abacaba";
// inputString = "z";
// inputString = "aaabaaaa";
// inputString = "zzzazzazz";
// inputString = "hlbeeykoqqqqokyeeblh";
// inputString = "hlbeeykoqqqokyeeblh";

solution(inputString);
