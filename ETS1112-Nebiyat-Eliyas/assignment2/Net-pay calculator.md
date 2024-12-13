# Net-pay calculator - Input, Processing, and Output

## 1. Input
- User provides the following inputs:
  - `basicSalary`: The basic salary of the employee.
  - `workedHours`: The total hours worked by the employee.
  - `bonusRate`: The bonus rate per extra hour worked. 
---

## 2. Process
The program performs the following calculations:

1. **Calculate Bonus**:
   - If `workedHours > 40`:
     - `bonus = (workedHours - 40) * bonusRate`

2. **Calculate Gross Salary**:
   - `grossSalary = basicSalary + bonus`

3. **Calculate Pension**:
   - `pension = basicSalary * 0.07`

4. **Determine Tax**:
   - Tax is based on the `grossSalary`:
     - If `grossSalary > 3500`: `tax = grossSalary * 0.30`
     - Else if `grossSalary > 2000`: `tax = grossSalary * 0.25`
     - Else if `grossSalary > 1200`: `tax = grossSalary * 0.20`
     - Else if `grossSalary > 600`: `tax = grossSalary * 0.15`
     - Else if `grossSalary > 200`: `tax = grossSalary * 0.10`
     - Otherwise: `tax = 0.0`

5. **Calculate Net Salary**:
   - `netSalary = grossSalary - pension - tax`

---

## 3. Output
- The program outputs the following results:
  - `Gross Salary`: The total salary before deductions.
  - `Pension`: The pension amount (7% of the basic salary).
  - `Tax`: The tax amount based on the gross salary.
  - `Net Salary`: The final salary after deducting pension and tax.

---


# Pseudocode

1. **Start**

2. Declare the following variables:
   - `basicSalary` (double)
   - `workedHours` (double)
   - `bonusRate` (double)
   - `bonus` (double) = 0.0
   - `grossSalary` (double)
   - `pension` (double)
   - `tax` (double) = 0.0
   - `netSalary` (double)

3. **Input**:
   - Prompt the user to enter `basicSalary`
   - Prompt the user to enter `workedHours`
   - Prompt the user to enter `bonusRate`

4. **Calculate Bonus**:
   - If `workedHours > 40`, then:
     - `bonus = (workedHours - 40) * bonusRate`

5. **Calculate Gross Salary**:
   - `grossSalary = basicSalary + bonus`

6. **Calculate Pension**:
   - `pension = basicSalary * 0.07`

7. **Determine Tax**:
   - If `grossSalary > 3500`, then:
     - `tax = grossSalary * 0.30`
   - Else if `grossSalary > 2000`, then:
     - `tax = grossSalary * 0.25`
   - Else if `grossSalary > 1200`, then:
     - `tax = grossSalary * 0.20`
   - Else if `grossSalary > 600`, then:
     - `tax = grossSalary * 0.15`
   - Else if `grossSalary > 200`, then:
     - `tax = grossSalary * 0.10`
   - Otherwise:
     - `tax = 0.0`

8. **Calculate Net Salary**:
   - `netSalary = grossSalary - pension - tax`

9. **End**
