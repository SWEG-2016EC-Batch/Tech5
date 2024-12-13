# System Design for full_pyramid

## Input
1. **number of rows**: Integer data type

## Output
1. **full_pyramid**

## Operation
1. **Iteration**: for loop

## Pseudo Code
1. Start the program.
2. Take input n for number of rows data type integer
3. Initialize i to 0
4. if i < n go to 4.1 else go to 5
    4.1 initialize k to 5
    4.2 if k > i go to 4.2.1 else go to 4.3
        4.2.1 print space
        4.2.2 decrement k by 1
        4.2.3 go to step 4.2
    4.3 initialize j to 0
    4.4 if j < ((2*i) + 1) go to step 4.4.1 else go to 4.5
        4.4.1 print "*"
        4.4.2 increment j by 1
        4.4.3 Go to step 4.4
    4.5 print new line
    4.6 increment i by 1
    4.7 go to step 4
5. end the program
