# printing patterns - Input, Process, and Output

### Input
- The user is prompted to choose a pattern to print by entering an integer between 1 and 6:
    1. Print numbers in rows and columns
    2. Print alphabet in rows
    3. Print decreasing numbers with row adjustments
    4. Print inverted numbers with spaces
    5. Print increasing alphabets row-wise
    6. Print lowercase alphabets in rows
- For each choice, the user is asked to input:
    - The number of rows
    - The number of columns
- After printing the pattern, the user is asked if they want to continue. If they press `1`, the program repeats; otherwise, it exits.

### Process
1. **Choice Handling**:
    - Based on the user's choice, the program will execute the corresponding pattern-generating block using loops.
    - For patterns involving numbers or alphabets:
        - Nested loops are used to print rows and columns, adjusting the content of each row or column based on the selected pattern.
2. **Pattern Logic**:
    - If the choice is for a number or alphabet pattern, the program prints characters in a specific order (increasing, decreasing, or with spaces).
    - For complex patterns like pyramids or inverted structures, additional logic is applied to manage spaces and alignment.

3. **Repeat or Exit**:
    - After completing the pattern, the program prompts the user to either continue or exit based on their input.

### Output
- The program will print the selected pattern based on the user's input.
  - For example:
    - **Choice 1**: A rectangle of numbers or stars printed in rows and columns.
    - **Choice 2**: The alphabet printed in rows.
    - **Choice 3**: Decreasing numbers printed with row adjustments.
    - **Choice 4**: An inverted number pattern with spaces.
    - **Choice 5**: Increasing alphabets printed row-wise.
    - **Choice 6**: Lowercase alphabets printed in rows.
- If the user chooses to continue, the program will repeat, otherwise, it will terminate after printing the pattern.

# Pseudocode 

**Start**

1. Display menu to the user with options:
    - 1. Print numbers in rows and columns
    - 2. Print alphabet in rows
    - 3. Print decreasing numbers with row adjustments
    - 4. Print inverted numbers with spaces
    - 5. Print increasing alphabets row-wise
    - 6. Print lowercase alphabets in rows
2. Accept user's choice

**If choice is 1 then**
1. Accept number of rows and columns from the user
2. For each column:
    1. For each row:
        1. Print the row number
3. Display the result

**Else if choice is 2 then**
1. For each row (up to 24):
    1. Print the alphabet starting from 'A'
    2. Move to the next line every 6 characters
2. Display the result

**Else if choice is 3 then**
1. Accept number of rows and columns from the user
2. For each column:
    1. Adjust the number of rows for each column
    2. For each row, print the row number (decreasing as per the column number)
3. Display the result

**Else if choice is 4 then**
1. Accept number of rows and columns from the user
2. For each column:
    1. Print spaces for the inverted pyramid effect
    2. Print numbers in decreasing order for each row
3. Display the result

**Else if choice is 5 then**
1. Accept number of rows and columns from the user
2. For each column:
    1. Print increasing alphabets for each row
    2. Reset the alphabet after each row
3. Display the result

**Else if choice is 6 then**
1. Accept number of rows and columns from the user
2. For each column:
    1. Print lowercase alphabets for each row
    2. Reset the alphabet after each row
3. Display the result

**Else**
1. Display "Invalid choice. Please run the program again."

**Prompt user to continue**
1. If the user chooses to continue, repeat the process (goto step 1)
2. Else, exit the program

**End**
