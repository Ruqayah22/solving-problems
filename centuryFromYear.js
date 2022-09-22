// function centuryFromYear(year) {
//   //   var x = Math.floor(year / 100) + 1;
//   var x = Math.floor((year - 1) / 100) + 1;

//   console.log(x);
//   return x;
// }

function solution(year) {
  for (let i = 1; i < 2005; i++) {
    var x = Math.floor((year - 1) / 100) + 1;
    console.log(x);
    return x;
  }
}

// year = 1905;
// year = 1700;
// year = 1988;
// year = 2000;
// year = 2001;
// year = 200;
// year = 374;
// year = 45;
// year = 8;
year = 3000;

// centuryFromYear(year);
solution(year);

// let z = 1905 / 100;
// console.log(~~z);

// method to  remove the decimal part from JavaScript number

// Math.trunc() //(truncate fractional part, also see below)
// Math.floor() //(round down)
// Math.ceil() //(round up)
// Math.round() //(round to nearest integer)
