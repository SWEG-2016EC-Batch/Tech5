## Input
Test result out of 15

Quiz result out of 5

Assignment result out of 10

Project result out of 20

Final exam result out of 50

## Process

Calculate the total mark as the sum of the test, quiz, assignment, project, and final exam results.

Check if the input values are valid (not failed and within the valid range).

Determine the grade based on the total mark:

A+ for marks 90 and above

A for marks 80 to 89

B+ for marks 75 to 79

B for marks 60 to 74

C+ for marks 55 to 59

C for marks 45 to 54

D for marks 30 to 44

F for marks below 30

## Output
Total mark

Grade
# pseudocode 

## start

## Step 1: Declare Variables


## Step 2: Prompt and Input Test Result

## Step 3: Prompt and Input Quiz Result

## Step 4: Prompt and Input Assignment Result

## Step 5: Prompt and Input Project Result


## Step 6: Prompt and Input Final Exam Result


## Step 7: Calculate Total Mark
- mark = test + quiz + assignment + project + finalExam

## Step 8: Validate Input
- IF (cin.fail() OR mark < 0 OR mark > 100) THEN
    - PRINT "Invalid Input"
- ELSE

## Step 9: Determine Grade
    - IF mark >= 90 THEN
        - grade = 'A+'
    - ELSE IF mark >= 80 THEN
        - grade = 'A'
    - ELSE IF mark >= 75 THEN
        - grade = 'B+'
    - ELSE IF mark >= 60 THEN
        - grade = 'B'
    - ELSE IF mark >= 55 THEN
        - grade = 'C+'
    - ELSE IF mark >= 45 THEN
        - grade = 'C'
    - ELSE IF mark >= 30 THEN
        - grade = 'D'
    - ELSE
        - grade = 'F'
    - PRINT "Your grade is ", grade
- END IF

## Step 10: End Program
