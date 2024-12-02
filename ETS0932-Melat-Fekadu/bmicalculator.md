# system design for BMI calculator
## Input
Weight in kilograms (w)

Height in meters (h)

A number to continue or stop the loop (x)
## Process
Calculate the Body Mass Index (BMI) using the formula
## Output
The calculated BMI value.

The BMI category (underweight, normal weight, overweight, or obese).

Corresponding advice based on the BMI category.

## Pseudocode for BMI Calculation

step1:  **Start**

step2:  **Initialize Variables**
   - Declare `int x`
   - Declare `float w`
   - Declare `float h`
   - Declare `float BMI`
     
step3: **Begin Loop**

   - Do While `x` is not equal to 0
     1. **Input Weight**
        - Prompt user: "Please enter your weight in kilograms: "
        - Read `w`
     2. **Input Height**
        - Prompt user: "Please enter your height in meters: "
        - Read `h`
     3. **Calculate BMI**
        - Compute `BMI = w / (h * h)`
     4. **Validate Input**
        - If input is invalid or `w < 0` or `h < 0`
          - Clear input error
          - Ignore invalid input
          - Print "Please enter valid weight and height."
        - Else
          - Print "Your BMI = " + `BMI`
          - If `BMI < 18.5`
            - Print "Underweight"
            - Print "You should eat food with high calories."
          - Else If `BMI <= 24.9`
            - Print "Normal weight"
            - Print "Keep it up!"
          - Else If `BMI < 30`
            - Print "You are overweight"
            - Print "You should balance your diet."
          - Else If `BMI >= 30`
            - Print "You are obese"
            - Print "You should eat healthy and drink more water."
     5. **Continue or Stop**
        - Prompt user: "Enter 0 to stop or enter any number to continue: "
        - Read `x`
        
step4: **End Loop**

step 5: **End**

