Features 
Record Heart Rate: Users can input their current heart rate, which is then stored with the current timestamp.
Show Average Heart Rate: Calculates and displays the average heart rate from the recorded data.
Show History: Displays all recorded heart rates along with their corresponding timestamps.
Limitations
The program does not save recorded data persistently; data will be lost once the program exits.
Only basic input validation is provided. More robust error handling may be required for comprehensive user interactions.
How to Use
Compile the Program: Use a C++ compiler to compile the program. For example, with g++, you would use:
Copy code
g++ -o HeartRateRecorder main.cpp
Run the Program: Execute the compiled program from the command line:
Copy code
./HeartRateRecorder
Follow On-Screen Instructions: The program presents a menu with options:
Press 1 to record a new heart rate.
Press 2 to display the average heart rate.
Press 3 to view the history of recorded heart rates.
Press 4 to exit the program.
