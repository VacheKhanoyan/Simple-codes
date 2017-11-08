function SLL(){
  let head = null;
  function Node(elem) {
    this.elem = elem;
    this.next = null;
  }
  this.insert = function(elem){
    let node = new Node(elem);
    if(!head) {
      head = node;
      return this;
    }
    let current_node = head;
    while(current_node.next) {
      current_node = current_node.next;
    }
    current_node.next = node;
    return this;
  };
  this.removeAt = function(pos){
    if(pos<0){
      throw new Error('invalid position');
    }
    let current_node = head;
    let previous_node = null;
    if (pos === 0) {
      head = current_node.next;
      current_node.next = null;
      current_node = null;
      return this;
    }
    let count = 0;
    while(count < pos) {
      ++ count;
      if (!current_node.next) {
        throw new Error('Invalid max range position');
      }
      previous_node = current_node;
      current_node = current_node.next;
    }
    previous_node.next = current_node.next;
    current_node.next = null;
    current_node = null;
    return this;
  };
  this.insertAt = function(pos,elem){
    if(pos < 0){
      throw new Error('invalid insertAt');
    }
    let node = new Node(elem);
    if(pos === 0) {
      if(!head) {
        head = node;
        return this;
      }
      let current_node = head;
      head = node;
      head.next = current_node;
      return this;
    }
    if (!head){
      throw new Error ('invalid insertAt');
    }
    let count = 0;
    let current_node = head;
    let previous_node = null;
    while(count<pos){
      count++;
      if(!current_node.next){
        throw new Error('invalid insertAt');
      }
      previous_node = current_node;
      current_node = current_node.next;
    }
    previous_node.next = node;
    previous_node.next.next = current_node.next;
    return this;
  };
  this.fetch = function(pos) {
    if(pos < 0){
      throw new Error('invalid fetch');
    }
    let current_node = head;
    let count = 0;
    if(!head) {
      throw new Error('invalid fetch');
    }
    if (pos === 0){
      console.log(current_node.elem);
      return this;
    }
    while(count < pos){
      count++;
      if(!current_node.next){
        throw new Error('invalid fetch');
      }
      current_node = current_node.next;
    }
    console.log(current_node.elem);
    return this;
  };
  this.print = function(){
    if(!head){
      throw new Error('invalid list');
    }
    let current_node = head;
    while(current_node){
      console.log(current_node.elem);
      current_node = current_node.next;
    }
  };
}
let obj = new SLL();
obj.insert(85);
obj.insert(66);
obj.insert(7);
obj.print();
obj.insertAt(1,34);
console.log();
obj.print();
obj.fetch(0)
