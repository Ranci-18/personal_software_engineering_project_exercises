//variable containing human age
const myAge = 29;
//the first two human years 
let earlyYears = 2;
earlyYears *= 10.5;
//accounted for 2 human years
laterYears = myAge - 2;
//dog years after first 2 human years
laterYears *= 4;
console.log(earlyYears);
console.log(laterYears);
//dog years calculated so far
let myAgeInDogYears = earlyYears + laterYears;
//person name in lowercase
const myName = "Frank".toLowerCase();
//printing human age and dog age 
console.log(`My name is ${myName}. I am ${myAge} years old in human years which is ${myAgeInDogYears} years old in dog years.`)
