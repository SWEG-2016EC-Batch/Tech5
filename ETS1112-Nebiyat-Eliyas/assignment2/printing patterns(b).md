# printing pattern(b) - Input, Processing, and Output
### Input
- The user is prompted to input the following:
  - **Number of rows**: The number of rows for the pattern.
  - **Number of columns**: The number of columns for the pattern.
  - **Choice of pattern**: The user selects one of the following options:
    1. Rectangle of numbers
    2. Rectangle of uppercase alphabets
    3. Incremental number pyramid
    4. Reversed incremental number pyramid
    5. Alphabetic half pyramid
    6. Rectangle of lowercase alphabets
    7. Hollow star rectangle
    8. Inverted star half pyramid
    9. Hollow inverted star pyramid
    10. Star pyramid
    11. Inverted star pyramid
    12. Hollow star pyramid

- After displaying the pattern, the user is prompted to continue or exit:
  - **Continue**: If the user presses `1`, the program will repeat.
  - **Exit**: If the user presses `0`, the program will end.

### Process
- Based on the user’s input for the choice of pattern:
  - For **Choice 1**: A rectangle of numbers is printed for the given number of rows and columns.
  - For **Choice 2**: A rectangle of uppercase alphabets is printed, starting from 'A' to 'Z'.
  - For **Choice 3**: An incremental number pyramid is printed where the numbers in each row increment up to the row number.
  - For **Choice 4**: A reversed incremental number pyramid is printed with decreasing numbers in each row.
  - For **Choice 5**: An alphabetic half pyramid is printed with alphabets incrementing in each row.
  - For **Choice 6**: A rectangle of lowercase alphabets is printed, starting from 'a' to 'z'.
  - For **Choice 7**: A hollow star rectangle is printed with stars on the border and spaces inside.
  - For **Choice 8**: An inverted star half pyramid is printed with stars decreasing in each row.
  - For **Choice 9**: A hollow inverted star pyramid is printed with stars on the edges and spaces inside.
  - For **Choice 10**: A star pyramid is printed with stars increasing in each row, and spaces before them for alignment.
  - For **Choice 11**: An inverted star pyramid is printed with stars decreasing in each row.
  - For **Choice 12**: A hollow star pyramid is printed with stars on the edges and spaces inside.

- After displaying the pattern, the user is asked whether they want to continue or exit the program.

### Output
- The output is the pattern corresponding to the user’s choice, printed in the console:
  - **Rectangle of numbers**: Prints numbers in rows and columns.
  - **Rectangle of uppercase alphabets**: Prints uppercase letters in rows and columns.
  - **Incremental number pyramid**: Prints numbers incrementing in each row.
  - **Reversed incremental number pyramid**: Prints numbers in decreasing order in each row.
  - **Alphabetic half pyramid**: Prints a half pyramid of alphabets.
  - **Rectangle of lowercase alphabets**: Prints lowercase letters in rows and columns.
  - **Hollow star rectangle**: Prints a rectangle of stars with a hollow center.
  - **Inverted star half pyramid**: Prints an inverted pyramid of stars.
  - **Hollow inverted star pyramid**: Prints an inverted star pyramid with hollow spaces inside.
  - **Star pyramid**: Prints a star pyramid with increasing stars in each row.
  - **Inverted star pyramid**: Prints an inverted pyramid of stars.
  - **Hollow star pyramid**: Prints a hollow star pyramid with stars on the edges and spaces inside.

- **Repeat or Exit**: After the pattern is printed, the program asks the user if they want to continue or exit:
  - If the user presses `1`, the program repeats and asks for new input.
  - If the user presses `0`, the program ends with a "Thank you !!!" message.

# Pseudocode 

**Start**

1. Display a menu with the following choices:
    1. Print a rectangle of numbers
    2. Print a rectangle of uppercase alphabets
    3. Print an incremental number pyramid
    4. Print a reversed incremental number pyramid
    5. Print an alphabetic half pyramid
    6. Print a rectangle of lowercase alphabets
    7. Print a hollow star rectangle
    8. Print an inverted star half pyramid
    9. Print a hollow inverted star pyramid
    10. Print a star pyramid
    11. Print an inverted star pyramid
    12. Print a hollow star pyramid
2. Accept the user's choice of pattern.

**Process based on choice:**

- **If choice is 1 (rectangle of numbers):**
    1. For each row, print numbers from 1 to column count.
    
- **If choice is 2 (rectangle of uppercase alphabets):**
    1. For each row, print uppercase alphabets starting from 'A' until column count.
    
- **If choice is 3 (incremental number pyramid):**
    1. For each row, print numbers from 1 to the row number.
    
- **If choice is 4 (reversed incremental number pyramid):**
    1. For each row, print spaces, then print numbers in reverse order starting from the row number.
    
- **If choice is 5 (alphabetic half pyramid):**
    1. For each row, print alphabet starting from 'A' and incrementing with each letter.
    
- **If choice is 6 (rectangle of lowercase alphabets):**
    1. For each row, print lowercase alphabets starting from 'a' until column count.
    
- **If choice is 7 (hollow star rectangle):**
    1. For each row and column, print stars for the border; inside the border, print spaces.
    
- **If choice is 8 (inverted star half pyramid):**
    1. For each row, print stars in decreasing order from row count to 1.
    
- **If choice is 9 (hollow inverted star pyramid):**
    1. For each row, print stars at the beginning and end of each row, and spaces inside.
    
- **If choice is 10 (star pyramid):**
    1. For each row, print spaces followed by stars in increasing order.
    
- **If choice is 11 (inverted star pyramid):**
    1. For each row, print spaces followed by stars in decreasing order.
    
- **If choice is 12 (hollow star pyramid):**
    1. For each row, print spaces, then print stars at the beginning and end of the row, and spaces inside.

3. Ask the user if they want to continue:
    - If the user presses `1`, repeat the process from the menu.
    - If the user presses `0`, exit the program.
4. Display "Thank you!!!" when the program ends.

**End**
