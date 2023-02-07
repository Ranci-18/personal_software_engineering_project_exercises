//constant variable of degrees in kelvin
const kelvin = 0;
//converting kelvin to celcius
let celsius = kelvin - 273;
//converting celsius to fahrenheit
let fahrenheit = celsius * (9/5) + 32;
//rounding down the value of fahrenheit
fahrenheit = Math.floor(fahrenheit);
//
console.log(`The temperature is ${fahrenheit} degrees Fahrenheit.`)
