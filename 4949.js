const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const BALANCE_TABLE = {
  "(": ")",
  "[": "]",
};

function isBalancedString(str) {
  const stack = [];
  for (const char of str) {
    if (char in BALANCE_TABLE) {
      stack.push(char);
    } else if (stack.length === 0 || BALANCE_TABLE[stack.pop()] !== char) {
      return false;
    }
  }
  return stack.length === 0;
}

rl.on("line", function (line) {
  if (line === ".") {
    rl.close();
    return;
  }
  console.log(isBalancedString(line) ? "yes" : "no");
}).on("close", () => {
  process.exit(0);
});
