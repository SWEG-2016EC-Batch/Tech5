## Input
Worked hours (workedhours)

Base salary (basesalary)

Overtime bonus rate per hour (bonusrate) if worked hours are greater than 40

## Process
Calculate grossSalary as the sum of basesalary and bonusPayment.

Determine the tax_rate based on the value of grossSalary.

Calculate tax as grossSalary * tax_rate.

Calculate pension as grossSalary * pension_rate. 

Calculate netSalary as grossSalary - tax - pension.
## Output
Gross salary

Tax

Pension

Net salary

## start
## Step 1: Declare Variables

## Step 2: Prompt and Input Worked Hours

## Step 3: Prompt and Input Base Salary

## Step 4: Calculate Overtime Bonus (if applicable)

- If `workedhours` > 40, then:
 
    - Print "Enter your overtime bonus rate per hour"
      
    - Input `bonusrate`
      
    - Calculate `bonusPayment` as (workedhours - 40) * `bonusrate`
      
## Step 5: Calculate Gross Salary

- Calculate `grossSalary` as `basesalary + bonusPayment`

## Step 6: Determine Tax Rate

- If `grossSalary` <= 200, set `tax_rate` to 0
  
- Else if `grossSalary` <= 600, set `tax_rate` to 0.1
  
- Else if `grossSalary` <= 1200, set `tax_rate` to 0.15
  
- Else if `grossSalary` <= 2000, set `tax_rate` to 0.2
  
- Else if `grossSalary` <= 3500, set `tax_rate` to 0.25
  
- Else, set `tax_rate` to 0.3
  
## Step 7: Calculate Tax

- Calculate `tax` as `grossSalary * tax_rate`
  
## Step 8: Calculate Pension

- Calculate `pension` as `grossSalary * pension_rate`
  
## Step 9: Calculate Net Salary

- Calculate `netSalary` as `grossSalary - tax - pension`
 
## Step 10: Output Results
 Gross salary
 
  tax
  
 Pension
 
 netSalary
## end
