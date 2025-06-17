const obj = {
    name: "Arnav",
    greet: function () {
        console.log("Hello, " + this.name);
    },
    bye(){
        console.log("Goodbye, " + this.name);
    }
};

// Correct logging syntax
console.log(obj);  // { name: 'Arnav', greet: [Function: greet], bye: [Function: bye] }

// Calling the method
obj.greet();       // Output: Hello, Arnav
obj.bye();
