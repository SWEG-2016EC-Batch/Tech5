# Pseudocode for BMI Calculator Program
---

## Pseudocode

Start
  Declare variables:
    - weight, height, bmi as double
    - gender as char
    - continueInput as int

  While the condition is  true
    print "Enter weight in kilograms: "
    input weight

    print "Enter height in meters: "
    input height

    print "Enter gender (M/F): "
    input gender

    if input is invalid OR height is 0 then
      print "Invalid input"
      exit program
    else

    calculate bmi = weight / (height * height)
    print "Your BMI is: bmi"
    print "Your gender is: gender"

    if bmi >= 30 then
      print "You are obese. It's recommended to consult with a Doctor."
    else if gender is 'M' OR 'm' AND bmi < 20.5 THEN
      print "You are underweight. You must eat a balanced diet."
    else if gender is 'M' OR 'm' AND bmi >= 20.5 AND bmi < 26 then
      print "You have a normal weight. Keep it up!"
    else if  gender is 'M' OR 'm' AND bmi >= 26 AND bmi < 30 then
      print "You are overweight. You must do exercise."
    else if  gender is 'F' OR 'f' AND bmi < 18.5 then
      print "You are underweight. You must eat a balanced diet."
    else if  gender is 'F' OR 'f' AND bmi >= 18.5 AND bmi < 24 then
    print  "You have a normal weight. Keep it up!"
    else if  gender is 'F' OR 'f' AND bmi >= 24 AND bmi < 30 then
       print "You are overweight. You must do exercise."
    else
     print  "Invalid gender"
    endif

    print "Do you want to continue? Enter a non-zero number to continue, or 0 to stop:"
    input continueInput

    if continueInput == 0 THEN
      exit while
    endif
  endwhile
END
