const displayMessage="I love to code in dark mode";
// console.log(displayMessage.includes("dark"));
const vowels = "aeiouAEIOU";

for(let char of displayMessage){
    if(vowels.includes(char)){
        console.log(`${char} is a vowel`);
    }
}