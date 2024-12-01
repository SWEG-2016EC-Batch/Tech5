# Algorithm of employee salary
## pseudocode
1. Start
2. DECLARE variables employeeName as character, weeklyHours bonusRate baseSalary,grossSalary,netSalary,bonusPayment as double and initilaized const variables pensionRate amd taxRate as float
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
13. Calculate netSalary as grossSalary minus grossSalary times pensionRate minus grossSalary times taxRate or `netSalary = grossSalary - (grossSalary * pensionRate) - (grossSalary * taxRate)`
print employeeName, grossSalary, netSalary, bonusPayment
14. End

## flowchart
``` mermaid
flowchart TD
    A[Start] --> B[Declare variables: employeeName, weeklyHours, bonusRate, baseSalary, grossSalary, netSalary, bonusPayment]
    B --> C[Initialize constants: pensionRate, taxRate]
    C --> D[Print Enter employee name]
    D --> E[Read employeeName]
    E --> F[Print Enter weekly working hours:]
    F --> G[Read weeklyHours]
    G --> H[Print Enter bonus rate per hour:]
    H --> I[Read bonusRate]
    I --> J[Print Enter base salary:]
    J --> K[Read baseSalary]
    K --> L[Calculate bonusPayment = weeklyHours * bonusRate]
    L --> M[Calculate grossSalary = baseSalary + bonusPayment]
    M --> N[Calculate netSalary = grossSalary - grossSalary * pensionRate - grossSalary * taxRate]
    N --> O[Print employeeName, grossSalary, netSalary, bonusPayment]
    O --> P[End]
