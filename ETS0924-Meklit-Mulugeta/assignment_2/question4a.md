# Pseudocode for patterns

1. Start
2. declare variable: choice
3. print 
      >Choose a program to run:
4. Output options:
5. 
  ```
    1. Print numbers in rows and columns
    2. Print alphabet in rows
    3. Print decreasing numbers with row adjustments
    4. Print inverted numbers with spaces
    5. Print increasing alphabets row-wise
    6. Print lowercase alphabets in rows
```
6. print  
      >Enter your choice (1-6)
7. read choice

8. If choice is 1:
   - declare variables: row, colnums
   - print 
       >Enter the number of rows
   - read row
   - print 
       >Enter the number of columns
   - read colnums
   - For j from 1 to colnums:
     - For i from 1 to row:
       - Output i
     - Output a new line

9. Else if choice is 2:
   - Initialize variable: chart = 'A'
   - For i from 1 to 24:
     - Output chart
     - Increment chart by 1
     - If i is divisible by 6:
       - Output a new line

10. Else if choice is 3:
   - declare variables: row, colnums
   - print 
       >Enter the number of rows
   - read row
   - print
       >Enter the number of columns
   - read colnums
   - For j from 1 to colnums:
     - Update row as row - (row - j)
     - For i from 1 to row:
       - Output i
     - Output a new line

11. Else if choice is 4:
    - declare variables: row, colnums
    - print 
        >Enter the number of rows
    - read row
    - print 
        >Enter the number of columns
    - read colnums
    - For j from 1 to colnums:
      - Set z = 5 - j
      - Update row as row - (row - j)
      - For k from 1 to z:
        - Output a space
      - For i from row down to 1:
        - Output i
      - Output a new line

12. Else if choice is 5:
    - declare variables: row, colnums
    - print 
         >Enter the number of rows
    - read row
    - print
         > Enter the number of columns
    - read colnums
    - Initialize variable: ch = 'A'
    - For j from 1 to colnums:
      - For i from 1 to j:
        - Output ch and a space
        - Increment ch by 1
      - Output a new line
      - Reset ch to 'A'

13. Else if choice is 6:
    - declare variables: row, colnums
    - print 
        >Enter the number of rows
    - read row
    - print 
         >Enter the number of columns
    - read colnums
    - Initialize variable: ch = 'a'
    - For j from 1 to colnums:
      - For i from 1 to row:
        - Output ch
        - Increment ch by 1
      - Output a new line
      - Reset ch to 'a'

14. Else:
    - print 
        >Invalid choice. Please run the program again.
15. End
