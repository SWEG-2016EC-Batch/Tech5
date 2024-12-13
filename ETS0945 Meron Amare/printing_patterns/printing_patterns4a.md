# Pseudocode for Pattern Printing Program

## Start

1. Initialize a variable choice to store user's selection of pattern.
2. Initialize a variable contin to store user's decision to continue or exit.

## Loop: Do while loop

- Display menu of pattern options (1 to 12) to the user.

    - 1: rectangle of numbers
    - 2: Rectangle of uppercase Alphabets
    - 3: Incremental number pyramid
    - 4: Reversed incremental number pyramid
    - 5: Alphabetic half pyramid
    - 6: Rectangle of lowercase Alphabets
    - 7: Hollow star rectangle
    - 8: Inverted star half pyramid
    - 9: Hollow inverted star pyramid
    - 10: Star pyramid
    - 11: Inverted star pyramid
    - 12: Hollow star pyramid

3. Ask the user to enter the choice of pattern (1-12).
4. Store the entered value in choice.

## Switch-case: Depending on the choice value, execute corresponding case.

### Case 1: Rectangle of numbers
- Loop through rows (1 to 5).
- Loop through columns (1 to 5) and print numbers from 1 to 5.

### Case 2: Rectangle of uppercase Alphabets
- Initialize letter = 'A'.
- Loop through rows (1 to 5).
- Loop through columns (1 to 5) and print alphabets from 'A' to 'Z' in a rectangular pattern.

### Case 3: Incremental number pyramid
- Loop through rows (1 to 5).
- Loop through columns and print incremental numbers in each row, increasing the number of columns in each row.

### Case 4: Reversed incremental number pyramid
- Loop through rows (1 to 5).
- Loop for spaces (decreasing in each row).
- Loop for numbers (print from row number down to 1).

### Case 5: Alphabetic half pyramid
- Loop through rows (1 to 5).
- Initialize letter = 'A'.
- Loop through columns and print incremental alphabets, increasing the number of letters in each row.

### Case 6: Rectangle of lowercase Alphabets
- Initialize letter = 'a'.
- Loop through rows (1 to 5).
- Loop through columns (1 to 5) and print lowercase alphabets from 'a' to 'z' in a rectangular pattern.

### Case 7: Hollow star rectangle
- Loop through rows (1 to 5).
- Loop through columns (1 to 5).
    - If it's on the boundary (first/last row or first/last column), print "*".
    - Otherwise, print spaces.

### Case 8: Inverted star half pyramid
- Loop through rows (1 to 5).
- Loop through columns and print stars in each row, decreasing the number of stars in each subsequent row.

### Case 9: Hollow inverted star pyramid
- Loop through rows (1 to 5).
- Loop through columns and print stars on the boundaries or the diagonal, otherwise print spaces.

### Case 10: Star pyramid
- Loop through rows (1 to 5).
- Loop for spaces (decreasing in each row).
- Loop for stars (increasing the number of stars in each row).

### Case 11: Inverted star pyramid
- Loop through rows (1 to 5).
- Loop for spaces (increasing in each row).
- Loop for stars (decreasing the number of stars in each row).

### Case 12: Hollow star pyramid
- Loop through rows (1 to 5).
- Loop for spaces (decreasing in each row).
- Loop for stars, printing stars on the boundary or diagonal, otherwise print spaces.

### Default:
- If the entered choice is invalid, display "Invalid choice".

5. Ask the user if they want to continue:
    - If contin == 1, the loop will repeat, otherwise the program will exit.

## End
