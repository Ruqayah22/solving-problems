function Divi(n, a) {
  let s, z;
  let count = 0;

  s = a[0];
  for (let i = 0; i < n; i++) {
    if (n === 1) {
      return n, a[i];
    } else if (a[i] <= s) {
      z = s;
    } else if (a[i] % z == 0) {
      count++;
    }
  }
  return z, count;
  //   console.log(z, count);
}

// n = 3;
// a = [1, 5, 11];

n = 1;
a = 10;

console.log(Divi(n, a));
