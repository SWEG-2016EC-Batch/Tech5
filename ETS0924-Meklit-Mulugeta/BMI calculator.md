# Algorithm of body mass index calculator
## Pseudocode

1. START
2. DECLARE variables weight, height, bodyMassIndex as double and gender as character and also continueInput as integer
3. for each input
4. PRINT 
   > Enter weight in kg:
5. READ weight
6. PRINT
   > Enter height in meters:
7. READ height
8. PRINT 
   > Enter gender (M/F):
9. READ gender
10. Calculate BMI as weight over height square or `BMI = weight / (height * height)`
11. PRINT BMI 
12. check body mass index (BMI) level:
    * if `BMI >= 30`, the output is:
      > you are obese
    * if gender is male (M) 
      - if `BMI < 20.5`, the output is:
        > you are underweight
      - if `BMI >= 20.5 and BMI < 26`, the output is:
        > you have a normal weight 
      - if `BMI >= 26 and BMI < 30`, the output is:
        > you are overweight
    * if gender is female (F) 
      - if `BMI < 18.5`, the output is:
        > you are underweight
      - if `BMI >= 18.5 and BMI < 24`, the output is:
        > you have a normal weight 
      - if `BMI >= 24 and BMI < 30`, the output is:
        > you are overweight  
    * if gender is invalid, output:
      > invalid gender
13. ask if user wants to continue
14. read continueInput
15. check user input if continueInput is equal to zero the loop exits or if not continue
16. end for
17. end



## Flowchart

``` mermaid
flowchart TD  
    A((START)) --> B[DECLARE variables: weight, height, bodyMassIndex, gender, continueInput]  
    B --> C[WHILE loop: 1 > 0]  
    C --> D[/Input weight in kg/]  
    D --> E[/Input height in meters/]  
    E --> F[/Input gender/]  
    F --> G[CHECK for valid input]  
    
    G -->|Valid| H[CALCULATE BMI]  
    H --> I[DISPLAY BMI and gender]  
    I --> J[DETERMINE weight level based on BMI and gender]  
    
    J --> K{BMI >= 30}  
    K -->|Yes| L[/Display You are obese. Consult a Doctor./]  
    K -->|No| M{Gender M}  
    
    M -->|Yes| N{BMI < 20.5}  
    N -->|Yes| O[/Display You are underweight. Eat a balanced diet./]  
    N -->|No| P{20.5 <= BMI < 26}  
    P -->|Yes| Q[/Display You have a normal weight. Keep it up!/]  
    P -->|No| R{26 <= BMI < 30}  
    R -->|Yes| S[/Display You are overweight. Exercise./]  
    R -->|No| T[/Display Invalid condition./]  
    
    M -->|No| U{Gender F}  
    
    U -->|Yes| V{BMI < 18.5}  
    V -->|Yes| W[/Display You are underweight. Eat a balanced diet./]  
    V -->|No| X{18.5 <= BMI < 24}  
    X -->|Yes| Y[/Display You have a normal weight. Keep it up!/]  
    X -->|No| Z{24 <= BMI < 30}  
    Z -->|Yes| AA[/Display You are overweight. Exercise./]  
    Z -->|No| AB[/Display Invalid condition./]  
    
    K --> AC[Invalid Gender]  
    AC --> AD[/Display Invalid gender/]  
    
    L --> AE[ASK if user wants to continue]  
    O --> AE  
    Q --> AE  
    S --> AE  
    W --> AE  
    Y --> AE  
    AA --> AE  
    AD --> AE  
    
    AE --> AF[/Input continueInput/]  
    AF -->|continueInput == 0| AG((END))
    
