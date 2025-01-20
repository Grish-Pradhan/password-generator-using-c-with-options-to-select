# Password Generator

A simple C program that generates secure passwords based on user-defined criteria. This tool allows you to customize the length and character types (numeric, lowercase, uppercase, special characters) included in the password.

## Features

- Specify the length of the password.
- Choose which character types to include:
  - Numeric digits (0-9)
  - Lowercase letters (a-z)
  - Uppercase letters (A-Z)
  - Special characters (!@#$%^&*()-_=+[]{}|;:,.<>?/~)
- Error handling for invalid inputs.

## How It Works

1. The program builds a character set based on the user's preferences.
2. A random password of the desired length is generated using the selected character set.
3. The generated password is displayed to the user.

## Prerequisites

To compile and run the program, you need:
- A C compiler (e.g., GCC).

## Compilation

Use the following command to compile the program:

```bash
gcc -o password_generator password\ generator.c
```

## Usage

Run the compiled program:

```bash
./password_generator
```

Follow the prompts to specify:
1. Password length.
2. Whether to include numeric characters.
3. Whether to include lowercase letters.
4. Whether to include uppercase letters.
5. Whether to include special characters.

Example:
```
Enter the length of the password: 12
Include numeric characters? (1 for Yes, 0 for No): 1
Include lowercase letters? (1 for Yes, 0 for No): 1
Include uppercase letters? (1 for Yes, 0 for No): 1
Include special characters? (1 for Yes, 0 for No): 1
Generated Password: aB9@kL2$xG!q
```

## Error Handling

- If the password length is not greater than 0, the program exits with an error message.
- If no character types are selected, the program displays an error and exits.

## Customization

You can modify the character sets or extend the program by editing the defined constants at the top of the code:
```c
#define NUMERIC "0123456789"
#define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
#define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define SPECIALCHARS "!@#$%^&*()-_=+[]{}|;:,.<>?/~"
```

## License

This project is open-source. Feel free to use and modify it as needed.

---

### Contributing

If you encounter issues or have suggestions, feel free to open a pull request or create an issue in the repository.

