# C Functions for Arithmetic Assignment

## Purpose:
Learn to define and call basic functions in C for arithmetic operations, handle user input using `scanf` (Linux) or `scanf_s` (Windows/Visual Studio), perform type conversion, and execute operations with formatted output.

## Description:
This assignment extends basic C programming by requiring you to define custom functions for arithmetic operations. You will write a program that prompts the user to enter two integers and two floating-point numbers, converts the inputs, calls your defined functions to perform addition, subtraction, and multiplication, and prints the results in a specific format.

## Exercise Files:
| Folder | File Name | Description |
|:------:|:---------:|:-----------:|
| `src`  | `main.c` | Implement functions for arithmetic and the main function to handle input, call functions, and print results |

## Math Operators:
| Operator | Description       | Example       |
|:--------:|:-----------------:|:-------------:|
| `+`      | Addition          | `a + b`       |
| `-`      | Subtraction       | `a - b`       |
| `*`      | Multiplication    | `a * b`       |

## Functions to implement:
| Operation | function name    | return type       | input arguments |
|:---------:|:----------------:|:-------------:|:-------------:|
| `+`       | `add_int`        | `int`       | `int` a, `int` b |
| `-`       | `sub_int`        | `int`       | `int` a, `int` b |
| `*`       | `mul_int`        | `int`       | `int` a, `int` b |
| `+`       | `add_float`      | `float`     | `float` c, `float` d |
| `-`       | `sub_float`      | `float`     | `float` c, `float` d |
| `*`       | `mul_float`      | `float`     | `float` c, `float` d |

## Instructions:
1. **Implement the program**:
   - In `src/main.c`, write a C program that:
      - Defines the following functions before `main`:
         - `int add_int(int x, int y)`: Returns the sum of two integers.
         - `int sub_int(int x, int y)`: Returns the difference of two integers (x - y).
         - `int mul_int(int x, int y)`: Returns the product of two integers.
         - `float add_float(float x, float y)`: Returns the sum of two floats.
         - `float sub_float(float x, float y)`: Returns the difference of two floats (x - y).
         - `float mul_float(float x, float y)`: Returns the product of two floats.
   - In `main()`:
     - **Prompts the user**:
       - Use `printf` to display clear prompts before reading input:
         - For integers: `"Enter two integers (a b): "`
         - For floats: `"Enter two floats (c d): "`
       - This ensures the user knows to input two numbers separated by a space.
     - Uses `scanf` (Linux/macOS) or `scanf_s` (Windows/Visual Studio) to read inputs.
     - Stores `a` and `b` as `int` and `c` and `d` as `float`.
     - **First Separator**: Right after reading inputs for `a`, `b`, `c`, and `d`, print a separator line using `printf("##########\n");`.
     - Calls the defined functions to perform operations on `a` and `b`, then on `c` and `d`.
     - **Second Separator**: Print another separator line using `printf("##########\n");` between `int` and `float` results.
     - Prints the values and results in the format:
       ```
       ##########
       a = [value]
       b = [value]
       a + b = [result]
       a - b = [result]
       a * b = [result]
       ##########
       c = [value]
       d = [value]
       c + d = [result]
       c - d = [result]
       c * d = [result]
       ```
     - Use `%.2f` for `float` outputs.
   - Include `<stdio.h>` for `printf` and `scanf`/`scanf_s`.
2. **Set up a C compiler**:
   - **Linux**: Install `build-essential` using `sudo apt install build-essential` (use `scanf`).
   - **macOS**: Install Xcode command-line tools with `xcode-select --install` (use `scanf`).
   - **Windows**: Install Visual Studio (use `scanf_s`) or MinGW (use `scanf`).
3. **Compile and run**:
   - Compile: `gcc -o functions_arithmetic src/main.c` (or use Visual Studio IDE).
   - Run: `./functions_arithmetic`

## Example Run:
- **Input**:
  ```
  Enter two integers (a b): 10 5
  Enter two floats (c d): 1.5 2.5
  ```
- **Output**:
  ```
  ##########
  a = 10
  b = 5
  a + b = 15
  a - b = 5
  a * b = 50
  ##########
  c = 1.50
  d = 2.50
  c + d = 4.00
  c - d = -1.00
  c * d = 3.75
  ```

## Tips:
- Define functions with simple return statements using the appropriate operators.
- For `scanf` (Linux/macOS): `scanf("%d %d", &a, &b);`. For `scanf_s` (Windows): `scanf_s("%d %d", &a, &b);`.
  - We will learn what `&`s here mean later. It can be one of the reasons why C is so popular.
- Debug with `gdb`: `gdb ./functions_arithmetic`, set `break main`, then `run`.
  - Also, the Microsoft Visual Studio Code has a debugger.

**Happy coding!**

## Grading Criteria
| Criteria | Points |
|:--------:|:------:|
| Is the build successful? | 2 |
| Does the code follow coding style? | 1 |
| Does the result matches the expectation? | 2 |

``Until here is common to all assignments.``

## Submission
1. Modify the contents of the required file per instructions.
2. Use the GitHub online editor to commit and push your changes. (See below for detailed instructions)
3. At the Actions tab of your GitHub repository, please check the result.

## How to Use the GitHub Online Editor
* Press the <kbd>.</kbd> key while viewing the files in your repository on GitHub. This will launch a web version of VS Code.
* Make your changes to the `main.c` (or `main.cpp`) file.
* To commit your changes, click on the branch icon on the left sidebar (the third icon after the magnifying glass).
* Click the "+" sign next to the filename to stage your changes.
* Write a brief description of your changes in the text box above.
* Click "Commit & Push."
* Click "Back to Repository" on the branch icon to return to your repository.

## Writing Descriptive Git Commit Messages
* To help you develop better coding habits, we encourage descriptive Git commit messages when committing changes to your repository.
* A good commit message clearly explains what you changed and why, making it easier for you to understand your work later.

### Guidelines for Commit Messages
* Describe the change more specifically, e.g., "Add factorial function to exercise.cpp" or "Fix overflow in factorial calculation".
* Use Action Verbs: Start with words like "Add", "Fix", "Update", or "Refactor".
* Avoid Vague Messages: Messages like "update" or "fix" can be too general.
* Keep It Concise: Aim for 15-50 characters, but ensure clarity.
* Examples:
  * Good: "Add unit tests for factorial function in main.cpp"
  * Bad: "update", "fix 1", "changed file"

### Why It Matters
* Clear commit messages improve collaboration, debugging, and code review in real-world projects.

### Resources
* [How to Write a Git Commit Message](https://cbea.ms/git-commit/)

## NOTICE REGARDING STUDENT SUBMISSIONS
* Your submissions for this assignment may be used for various educational purposes. These purposes may include developing and improving educational tools, research, creating test cases, and training datasets.
* The submissions will be anonymized and used solely for educational or research purposes. No personally identifiable information will be shared.
* If you do not wish to have your submission used for any of these purposes, please inform the instructor before the assignment deadline.

## Acknowledgments
- Copyright © 2025 Kangwon Lee. Registered at the Korea Copyright Commission under #C-2025-027967 (as one of derivative works from original registration #C-2025-016393).
* Various LLMs and AI tools helped implemeting the templates for this assignment.
  * Google Gemini Flash / Pro 2.5
  * xAI Grok3
  * Perplexity Sonar
  * Claude.ai 4.0 Sonnet

``Until here is common to all assignments.``
