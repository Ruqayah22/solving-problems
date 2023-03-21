const prompt = require("prompt-sync")({ sigint: true });

function DiceGame() {
  let a = prompt();
  let b = prompt();

  if (a > b) {
    return "FIRST";
  } else if (a < b) {
    return "SECOND";
  } else {
    return "DRAW";
  }
}

// a = 3;
// b = 2;

// a = 4;
// b = 4;

// a = 1;
// b = 6;

// console.log(DiceGame(a, b));
console.log(DiceGame());
