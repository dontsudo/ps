const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.on("line", function (n) {
  const q = [];
  for (let i = 1; i <= n; i++) q.push(i);

  while (q.length > 1) {
    q.shift();
    q.push(q.shift());
  }

  console.log(q[0]);
});
