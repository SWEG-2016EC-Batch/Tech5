# Grade Calculation Program: Input, Processing, and Output

## Input
The program takes the following inputs:
- `testRes` (out of 100)
- `quizRes` (out of 100)
- `projectRes` (out of 100)
- `assignmentRes` (out of 100)
- `finalExamRes` (out of 100)

## Processing
The program calculates the total mark using the formula:
totalMark = (testRes * 0.15) + (quizRes 0.05) + (projectRes * 0.20) + (assignmentRes * 0.10) + (finalExamRes * 0.50)

It then determines the grade based on the `totalMark`:
- If `totalMark >= 90`, grade = "A+"
- Else if `totalMark >= 80`, grade = "A"
- Else if `totalMark >= 75`, grade = "B+"
- Else if `totalMark >= 60`, grade = "B"
- Else if `totalMark >= 55`, grade = "C+"
- Else if `totalMark >= 45`, grade = "C"
- Else if `totalMark >= 30`, grade = "D"
- Otherwise, grade = "F"

## Output
The program outputs:
- `totalMark`: The computed total mark.
- `grade`: The corresponding letter grade based on the total mark.


# Pseudocode

1. **Start**

2. **Declare Variables**:
   - `testRes`, `quizRes`, `projectRes`, `assignmentRes`, `finalExamRes` (all as doubles)
   - `totalMark` (double)
   - `grade` (string)

3. **Input**:
   - Prompt user to enter `testRes`, `quizRes`, `projectRes`, `assignmentRes`, and `finalExamRes`

4. **Calculate Total Mark**:
   - `totalMark = (testRes * 0.15) + (quizRes * 0.05) + (projectRes * 0.20) + (assignmentRes * 0.10) + (finalExamRes * 0.50)`

5. **Determine Grade**:
   - If `totalMark >= 90`, then `grade = "A+"`
   - Else if `totalMark >= 80`, then `grade = "A"`
   - Else if `totalMark >= 75`, then `grade = "B+"`
   - Else if `totalMark >= 60`, then `grade = "B"`
   - Else if `totalMark >= 55`, then `grade = "C+"`
   - Else if `totalMark >= 45`, then `grade = "C"`
   - Else if `totalMark >= 30`, then `grade = "D"`
   - Else, `grade = "F"`

6. **Output**:
   - Display `totalMark` and `grade`

7. **End**
