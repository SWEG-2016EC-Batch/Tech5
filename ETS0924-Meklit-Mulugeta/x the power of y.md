# Algorithm
## pseudocode
1. START
2. DECLARE x, y, result AS double
3. print
    >Enter the value of x: 
4. read x
5. print
    >Enter the value of y: 
6. read y
7. Calculate x raised to the power of y or `result = x^y`
8. print result
9.  END

## flowchar 
``` mermaid
flowchart TD
    A((START)) --> B[DECLARE x, y, result AS double]
    B --> C[/Enter the value of x:/]
    C --> D[Read x]
    D --> E[/Enter the value of y:/]
    E --> F[Read y]
    F --> G[Calculate result = x^y]
    G --> H[/Print result/]
    H --> I((END))
