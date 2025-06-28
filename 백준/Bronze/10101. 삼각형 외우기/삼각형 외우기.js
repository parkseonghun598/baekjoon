const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let inputAngles = [];

rl.on('line', (line) => {
  inputAngles.push(Number(line));
  if (inputAngles.length === 3) {
    rl.close();
  }
}).on('close', () => {
  classifyTriangle(inputAngles);
});

function classifyTriangle(angles) {
  const sum = angles[0] + angles[1] + angles[2];

  if (sum === 180) {
    if (isEquilateral(angles)) {
      console.log('Equilateral');
    } else if (isIsosceles(angles)) {
      console.log('Isosceles');
    } else {
      console.log('Scalene');
    }
  } else {
    console.log('Error');
  }
}

function isEquilateral(angles) {
  return angles[0] === 60 && angles[1] === 60 && angles[2] === 60;
}

function isIsosceles(angles) {
  return (
    angles[0] === angles[1] ||
    angles[0] === angles[2] ||
    angles[1] === angles[2]
  );
}
