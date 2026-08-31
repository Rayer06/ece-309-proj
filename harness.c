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
