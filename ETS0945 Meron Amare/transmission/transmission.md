# Pseudocode for File Transmission Time Calculator

## Constants
- `transmission_rate_per_second = 960` (bytes per second)
## double
- file size, minutes, hours, seconds
## Input
- Prompt the user to enter the file size in bytes.
- Store the input in `file_size`.

## Error Handling
- If the input is invalid (not a number), display an error message: **"Invalid input"** and terminate the program.

## Calculations
1. Calculate the total transmission time in seconds:
seconds = file_size / transmission_rate_per_second


2. Convert seconds into minutes:
minutes = seconds / 60


3. Convert minutes into hours:
hours = minutes / 60



## Output
- Display the time taken to send the file in seconds, minutes, and hours.

## Termination
- Exit the program successfully.
