#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUMERIC "0123456789"
#define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
#define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define SPECIALCHARS "!@#$%^&*()-_=+[]{}|;:,.<>?/~"

void generatePassword(int length, int includeNumeric, int includeLowercase, int includeUppercase, int includeSpecial) {
    char charset[256] = "";
    char password[length + 1];

    // Build the character set based on user preferences
    if (includeNumeric) {
        strcat(charset, NUMERIC);
    }
    if (includeLowercase) {
        strcat(charset, LOWERCASE);
    }
    if (includeUppercase) {
        strcat(charset, UPPERCASE);
    }
    if (includeSpecial) {
        strcat(charset, SPECIALCHARS);
    }

    // Check if charset is not empty
    if (strlen(charset) == 0) {
        printf("Error: No character types selected.\n");
        return;
    }

    srand(time(NULL)); // Seed for random number generation

    for (int i = 0; i < length; i++) {
        password[i] = charset[rand() % strlen(charset)];
    }

    password[length] = '\0'; // Null-terminate the password string

    printf("Generated Password: %s\n", password);
}

int main() {
    int length;
    int includeNumeric, includeLowercase, includeUppercase, includeSpecial;

    // Ask user for password length
    printf("Enter the length of the password: ");
    scanf("%d", &length);

    // Validate password length
    if (length <= 0) {
        printf("Error: Password length must be greater than 0.\n");
        return 1;
    }

    // Ask user for character type preferences
    printf("Include numeric characters? (1 for Yes, 0 for No): ");
    scanf("%d", &includeNumeric);

    printf("Include lowercase letters? (1 for Yes, 0 for No): ");
    scanf("%d", &includeLowercase);

    printf("Include uppercase letters? (1 for Yes, 0 for No): ");
    scanf("%d", &includeUppercase);

    printf("Include special characters? (1 for Yes, 0 for No): ");
    scanf("%d", &includeSpecial);

    // Generate the password
    generatePassword(length, includeNumeric, includeLowercase, includeUppercase, includeSpecial);

    return 0;
}

