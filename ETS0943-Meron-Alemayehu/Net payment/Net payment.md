# Salary Calculation pseudocode


1. **Input Weekly Hours**: User enters the number of hours worked in a week.
2. **Input Base Salary**: User enters their base salary.
3. **Calculate Bonus Payment**:
   - If the user worked more than 40 hours, they are prompted to enter a bonus rate per hour.
   - The bonus payment is calculated as `weeklyHours * bonusRate`.
4. **Calculate Gross Salary**:
   - Gross salary is the sum of base salary and bonus payment.
5. **Calculate Pension**:
   - Pension is 7% of the base salary (`baseSalary * 0.07`).
6. **Determine Tax Rate**:
   - Based on the gross salary, the tax rate is applied as follows:
     - if gross salary between 200 and 600 the tax rate is 10% of gross salary.
     - if gross salary between 600 and 1200 the tax rate is 15% of gross salary.
     - if gross salary between 1200 and 2000 the tax rate is 20% of gross salary.
     - if gross salary between 2000 and 3500 the tax rate is 25% of gross salary.
     - if gross salary above 3500 the tax rate is 30% of gross salary.
    
7.**calculate tax**
- as gross salary * tax rate.

8. **Calculate Net Salary**:
   - Net salary is computed as `grossSalary - tax - pension`.
9. **Display Results**:
   - Bonus payment, gross salary, and net salary are displayed.
