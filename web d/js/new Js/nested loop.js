const read=require("readline-sync");
const number=Number(read.question("Enter a number "));
const remainder= number%2;
if(remainder==0){
    console.log(`The entered number ${number} is even`);
    if(number%4==0){
        console.log(`The entered number ${number} is divisible by 4`); 
    }
    else{
        console.log(`The entered number ${number} is not divisible by 4`);
    }
}
else{
    console.log(`The entered number ${number} is not even`);
}
