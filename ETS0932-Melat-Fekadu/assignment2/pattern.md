
## Input
Number of rows (rows)

Number of columns (columns)

Choice of pattern (choice)

## Output
Different patterns based on the user’s choice:

Rectangle of stars

Square of stars

Half pyramid of stars

Half pyramid of numbers

Inverted half pyramid of stars

Half pyramid of alphabets

Inverted half pyramid of alphabets

Full pyramid of stars

Inverted full pyramid of stars

Hollow full pyramid of stars

Inverted hollow full pyramid of stars

## Process

Prompt the user to enter their choice of pattern.

Based on the user’s choice, generate and display the corresponding pattern.

# pseudocode for pattern generation

## start
## Step 1: Declare Variables


## Step 2: Prompt and Input Rows
- PRINT "Enter the number of rows: "
- INPUT rows

## Step 3: Prompt and Input Columns
- PRINT "Enter the number of columns: "
- INPUT columns

## Step 4: Prompt and Input Choice of Pattern
- PRINT "Enter the choice of pattern: "
- INPUT choice

## Step 5: Generate and Display Pattern Based on Choice
- SWITCH (choice)
    - CASE 1: Rectangle of stars
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO columns - 1
                - PRINT "* "
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 2: Square of stars
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO columns - 1
                - PRINT "* "
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 3: Half pyramid of stars
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO i
                - PRINT "* "
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 4: Half pyramid of numbers
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO i
                - PRINT count
                - count = count + 1
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 5: Inverted half pyramid of stars
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO rows - i
                - PRINT "* "
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 6: Half pyramid of alphabets
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO i
                - PRINT ch
                - ch = NEXT ALPHABET
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 7: Inverted half pyramid of alphabets
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO rows - i
                - PRINT ch
                - ch = NEXT ALPHABET
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 8: Full pyramid of stars
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO rows - i
                - PRINT SPACE
            - END FOR
            - FOR j FROM 0 TO i
                - PRINT "* "
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 9: Inverted full pyramid of stars
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO i
                - PRINT SPACE
            - END FOR
            - FOR j FROM 0 TO rows - i
                - PRINT "* "
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 10: Hollow full pyramid of stars
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO rows - i
                - PRINT SPACE
            - END FOR
            - FOR j FROM 0 TO i
                - IF (i == 0 OR i == rows - 1 OR j == 0 OR j == i) THEN
                    - PRINT "* "
                - ELSE
                    - PRINT SPACE
                - END IF
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - CASE 11: Inverted hollow full pyramid of stars
        - FOR i FROM 0 TO rows - 1
            - FOR j FROM 0 TO i
                - PRINT SPACE
            - END FOR
            - FOR j FROM 0 TO rows - i
                - IF (i == 0 OR i == rows - 1 OR j == 0 OR j == rows - i - 1) THEN
                    - PRINT "* "
                - ELSE
                    - PRINT SPACE
                - END IF
            - END FOR
            - PRINT NEWLINE
        - END FOR
    - DEFAULT:
        - PRINT "Invalid choice"
- END SWITCH

## Step 6: End Program





