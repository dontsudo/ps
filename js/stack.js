class Node {
  constructor(item, next) {
    this.item = item;
    this.next = next;
  }
}

class Stack {
  constructor() {
    this.top = null;
  }

  push(item) {
    this.top = new Node(item, this.top);
  }

  pop() {
    const item = this.top.item;
    this.top = this.top.next;

    return item;
  }
}
    
  
function main() {
  const stack = new Stack();

  stack.push(1);
  stack.push(2);
  stack.push(3);

  console.log(stack.pop());
  console.log(stack.pop());
  console.log(stack.pop());
}

main()
