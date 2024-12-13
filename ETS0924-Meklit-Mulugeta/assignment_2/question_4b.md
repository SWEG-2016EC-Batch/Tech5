# Pseudocode for Pattern Selection Program

1. Start
2. declare variables: row, column, choice, cont
3. Repeat the following steps:
   - print 
       >Enter number of rows
   - read row
   - print
       >Enter number of columns
   - read column
   - Output pattern options:
    ```
     1: rectangle of numbers
     2: Rectangle of uppercase Alphabets
     3: Incremental number pyramid
     4: Reversed incremental number pyramid
     5: Alphabetic half pyramid
     6: Rectangle of lowercase Alphabets
     7: Hollow star rectangle
     8: Inverted star half pyramid
     9: Hollow inverted star pyramid
     10: Star pyramid
     11: Inverted star pyramid
     12: Hollow star pyramid
    ```
   - print 
        >Enter the choice of pattern
   - read choice

4. Based on choice:
   - For choice 1:
     - For i from 1 to row:
       - For j from 1 to column:
         - Output j
       - Output a new line

   - For choice 2:
     - Initialize variable: letter = 'A'
     - For i from 1 to row:
       - For j from 1 to column:
         - Output letter
         - If letter is 'Z':
           - Break
         - Increment letter by 1
       - Output a new line

   - For choice 3:
     - For i from 1 to row:
       - For j from 1 to i:
         - Output j
       - Output a new line

   - For choice 4:
     - For i from 1 to row:
       - For k from row - i down to 1:
         - Output two spaces
       - For j from i down to 1:
         - Output j
       - Output a new line

   - For choice 5:
     - For i from 1 to row:
       - Initialize variable: letter = 'A'
       - For j from 1 to i:
         - Output letter
         - Increment letter by 1
       - Output a new line

   - For choice 6:
     - For i from 1 to row:
       - Initialize variable: letter = 'a'
       - For j from 1 to column:
         - Output letter
         - Increment letter by 1
       - Output a new line

   - For choice 7:
     - For i from 1 to row:
       - For j from 1 to column:
         - If i is 1 or i is row or j is 1 or j is column:
           - Output "*"
         - Else:
           - Output two spaces
       - Output a new line

   - For choice 8:
     - For i from 1 to row:
       - For j from row down to i:
         - Output "*"
       - Output a new line

   - For choice 9:
     - For i from 1 to row:
       - For j from row down to i:
         - If i is 1 or j is row or i is j:
           - Output "*"
         - Else:
           - Output two spaces
       - Output a new line

   - For choice 10:
     - For i from 1 to row:
       - For k from row - i down to 1:
         - Output a space
       - For j from 1 to i:
         - Output "*"
       - Output a new line

   - For choice 11:
     - For i from 1 to row:
       - For k from 1 to i:
         - Output a space
       - For j from row down to i:
         - Output "*"
       - Output a new line

   - For choice 12:
     - For i from 1 to row:
       - For k from row - i down to 1:
         - Output a space
       - For j from 1 to i:
         - If i is 1 or j is 1 or j is i or i is row:
           - Output "*"
         - Else:
           - Output two spaces
       - Output a new line

   - If choice is invalid:
     - print 
         >Invalid choice
5. print 
      >Press 1 to continue, 0 to exit
6.  read cont
7. End loop if cont is not 1
8. print 
    >Thank you !!!
9. End
