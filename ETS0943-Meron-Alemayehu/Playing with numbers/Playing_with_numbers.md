### Pseudocode for the Number Operations Program

1. Start
2. Initialize variables:
   - choice for menu selection.
   - number, temp, digit, rev, tr for calculations.
3. Do While Loop:
   - Display menu with the following options:
     1. Reverse of the number.
     2. Number of digits.
     3. Product of even digits.
     4. Sum of first and last digit.
     5. Swap first and last digit.
     6. Check if it is a palindrome.
     7. Frequency of first digit.
     8. Check if it is a strong number.
     9. Check if it is a perfect number.
   - Input choice from the user.
   - Input number from the user.
4. Switch Case based on choice:

   - Case 1: Reverse the number.
     1. Set rev = 0.
     2. While number > 0:
        - Extract the last digit: digit = number % 10.
        - Add digit to reverse: rev = rev * 10 + digit.
        - Remove last digit: number = number / 10.
     3. Output rev as the reversed number.
   - Case 2: Count number of digits.
     1. Set count = 0.
     2. While number > 0:
        - Increment counter: count++.
        - Remove last digit: number = number / 10.
     3. Output count as the number of digits.

     - Case 3: Product of even digits.
     1. Set pro = 1.
     2. While number > 0:
        - Extract the last digit: digit = number % 10.
        - If digit is even:
          - Multiply to pro.
        - Remove last digit: number = number / 10.
     3. Output pro as the product of even digits.

    - Case 4: Sum of first and last digits.
     1. Extract the last digit: last = number % 10.
     2. Extract the first digit:
        - While first >= 10: Divide by 10.
     3. Compute sum: sum = last + first.
        4. Output the sum of the first and last digit.

   - Case 5: Swap first and last digits.
     1. Extract the last digit: last = number % 10.
     2. Extract the first digit:
        - While first >= 10: Divide by 10.
     3. Swap first and last.
     4. Output the swapped digits.

   - Case 6: Check if palindrome.
     1. Set rev = 0, temp = number.
     2. While number > 0:
        - Extract and reverse digits.
     3. Compare rev with temp.
        - If equal, output "Palindrome".
        - Else, output "Not a Palindrome".

   - Case 7: Frequency of the first digit.
     1. Extract the first digit:
        - While first >= 10: Divide by 10.
     2. Count occurrences of first:
        - While temp > 0:
          - If temp % 10 == first: Increment counter.
     3. Output the frequency of the first digit.

   - Case 8: Check if strong number.
     1. Initialize strongfac = 0, temp = number.
     2. For each digit:
        - Compute factorial of digit.
        - Add factorial to strongfac.
          3. Compare strongfac with temp.
        - If equal, output "Strong number".
        - Else, output "Not a strong number".

   - Case 9: Check if perfect number.
     1. Initialize sumDivisors = 0.
     2. For all divisors i of number:
        - Add i to sumDivisors.
     3. Compare sumDivisors with number.
        - If equal, output "Perfect number".
        - Else, output "Not a perfect number".

5. Prompt the user: "Enter 1 to continue and 0 to terminate."
6. If tr == 1, repeat the loop.
7. Output "Thank you for using our program!"
8. End
