# Algorithm
## pseudocode
1. start
2. declare variables fileSize as long ,timeInSeconds and const variable transmissionRate as int
3. print 
   >enter file size in bytes:
4. read fileSize
5. calculate time In Second as file size divided by transmission rate or `timeInSecond = fileSize/ transmissionRate`
6.  calculate time taken by using timeInSecond in terms of hours as timeInSecond/3600, minutes as timeInSeconds - (hours * 3600) / 60 and seconds as timeInSeconds - (hours * 3600 + minutes * 60)
7. print time in terms of horurs, minutes and seconds
8. end

## flowchart
``` mermaid
flowchart TD
    A[Start] --> B[Declare variables: fileSize , timeInSeconds, transmissionRate ]
    B --> C[Print Enter file size in bytes:]
    C --> D[Read fileSize]
    D --> E[Calculate timeInSeconds = fileSize / transmissionRate]
    E --> F[Calculate hours = timeInSeconds / 3600]
    F --> G[Calculate minutes = timeInSeconds - hours * 3600 / 60]
    G --> H[Calculate seconds = timeInSeconds - hours * 3600 + minutes * 60]
    H --> I[Print time in hours, minutes, and seconds]
    I --> J[End]
