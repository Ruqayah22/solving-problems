function solution(n) {
  var num = n.toString();
  var array = num.split("");

  var sum = parseInt(array[0]) + parseInt(array[1]);
  console.log(sum);
  return sum;
}

n = 29;
// n = 48;
// n = 10;
// n = 25;
// n = 52;
// n = 99;
// n = 44;
// n = 50;
// n = 39;
// n = 26;

solution(n);
