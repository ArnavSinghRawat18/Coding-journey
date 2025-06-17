/**
 CONDITONAL STATEMENT
 */


/**
 
 Syntax
 if(condition/expression){
 body / action to be performed
 }
 */

/** SIMPLE PROGRAM TO CHECK AGE 
 const readlineSync=require("readline-sync");
const userAge=readlineSync.question("How old are u ")
if(userAge>=18){
    console.log("Hey you are an adult..")
}
else{
    console.log("You are not an adult...") 
}*/

const readlineSync=require("readline-sync");
const number = Number(readlineSync.question("Enter a Number"));
const remainderby3= number%3;
const remainderby5= number%5;
if(remainderby3==0){
    console.log("Fizzzz")
}
else if(remainderby5==0){
    console.log("Fizzzz")
}
// else(){
//     console.log("nikl yaha se ")
// }



