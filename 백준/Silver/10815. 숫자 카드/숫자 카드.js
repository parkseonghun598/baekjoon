let input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');
// let input=[5,`6 3 2 10 -10`, 8, `10 9 -5 2 3 4 5 -10`];

let N = Number(input[0]);
let ownedCard = new Set(input[1].split(' ').map(Number));
let M = Number(input[2]);
let card = input[3].split(' ').map(Number);
let arr =[]

for(let i=0; i<M; i++){
    if(ownedCard.has(card[i])) arr.push(1)
    else arr.push(0)
}
console.log(arr.join(' '));