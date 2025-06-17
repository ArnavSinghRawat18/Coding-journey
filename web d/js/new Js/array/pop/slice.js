// // let courses=["html", "css", "js", "react", "nodejs"];
// // console.log("Courses - ",courses);
// // let removed_courses=courses.pop();
// // console.log("removed course -",removed_courses);
// // console.log("updated courses - ",courses);

// //SLICE
// let fruits=["apple", "banana", "jackfruit", "orange", "grapes"];
// console.log("Fruits - ", fruits);
// console.log("Sliced Fruits - ", fruits.slice(1, 3)); // from index 1 to index 3 (not included)
// console.log("updated fruits  - ",fruits);

// let name = "arnav";
// // console.log(name.slice(1));
// let capital=name[0].toUpperCase();
// console.log(capital);
let courses = ["html", "css", "js", "react", "nodejs"];
courses.splice(2, 1, "python", "java"); // start from index 2, remove 1 element, add "python" and "java"
console.log("Updated Courses - ", courses); // ["html", "css", "python", "java", "react", "nodejs"]