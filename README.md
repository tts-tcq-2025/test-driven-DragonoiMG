# TDD Driven StringCalculator

Build a StringCalculator functionality that can take up to two numbers, separated by commas, and will return their sum. 
for example “” or “1” or “1,2” as inputs.

> DO NOT jump into implementation! Read the example and the starting task below.

- For an empty string it will return 0
- Allow the Add method to handle an unknown amount of numbers
- Allow the Add method to handle new lines between numbers (instead of commas).
  - the following input is ok: “1\n2,3” (will equal 6)
  - the following input is NOT ok: “1,\n” (not need to prove it - just clarifying)
- Support different delimiters : to change a delimiter, the beginning of the string will contain a separate line that looks like this: “//[delimiter]\n[numbers…]” for example “//;\n1;2” should return three where the default delimiter is ‘;’ .
the first line is optional. all existing scenarios should still be supported
- Calling Method with a negative number will throw an exception “negatives not allowed” - and the negative that was passed. if there are multiple negatives, show all of them in the exception message.
- Numbers bigger than 1000 should be ignored, so adding 2 + 1001 = 2
- Delimiters can be of any length with the following format: “//[delimiter]\n” for example: “//[***]\n1***2***3” should return 6

## Tasks



Establish quality parameters:

- Ensure  maximum complexity (CCN) per function == 3

- Ensure 100% line and branch coverage at every step

  

Start Test-driven approach

1. Write the smallest possible failing test: give input `"" assert output to be 0 ` .
2. Write the minimum amount of code that'll make it pass.
3. Refactor any assumptions, continue to pass this test. Do not add any code without a corresponding test.


### Test Specification

### Test Specification

**Test 1: Empty String**
- Input: `""`
- Expected Output: `0`
- Description: Empty string should return zero

**Test 2: Single Zero**
- Input: `"0"`
- Expected Output: `0`
- Description: String containing only zero should return zero

**Test 3: Single Number**
- Input: `"1"`
- Expected Output: `1`
- Description: String containing single number should return that number

**Test 4: Multiple Numbers with Comma**
- Input: `"0,1,2"`
- Expected Output: `3`
- Description: Comma-separated numbers should return their sum

**Test 5: Numbers with Mixed Delimiters (Newline and Comma)**
- Input: `"1\n2,3"`
- Expected Output: `6`
- Description: Numbers separated by newlines and commas should return their sum

**Test 6: Custom Delimiter**
- Input: `"//;\n1;2"`
- Expected Output: `3`
- Description: Custom delimiter specified in format "//[delimiter]\n[numbers...]" should work

**Test 7: Negative Numbers with Comma**
- Input: `"1,-2,3"`
- Expected Exception: `"negatives not allowed: -2"`
- Description: Should throw exception listing the negative number(s)

**Test 8: Negative Numbers with Mixed Delimiters**
- Input: `"1\n-2,3"`
- Expected Exception: `"negatives not allowed: -2"`
- Description: Should throw exception for negatives with newline/comma separators

**Test 9: Negative Numbers with Custom Delimiter**
- Input: `"//;\n1;-2;3"`
- Expected Exception: `"negatives not allowed: -2"`
- Description: Should throw exception for negatives with custom delimiter

**Test 10: Numbers Greater Than 1000**
- Input: `"2,1001,6"`
- Expected Output: `8`
- Description: Numbers > 1000 should be ignored in the sum

**Test 11: Multiple Negatives**
- Input: `"1,-2,-3,4"`
- Expected Exception: `"negatives not allowed: -2, -3"`
- Description: Should list all negative numbers in exception message

**Test 12: Multi-Character Custom Delimiter**
- Input: `"//[***]\n1***2***3"`
- Expected Output: `6`
- Description: Should support delimiters of any length using bracket notation