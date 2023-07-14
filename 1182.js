const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let n, s;
let nums = [];

rl.on("line", function (line) {
  if (!n) {
    [n, s] = line.split(" ").map(Number);
  } else {
    nums = line.split(" ").map(Number);
    console.log(countSubsequenceWithSum(nums, s));

    rl.close();
  }
});

/**
 * @param {number[]} nums
 * @param {number} targetSum
 */
function countSubsequenceWithSum(nums, targetSum) {
  const n = nums.length;
  let count = 0;
  function findSubsequences(index, sum) {
    if (sum === targetSum) {
      count++;
    }
    for (let i = index + 1; i < n; i++) {
      findSubsequences(i, sum + nums[i]);
    }
  }
  for (let i = 0; i < n; i++) {
    findSubsequences(i, nums[i]);
  }
  return count;
}
