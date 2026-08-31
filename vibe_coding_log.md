**User:** 
I need to write a simple command-line program in C. I am a beginner, so please keep the code as simple as possible. Do not use external libraries, only standard ones like <stdio.h> and <string.h>. Here is the specification for the program:
1. It should run an infinite while loop that asks for user input using fgets.
2. If the user types 'exit', the loop should break and the program should end.
3. If the user types a sentence containing the word 'hello', the program should print a hardcoded greeting.
4. If the user types anything else, it should echo their input back to them.
5. Please add clear, line-by-line comments explaining what the code is doing.


**GitHub Copilot:**
```C
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[256];

    // Start an infinite loop to keep asking for user input.
    while (1) {
        // Ask the user to type something.
        printf("Enter a message: ");

        // Read one line of input from the keyboard.
        fgets(input, sizeof(input), stdin);

        // Remove the newline character at the end of the input.
        input[strcspn(input, "\n")] = '\0';

        // Check if the user typed exactly "exit".
        if (strcmp(input, "exit") == 0) {
            // Exit the loop and end the program.
            break;
        }

        // Check if the message contains the word "hello".
        if (strstr(input, "hello") != NULL) {
            // Print a greeting when "hello" is found.
            printf("Hello there!\n");
        } else {
            // Otherwise, echo the user's input back to them.
            printf("You entered: %s\n", input);
        }
    }

    // End the program.
    return 0;
}
```


**User:** I have a compiled C program named harness. Write a very simple Bash script (for Linux/Mac) that automatically sends the word 'hello', followed by the word 'exit', into the program to test if it works.


**GitHub Copilot:** I’ll give you a minimal Linux/macOS shell script that feeds those two inputs into the program and exits cleanly.

## Simple test script

Save this as something like `test_harness.sh`:

```bash
#!/bin/bash

printf '%s\n%s\n' "hello" "exit" | ./harness
```

### What it does
- `printf` sends:
  1. `hello`
  2. `exit`
- The pipe `|` sends those lines into the program `harness`
- This checks whether the program accepts input and exits normally

### Make it executable
```bash
chmod +x test_harness.sh
```

### Run it
```bash
./test_harness.sh
```

> If your program is in a different directory, replace `harness` with the correct path, such as `./bin/harness` or `/path/to/harness`.