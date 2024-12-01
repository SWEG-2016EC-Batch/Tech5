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
    A[Start] --> B[Declare variables: weight, height, bodyMassIndex, gender, continueInput]
    B --> C[While loop: 1 > 0]
    C --> D[Input weight in kg]
    D --> E[Input height in meters]
    E --> F[Input gender ]
    F --> G[Check for valid input]
    G -->|Valid| H[Calculate BMI]
    H --> I[Display BMI and gender]
    I --> J[Determine weight level based on BMI and gender]
    
    J -->|BMI >= 30| K[Display You are obese. Consult a Doctor.]
    J -->|Gender M and BMI < 20.5| L[Display You are underweight. Eat a balanced diet.]
    J -->|Gender M and 20.5 <= BMI < 26| M[Display You have a normal weight. Keep it up!]
    J -->|Gender M and 26 <= BMI < 30| N[Display You are overweight. Exercise.]
    J -->|Gender F and BMI < 18.5| O[Display You are underweight. Eat a balanced diet.]
    J -->|Gender F and 18.5 <= BMI < 24| P[Display You have a normal weight. Keep it up!]
    J -->|Gender F and 24 <= BMI < 30| Q[Display You are overweight. Exercise.]
    J -->|Invalid Gender| R[Display Invalid gender]
    
    K --> S[Ask if user wants to continue]
    L --> S
    M --> S
    N --> S
    O --> S
    P --> S
    Q --> S
    R --> S
    
    S --> T[Input continueInput]
    T -->|continueInput == 0| U[End]
    T -->|continueInput != 0| C
