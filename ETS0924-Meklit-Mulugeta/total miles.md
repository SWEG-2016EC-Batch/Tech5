# Algorithm
## pseudocode
1. START
2. DECLARE capacity, milesPerGallon, totalMiles AS FLOAT
3. print 
>Enter the capacity of the fuel tank in gallons: 
4. read capacity
5. print 
>Enter the miles per gallon the automobile can drive: 
6. read milesPerGallon
7. calculat total Miles as capacity times milespergallon or `totalMiles = capacity * milesPerGallon`
8. print totalMiles 
9. END

## flowchar
``` mermaid
flowchart TD
    A((START)) --> B[DECLARE capacity, milesPerGallon, totalMiles]
    B --> C[/Enter the capacity of the fuel tank in gallons:/]
    C --> D[Read capacity]
    D --> E[/Enter the miles per gallon the automobile can drive:/]
    E --> F[Read milesPerGallon]
    F --> G[Calculate totalMiles = capacity * milesPerGallon]
    G --> H[/Print totalMiles/]
    H --> I((END))
