# Pseudocode for Grade Calculation Program

1. Start
2. Initialize Variables:
   - test, quiz, project, assignment, finalExam, total_mark: Double
   - letter_grade: Char

3. Input Test Marks:
   - Prompt the user to enter the mark for the test.
   - If input is invalid (e.g., not a number), display "invalid input" and exit.

4. Input Quiz Marks:
   - Prompt the user to enter the mark for the quiz.
   - If input is invalid, display "invalid input" and exit.

5. Input Project Marks:
   - Prompt the user to enter the mark for the project.
   - If input is invalid, display "invalid input" and exit.

6. Input Assignment Marks:
   - Prompt the user to enter the mark for the assignment.
   - If input is invalid, display "invalid input" and exit.

7. Input Final Exam Marks:
   - Prompt the user to enter the mark for the final exam.
   - If input is invalid, display "invalid input" and exit.

8. Check if the Sum of Marks Equals 100:
   - If the sum of test + quiz + assignment + project + finalExam is not equal to 100:
     - Display "The sum of all marks should be 100" and exit.

9. Calculate Total Mark:
   - total_mark = test * 0.15 + quiz * 0.05 + assignment * 0.1 + project * 0.2 + finalExam * 0.5

10. Determine Letter Grade:
    - If total_mark >= 90, set letter_grade = 'A+'.
    - Else if total_mark >= 80, set letter_grade = 'A'.
    - Else if total_mark >= 75, set letter_grade = 'B+'.
    - Else if total_mark >= 60, set letter_grade = 'B'.
    - Else if total_mark >= 55, set letter_grade = 'C+'.
    - Else if total_mark >= 45, set letter_grade = 'C'.
    - Else if total_mark >= 30, set letter_grade = 'D'.
    - Else if total_mark < 30, set letter_grade = 'F'.

11. Output the Result:
    - Display "The total mark is: total_mark".
    - Display "The grade letter is: letter_grade".

12. End
