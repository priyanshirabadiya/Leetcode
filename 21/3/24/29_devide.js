/*
29. Divide Two Integers

Example 1:

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.
Example 2:

Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = -2.33333.. which is truncated to -2. */
var divide = function(dividend, divisor) {
  let x = dividend / divisor; 
  if(x > 0){ 
    return Math.floor(x);
  }
  else{
    return Math.ceil(x);
  }
};

console.log(divide(7, -3))
