# Pseudocode for Number Operations 

1. Start
2. declare variables: num, choice, temp and Initialize variables digit = 0, rev = 0, count = 0, prod = 1, first = 0, last = 0, sum = 0, newNum = 0, frequency[10] = {0}, strong = 0, perfect = 0, isPalindrome = true
3. print
     >Enter a number
4. read num
5. Set temp = num
6. Output menu options:
   ```
   1. Reverse of the number
   2. Number of digits
   3. Product of even digits
   4. First and last digit
   5. Swap first and last digit
   6. Palindrome
   7. Frequency of first digit
   8. Strong number
   9. Perfect number
   10. Exit 

7. print 
      >Enter your choice
8. read choice

9. For each choice:
   - For choice 1:
     - Repeat until temp is 0:
        - Get the last digit from temp
        - Add the last digit to rev
        - Remove the last digit from temp
     - print reverses of the number

   - For choice 2:
     - Repeat until temp is 0:
        - Increase count by 1
        - Remove the last digit from temp
     - print count

   - For choice 3:
     - Repeat until temp is 0:
        - Get the last digit from temp
        - If the digit is even:
          - Multiply prod by the digit
        - Remove the last digit from temp
     - print the product of the number

   - For choice 4:
     - Repeat until temp is 0:
        - Get the last digit from temp
        - If first is 0:
          - Set first to the last digit
        - Set last to the last digit
        - Remove the last digit from temp
     - Calculate sum as last + first
     - print  first,last and their sum

   - For choice 5:
     - Repeat until temp is 0:
        - Get the last digit from temp
        - If the digit is first:
          - Change the digit to last
        - If the digit is last:
          - Change the digit to first
        - Add the digit to newNum
        - Remove the last digit from temp
     - print Number after swapping

   - For choice 6:
     - Set rev to num
     - Set temp to num
     - Repeat until temp is 0:
        - If the last digit of temp is not equal to the last digit of rev:
          - Set isPalindrome to false
          - Stop checking
        - Remove the last digit from temp
        - Remove the last digit from rev
     - If isPalindrome is true:
        - print
             >Palindrome: Yes
     - Else:
        - print 
            >Palindrome: No
   - For choice 7:
     - If num is negative:
        - Change num to positive
     - Repeat until num is 0:
        - Get the last digit from num
        - Increase frequency of that digit
        - Remove the last digit from num
     - print 
          >Digit Frequency
      - For each digit from 0 to 9:
        - Output digit and its frequency

   - For choice 8:
     - Set temp to num
     - Repeat until temp is 0:
        - Get the last digit from temp
        - Set fact to 1
        - For each number from 1 to the digit:
          - Multiply fact by that number
        - Add fact to strong
        - Remove the last digit from temp
     - If strong is equal to num:
        - print 
            >Strong number: Yes
    - Else:
        - print 
         >Strong number: No
   - For choice 9:
     - For each number from 1 to num:
        - If num is divisible by that number:
          - Add that number to perfect
     - If perfect is equal to num:
        - print
            > Perfect number: Yes
      - Else:
        - print 
            >Perfect number: No

  - For choice 10:
     - print 
        >Exiting...
11. End
