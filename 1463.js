function makeOne(n) {
  const dp = new Array(n + 1).fill(0);

  for (let i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + 1;

    if (i % 2 === 0) 
      dp[i] = Math.min(dp[i], dp[i / 2] + 1);

    if (i % 3 === 0) 
      dp[i] = Math.min(dp[i], dp[i / 3] + 1);
  }

  return dp[n];
}

const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})

rl.on('line', function (line) {
  let n = Number(line);
  console.log(makeOne(n));
})
