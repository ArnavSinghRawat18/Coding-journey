const availableSize=["XS","S","M","L","XL","XXL"];
 const readlinesync= require("readline-sync");
const size=readlinesync.question("Enter the size you want to check: ");
const isAvailable=availableSize.includes(size);

if(isAvailable){
    console.log(`The size ${size} is available.`);
}else{
    console.log(`The size ${size} is not available.`);
}