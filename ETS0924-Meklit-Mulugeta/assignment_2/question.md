# Pseudocode for Salary Calculation 

1. Start
2. Declare variables: weeklyHours,bonusRate,baseSalary,pension, grossSalary ,netSalary and Initialize variables: bonusPayment = 0.0,tax = 0.0,pension_rate = 0.07
3. Output Enter your weekly working hours
4. Input weeklyHours
5. print       
   >Enter your base salary
6. Input baseSalary
7. If weeklyHours > 40:
   - print 
       >Enter bonus rate per hour
   - Input bonusRate
   - Calculate bonusPayment = weeklyHours * bonusRate
9. Calculate grossSalary = baseSalary + bonusPayment
10. Calculate pension = baseSalary * pension_rate
11. If grossSalary >= 200 and grossSalary <= 600:
    - tax = grossSalary * 0.1
12. Else if grossSalary > 600 and grossSalary <= 1200:
    - tax = grossSalary * 0.15
13. Else if grossSalary > 1200 and grossSalary <= 2000:
    - tax = grossSalary * 0.2
14. Else if grossSalary > 2000 and grossSalary <= 3500:
    - tax = grossSalary * 0.25
15. Else if grossSalary > 3500:
    - tax = grossSalary * 0.3
16. Calculate netSalary = grossSalary - tax - pension
17. print  bonusPayment
18. print  grossSalary
19. print netSalary
20. End
