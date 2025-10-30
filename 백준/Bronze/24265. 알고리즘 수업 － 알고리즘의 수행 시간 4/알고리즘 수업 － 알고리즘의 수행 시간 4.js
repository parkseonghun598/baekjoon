const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];

rl.on("line", function (line) {
  input.push(line);
}).on("close", function () {
  // MenOfPassion(A[], n) {
  //     sum <- 0;
  //     for i <- 1 to n
  //         for j <- 1 to n
  //             sum <- sum + A[i] × A[j]; # 코드1
  //     return sum;
  // }
  let n = Number(input[0]);
  n = (n * (n - 1)) / 2;
  console.log(n);
  console.log(2);
});