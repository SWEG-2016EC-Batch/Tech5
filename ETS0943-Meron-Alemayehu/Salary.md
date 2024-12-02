# Algorithm of employee salary
## pseudocode
1. Start
2. DECLARE variables employeeName as string, weeklyHoursbonusRate, baseSalary,grossSalary,netSalary,bonusPayment,tax and pesions as double 
3. print 
   >Enter employee name
4. read employeeName
5. print 
   >Enter weekly working hours:
6. read weeklyHours
7. print 
   >Enter bonus rate per hour: 
8. read bonusRate 
9. print 
    >Enter base salary:
10. read basesalary:
11. Calculate bonusPayment as weeklyHours times bonusRate or `bonusPayment = weeklyHours * bonusRate`
12. Calculate grossSalary as baseSalary plus bonusPayment or `grossSalary= baseSalary + bonusPayment`
13. Calculate netSalary as  `netSalary = grossSalary - ( pension) - ( tax)`

14.print  grossSalary, netSalary, bonusPayment

 15.End
