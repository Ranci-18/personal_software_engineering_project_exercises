function sumTwoSmallestNumbers(numbers) {  
  const positiveNumbers = numbers.filter(number => number > 0);
  positiveNumbers.sort((a, b) => a - b);
  return positiveNumbers[0] + positiveNumbers[1];
}
