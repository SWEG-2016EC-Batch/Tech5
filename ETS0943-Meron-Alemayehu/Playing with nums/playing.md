Pseudocode for Number Operations Program

## Start

### Step 1: Initializing and declaring variables
- num: Store the input number.
- choice: Store the user's menu choice.
- temp: Temporary variable for processing the number.
- digit: To store each digit of the number.
- rev: To store the reversed number.
- isPalindrome: To check if the number is a palindrome.

### Step 2: Read the number
- Prompt the user: "Enter a number:"
- Read input into num.
- Store the original number in originalNum.

### Step 3: Display the menu options
- Print the following menu:
### Step 4: Read the choice
- Prompt the user: "Enter your choice:"
- Read the input into choice.

### Step 5: Process based on choice
- Case 1: Reverse of the number
- Set temp = num.
- Initialize rev = 0.
- While temp > 0:
  - Get the last digit of temp.
  - Append it to rev.
  - Remove the last digit from temp.
- Print the reversed number.

- Case 2: Number of digits
- Set temp = num.
- Initialize count = 0.
- While temp > 0:
  - Increment count.
  - Remove the last digit from temp.
- Print the number of digits.

- Case 3: Sum of digits
- Set temp = num.
- Initialize sum = 0.
- While temp > 0:
  - Add the last digit of temp to sum.
  - Remove the last digit from temp.
- Print the sum of digits.

- Case 4: Product of even digits
- Set temp = num.
- Initialize prod = 1.
- Flag foundEven = false.
- While temp > 0:
  - If the digit is even:
    - Multiply it to prod.
    - Set foundEven = true.
  - Remove the last digit from temp.
- If foundEven is true, print the product of even digits.
- Otherwise, print "No even digits found."

- Case 5: First and last digit
- Set temp = num.
- Initialize first = 0 and last = 0.
- While temp > 0:
  - Set first to the first digit.
  - Set last to the last digit.
  - Remove the last digit from temp.
- Print the first and last digit.

- Case 6: Swap first and last digit
- Set temp = num.
- Calculate the first and last digits.
- Swap the first and last digits in the number.
- Print the new number after swapping.

- Case 7: Palindrome check
- Set temp = num.
- Initialize revTemp = 0.
- While temp > 0:
  - Reverse the digits of the number into revTemp.
- Compare revTemp with the original number (num).
- If they are equal, print "Palindrome: Yes", otherwise print "Palindrome: No".

- Case 8: Frequency of first digit
- Set temp = num.
- Extract the first digit of num.
- Count how many times the first digit appears in the number.
- Print the frequency of the first digit.

- Case 9: Armstrong number check
- Set temp = num.
- Calculate the number of digits in num.
- Initialize armstrong = 0.
- While temp > 0:
  - Add the power of each digit to armstrong.
- If armstrong equals num, print "Armstrong number: Yes", otherwise print "Armstrong number: No".

- Case 10: Strong number check
- Set temp = num.
- Initialize strong = 0.
- While temp > 0:
  - Get the factorial of each digit and add it to strong.
- If strong equals num, print "Strong number: Yes", otherwise print "Strong number: No".

- Case 11: Perfect number check
- Initialize perfect = 0.
- For each number i from 1 to num-1:
  - If i divides num, add i to perfect.
- If perfect equals num, print "Perfect number: Yes", otherwise print "Perfect number: No".

- Case 12: Exit
- Print "Exiting..." and end the program.

### Step 6: End

## End
- 
- 
