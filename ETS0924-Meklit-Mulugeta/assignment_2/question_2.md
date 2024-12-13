# Pseudocode for Student Assessment Program

1. Start
2. print
    > ASSESSMENT LISTS FOR STUDENT OUT OF 100%
3. declare variables: test,quiz,project,assignment,final,total_mark,letter_grade
4.  print 
    >Please enter your test result out of 15
5. read test
6. print 
    >Please enter your quiz result out of 5
7.  read quiz
8.  print 
      >Please enter your project result out of 20
9. read project
10. print 
      >Please enter your assignment result out of 10
11. read assignment    
12. print
13.    >Please enter your final result out of 50
14.  read final
15.  Calculate total_mark = test + quiz + project + assignment + final
17.  Determine letter_grade based on total_mark:
    - If total_mark >= 90: letter_grade = "A+"
    - Else if total_mark >= 80: letter_grade = "A"
    - Else if total_mark >= 75: letter_grade = "B+"
    - Else if total_mark >= 60: letter_grade = "B"
    - Else if total_mark >= 55: letter_grade = "C+"
    - Else if total_mark >= 45: letter_grade = "C"
    - Else if total_mark >= 30: letter_grade = "D"
    - Else: letter_grade = "F"
18. print  total_mark
19. print letter_grade
20. End
 
