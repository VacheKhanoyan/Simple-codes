var Stack = function() {
    this.count = 0;
    this.storage = {};
}
Stack.prototype.push = function(value) {
    this.storage[this.count] = value;
    this.count++;
    console.log('pushed number is:' + value)
}
Stack.prototype.pop = function() {
    if (this.count === 0) {
        return undefined;
    }
    this.count--;
    var result = this.storage[this.count];
    console.log('poped number is:'+ result )
    delete this.storage[this.count];
    return result;
    
    }
Stack.prototype.size = function() {
return this.count;
}
Stack.prototype.print = function() {
  console.log(this.storage)
}
var stack = new Stack();
stack.push(5);
stack.push(8);
stack.push(11);
stack.print();
console.log('size is:'+ stack.size()); 
stack.push(15);
stack.print();
stack.pop();
stack.pop();
console.log('size is:'+ stack.size()); 
stack.print(); 
