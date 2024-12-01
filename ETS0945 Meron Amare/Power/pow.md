START
  Declare variables x, y, result as double
  Printe "Enter the value of x: "
  Input x
  IF input is invalid then
    print "invalid input"
    exit program
  ENDIF

  Display "Enter the value of y: "
  Input y
  IF input is invalid Then
    print "invalid input"
    exit program
  ENDIF

  calculate result = x raised to the power of y as (pow(x, y))
  print "The result of x raised to the power of y is: result"
END
