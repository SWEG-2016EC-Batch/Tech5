# Algorithm
## pseudocode
1. start
2. declare variables fileSize as long ,timeInSeconds and const variable transmissionRate as int
3. print 
   >enter file size in bytes:
4. read fileSize
5. calculate time In Second as file size divided by transmission rate or `timeInSecond = fileSize/ transmissionRate`
6.  calculate time taken by using timeInSecond in 
terms of day as timeInSeconds / 86400, hours as timeInSecond/3600, minutes as timeInSeconds - (hours * 3600) / 60 and seconds as timeInSeconds - (hours * 3600 + minutes * 60)
7. print time in terms of days, horurs, minutes and seconds
8. end


## flowchart
``` mermaid
flowchart TD
    A((START)) --> B[DECLARE variables: fileSize, timeInSeconds, transmissionRate]
    B --> C[/Enter file size in bytes:/]
    C --> D[Read fileSize]
    D --> E[Calculate timeInSeconds = fileSize / transmissionRate]
    E --> F[Calculate days = timeInSeconds / 86400]
    F --> G[Calculate hours = timeInSeconds * 86400 / 3600]
    G --> H[Calculate minutes = timeInSeconds * 360 / 60]
    H --> I[Calculate seconds = timeInSeconds * 60]
    I --> J[/Print time in days, hours, minutes, and seconds/]
    J --> K((END))
