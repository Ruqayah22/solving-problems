// Length of Last Word in leetcode
var lengthOfLastWord = function (s) {
  let str = s.trim(); // trim is remove the space in start and end the sentence not in between the words
  let count = 0;

  for (let i = str.length - 1; i >= 0; i--) {
    if (str.charAt(i) != " ") {
      count++;
    } else {
      break;
    }
  }
  return count;
};

// s = "Hello World";
// s = "   fly me   to   the moon  ";
// s = "luffy is still joyboy";
s = "ro ro    ";

console.log(lengthOfLastWord(s));
