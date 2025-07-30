Aim: Implementation of loops in C++

Software: Mingw CPP compiler, VS code , Online C/C++ compiler

#Program a: Even number

Algorithm:

Step- 1: Start
Step- 2: Initialize a loop variable i from 1 to 10
Step- 3: For each i, check if i % 2 == 0 (i.e., check if the number is even)
Step- 4: If yes, print the number
Step- 5: End

The program simply prints even numbers from 1 to 10. It goes through each number one by one and checks if it can be divided by 2 without any leftovers. If yes, it's called an even number and gets printed. It's a basic way to learn how loops and conditions work in coding.

#program b: "SIT" using loops

Algorithm:

Step- 1: Initialize a loop control variable (e.g., int i = 0)
Step- 2: Check Condition (e.g., i < 5)
Step- 3: If true, proceed to the loop body
Step- 4: If false, exit the loop
Step- 5: Execute the loop body
Step- 6: Increment/Update the control variable (e.g., i++)
Step- 7: Repeat from step 2
Step- 8: End
This program uses a for loop to print the word “SIT” five times, each time with a number in front of it, like “1.SIT”, “2.SIT”, and so on. The loop starts at 0 and runs while i is less than 5. Inside the loop, i+1 is used so the numbering starts from 1 instead of 0. It’s a simple way to understand how loops work and how to combine text with numbers in output.

#Program c: Use of continue in loops

The continue statement in C++ is used inside loops to skip the current iteration and move directly to the next one. When the program hits continue, it ignores any code that comes after it in the loop for that specific cycle. It's helpful for filtering out values or conditions you want to avoid without breaking the loop completely. This program prints odd numbers from 1 to 9 using a for loop and the continue statement. The loop runs from 1 to 9, and for each number, it checks whether the number is even using i % 2 == 0. If the number is even, continue skips the rest of the loop for that iteration. If the number is odd, it prints the number. This is a basic way to understand how skipping specific values in a loop works using conditions.

Algorithm:

Step- 1: Start
Step- 2: Use a for loop from i = 1 to i < 10
Step- 3: Inside the loop:
If i % 2 == 0, use continue to skip the iteration
Step- 4: Else, print the value of i
Step- 5: Loop continues until i = 9
Step- 6: End

#Program d: STAR pattern-1

This program uses nested loops to print a triangular star pattern. The outer loop runs from 1 to 6, controlling the number of rows. For each row, the inner loop prints stars equal to the row number. After printing stars in each row, a newline character is added to start a new row.

Algorithm: STAR pattern-1

Step- 1: Start
Step- 2: Initialize outer loop variable i to 1 
Step- 3: Repeat while i is less than or equal to 6:
Step- 4: Initialize inner loop variable j to 1 
Step- 5: Repeat while j is less than or equal to i: 
Step- 6: Print "* " (a star followed by a space)
Step- 7: Increment j by 1 
Step- 8: Print a newline to move to the next row 
Step- 9: Increment i by 1 
Step- 10: End

#Program e: STAR pattern-2

Algorithm:

Step- 1: Start
Step- 2: Set the number of rows to 6
Step- 3: Initialize loop variable i to 6
Step- 4: Repeat while i ≥ 1:
Step- 5: Initialize j to 1
Step- 6: Repeat while j ≤ i:
Step- 7: Print * (a star followed by a space)
Step- 8: Increment j by 1
Step- 9: Print newline to move to the next row
Step- 10: Decrement i by 1
Step- 11: End

#Program f: STAR pattern-3

Algorithm:

Step- 1: Start
Step- 2: Set total number of rows as 6
Step- 3: Initialize outer loop variable i to 1
Step- 4: Repeat while i ≤ 6:
Step- 5: Initialize space counter j to 1
Step- 6: Repeat while j ≤ (6 − i):
Step- 7: Print two spaces " " for alignment
Step- 8: Increment j by 1
Step- 9: Initialize star counter k to 1
Step- 10: Repeat while k ≤ i:
Step- 11: Print "* " (a star and space)
Step- 12: Increment k by 1
Step- 13: Print newline to move to next row
Step- 14: Increment i by 1
Step- 15: End

#Program g: STAR pattern-4

Algorithm:

Step- 1: Start
Step- 2: Set the number of rows to 6
Step- 3: Initialize outer loop variable i to 6
Step- 4: Repeat while i ≥ 1:
Step- 5: Initialize space counter j to 0
Step- 6: Repeat while j ≤ i:
Step- 7: Print a space " " for indentation
Step- 8: Increment j by 1
Step- 9: Initialize star counter k to 6 10.Repeat while k ≥ i:
Step- 10: Print " *" (a space and a star for alignment)
Step- 11: Decrement k by 1
Step- 12: Print newline to move to the next row
Step- 13: Decrement i by 1
Step- 14: END

#Program h: Number pattern

This program prints a number triangle using nested for loops and a counter variable. It starts with a = 1 and increases a with each printed value. The outer loop controls the rows, running from 0 to 3. The inner loop prints numbers in each row, starting with one number in the first row and increasing by one in each subsequent row. The pattern is formed by incrementing a using a++ for every printed number, creating a neat triangle of numbers from 1 to 10.

Algorithm:

Step- 1: Start
Step- 2: Initialize a variable a = 1
Step- 3: Use an outer loop from i = 0 to i <= 3 (for rows)
Inside it, use an inner loop from j = 0 to j <= i
Print the current value of a
Increment a by 1
After the inner loop, print a newline
Step- 4: End


#Program i: Printing 1-20

This program uses a for loop to print numbers from 1 to 20, with each number on a separate line. The loop starts with i = 1 and continues until i <= 20, incrementing i by 1 in each iteration. Inside the loop, cout << i displays the current value of i, and cout << endl moves to the next line after printing each number.

Algorithm:

Step- 1: Start
Step- 2: Use a for loop with:
Initialization: i = 1
Condition: i <= 20
Increment: i++
Step- 3: Inside the loop, print the value of i followed by a space.
Step- 4: After the loop ends, return 0.
Step- 5: End

#Program j: Authenticate the password

This program demonstrates the use of a while loop to create a basic password validation system. It defines a fixed password "007" and continually prompts the user to input a password using cin. The loop runs indefinitely due to while(true) until the user inputs a string that matches the preset password. If the input is correct, the program displays "correct!!" and exits the loop using break; otherwise, it prints "try again" and repeats.

Algorithm:

Step- 1: Start
Step- 2: Store the correct password (e.g., "007")
Step- 3: Begin an infinite loop using while(true)
Step- 4: Prompt the user to enter a password
Step- 5: Read user input and store it in a variable
Step- 6: Check if the input matches the stored password:
Step- 7: If yes: Print "correct!!"
Step- 8: Exit the loop using break
Step- 9: If no: Print "try again"
Step- 10: Repeat the loop
Step- 11: End
Conclusion: We have learnt the concepts of looping in C++ and also used conditions in it for implementing a suitable program.
