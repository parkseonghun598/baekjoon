const fs = require("fs");
const lines = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const [n, string] = lines;
const [totalNumber, prizeNumber] = n.split(" ");

const array = string.split(" ");
const result = array.sort((a, b) => b - a);
const cutLine = result.filter((item, index) => index + 1 === parseInt(prizeNumber)).join("");

console.log(cutLine);