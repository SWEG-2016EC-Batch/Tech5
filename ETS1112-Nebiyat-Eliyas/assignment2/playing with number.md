# playing with number - Input, Process, and Output

### Input
- A number is entered by the user.
- The user selects a specific option from the menu to perform the corresponding operation.

### Process

1. **Reverse of the number**:
   - Initialize a variable `reversed` to `0`.
   - While the number is greater than `0`, do the following:
     - Multiply `reversed` by `10` to shift its digits.
     - Add the last digit of the number (`number % 10`) to `reversed`.
     - Update `number` by removing the last digit (`number /= 10`).

2. **Count the number of digits**:
   - Initialize a counter variable `count` to `0`.
   - While the number is greater than `0`, do the following:
     - Increment `count`.
     - Update `number` by removing the last digit (`number /= 10`).
   - Return `count`.

3. **Product of even digits**:
   - Initialize `product` to `1`.
   - Extract each digit from the number.
   - If the digit is even (i.e., `digit % 2 == 0`), multiply it into the `product`.
   - After processing all digits, return the `product`.

4. **The First and last digit and their sum**:
   - Extract the last digit using `last_digit = number % 10`.
   - To get the first digit, repeatedly divide the number by `10` until it is a single digit (`first_digit = number`).
   - Add the first and last digits together and return the sum.

5. **Swap the first and last digit**:
   - Extract the first and last digits.
   - Remove the first and last digits from the number.
   - Reconstruct the number by placing the last digit at the first position and the first digit at the last position.

6. **Check for palindrome**:
   - Reverse the number using the steps in the "Reverse of the number" section.
   - Compare the reversed number with the original number.
   - If they are equal, it's a palindrome. Otherwise, it's not.

7. **Frequency of each digit**:
   - Initialize an array `frequency[10]` to store the count of each digit from `0` to `9`.
   - For each digit in the number, increment the corresponding `frequency[digit]`.
   - Print the frequency of each digit.

8. **Check if the digit is Strong number**:
   - For each digit in the number, calculate its factorial and sum the results.
   - If the sum of the factorials of the digits equals the original number, it's a Strong number.

9. **Check if the digit is Perfect number**:
   - Find all divisors of the number (except the number itself).
   - Sum the divisors.
   - If the sum of the divisors equals the original number, it's a Perfect number.
 ### Output
- Reverse of the number.
- Count of digits in the number.
- Product of even digits.
- First and last digit, and their sum.
- Swapped first and last digits.
- Check if the number is a palindrome.
- Frequency of each digit in the number.
- Check if the number is a Strong number.
- Check if the number is a Perfect number.

# Pseudocode 

* **Start**
  * Accept number from user
  * Display menu with options:
    * a. Reverse of the number
    * b. Count the number of digits
    * c. Product of even digits
    * d. First and last digit and their sum
    * e. Swap the first and last digit
    * f. Check for palindrome
    * g. Frequency of each digit
    * h. Check if the number is Strong number
    * i. Check if the number is Perfect number
  * Read user's choice

* **If choice is 'a' then**
  * Initialize `reversed = 0`
  * While `number > 0` do:
    * Get `last_digit = number % 10`
    * `reversed = reversed * 10 + last_digit`
    * `number = number / 10`
  * Output `reversed`
  
* **Else If choice is 'b' then**
  * Initialize `count = 0`
  * While `number > 0` do:
    * Increment `count`
    * `number = number / 10`
  * Output `count`
  
* **Else If choice is 'c' then**
  * Initialize `product = 1`
  * While `number > 0` do:
    * Get `digit = number % 10`
    * If `digit % 2 == 0` then
      * `product = product * digit`
    * `number = number / 10`
  * Output `product`
  
* **Else If choice is 'd' then**
  * Get `last_digit = number % 10`
  * While `number >= 10` do:
    * `number = number / 10`
  * Get `first_digit = number`
  * `sum = first_digit + last_digit`
  * Output `first_digit`, `last_digit`, and `sum`
  
* **Else If choice is 'e' then**
  * Get `last_digit = number % 10`
  * While `number >= 10` do:
    * `number = number / 10`
  * Get `first_digit = number`
  * Remove first and last digits from the number
  * Reconstruct `number = last_digit * (10 ^ (number of digits - 1)) + middle_digits + first_digit`
  * Output `swapped number`
  
* **Else If choice is 'f' then**
  * Reverse the number (use steps from "Reverse of the number")
  * If `reversed == original number` then
    * Output "Palindrome"
  * Else
    * Output "Not a palindrome"
  
* **Else If choice is 'g' then**
  * Initialize `frequency[10] = {0}`
  * While `number > 0` do:
    * Get `digit = number % 10`
    * Increment `frequency[digit]`
    * `number = number / 10`
  * For `i = 0 to 9` do:
    * Output `frequency[i]`
  
* **Else If choice is 'h' then**
  * Initialize `sum_of_factorials = 0`
  * While `number > 0` do:
    * Get `digit = number % 10`
    * `sum_of_factorials = sum_of_factorials + factorial(digit)`
    * `number = number / 10`
  * If `sum_of_factorials == original number` then
    * Output "Strong number"
  * Else
    * Output "Not a Strong number"
  
* **Else If choice is 'i' then**
  * Initialize `sum_of_divisors = 0`
  * For `i = 1 to (number / 2)` do:
    * If `number % i == 0` then
      * `sum_of_divisors = sum_of_divisors + i`
  * If `sum_of_divisors == original number` then
    * Output "Perfect number"
  * Else
    * Output "Not a Perfect number"

* **End**
     
