#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define PASSWORD_LENGTH 10

int main() {
    // Define the possible characters for the password
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Get the length of the charset
    const int charsetLength = sizeof(charset) - 1;

    // Seed the random number generator
    srand(time(NULL));

    // Generate the password
    char password[PASSWORD_LENGTH + 1];
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % charsetLength];
    }
    password[PASSWORD_LENGTH] = '\0';

    // Print the password
    printf("Generated Password: %s\n", password);

    return 0;
}


