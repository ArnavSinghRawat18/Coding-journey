// const arr1= [1, 2, 3];
// const arr2= arr1; // Copy by reference
// console.log(arr1); // [1, 2, 3]
// console.log(arr2); // [1, 2, 3]
// arr2.push(4); // Modifying arr2
// console.log(arr1); // [1, 2, 3, 4] - arr1 is also affected
// console.log(arr2); // [1, 2, 3, 4] - arr2 is affected as well
// //spread operator
// const arr3 = [...arr1]; // Copy by value using spread operator
// arr3.push(5); // Modifying arr3
// console.log(arr1); // [1, 2, 3, 4] - arr1 remains unchanged
// console.log(arr3); // [1, 2, 3, 4, 5] - arr3 is affected

//using for loop
// const arr1 = [1, 2, 3,4,5,6,7,8,9,10];
// const arr2 = [];
// for(let i=0;i<arr1.length;i++){
//     arr2.push(arr1[i]);
// }
// console.log(arr1); // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

let str ="Arnav";
let arrOfStr = [...str];
console.log(arrOfStr); // ['A', 'r', 'n', 'a', 'v']