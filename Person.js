let Person = function(name,  speciality, age, weight, height) {
  this.name = name;
  this.speciality = speciality;
  if (isNaN(age) || isNaN(weight) || isNaN(height))
        throw new TypeError('please enter a number');
        this.age = age;
        this.weight = weight;
        this.height = height;
         return "the Person Name is"+" " +this.name ;
};
let obj1 = new Person('Vache','programer', 33 , 64 , 178);
let obj2 = new Person('Ashot','singer', 24 , 75 , 180);
let obj3 = new Person('Hakob','enginer', 27 , 68 , 170);
let obj4 = new Person('Miqayel','driver', 43 , 85 , 168);
let obj5 = new Person('Arthur','doctor', 54 , 80 , 185);
let arr = [obj1, obj2, obj3, obj4, obj5];
function medianHeight (arr) {
let med_height=0;
for(let i = 0; i < arr.length; ++i){
  med_height += arr[i].height;
}
return med_height/ arr.length;
}
function medianWeight (arr) {
let med_weight=0;
for(let i = 0; i < arr.length; ++i){
  med_weight += arr[i].weight;
}
return med_weight/ arr.length;
}

function sortByAge (arr,asc){
if(asc) { 
arr.sort(function (obj1, obj2) {
  if (obj1.age > obj2.age) {
    return 1;
  }
  if (obj1.age < obj2.age) {
    return -1;
  }
    return 0;
});
}
else {
  arr.sort(function (obj1, obj2) {
  if (obj1.age < obj2.age) {
    return 1;
  }
  if (obj1.age > obj2.age) {
    return -1;
  }
    return 0;
});
}
return arr.sort();

} function printLongestName (arr) {
let length = 1;
let name = "";
let str;
for(let i = 1; i < arr.length; ++i){
    if(arr[i].name.length > length){
        length = arr[i].name.length;
        name = arr[i].name.length;
        str = arr[i].name.toString();
    }
    return str;
}
}

console.log('median weight is: ' + medianWeight(arr));
console.log('median height is: ' + medianHeight(arr));
console.log(sortByAge(arr, false));
console.log(printLongestName(arr));

