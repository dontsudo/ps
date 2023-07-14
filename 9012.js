const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const input = [];

rl.on("line", (line) => {
  input.push(line);
}).on("close", () => {
  const [_, ...arr] = input;

  for (const str of arr) {
    if (isVPS(str)) console.log("YES");
    else console.log("NO");
  }
});

const BRACKET_MAP = {
  "(": ")",
  "[": "]",
  "{": "}",
};

function isVPS(str) {
  const stack = [];
  for (const c of str) {
    if (c in BRACKET_MAP) {
      stack.push(c);
    } else if (stack.length === 0 || BRACKET_MAP[stack.pop()] !== c) {
      return false;
    }
  }
  return stack.length === 0;
}
