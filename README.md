# C Homework Template
Please work on: `exercise.cpp`

## Purpose:
Learn to implement and test a mathematical function in C/C++, focusing on basic control structures and integer arithmetic.

## Description:
Implement the `factorial` function in `exercise.cpp` to compute the factorial of a given non-negative integer `n` (0 ≤ n ≤ 20). The function should return the result as a `uint64_t`. For example, `factorial(5)` should return `120`.

## Instructions:
* Implement the `factorial` function in `exercise.cpp`.
* Use `make` to build the project and `make test` to run tests locally.
* Set up a C/C++ compiler:
  - **Linux**: `sudo apt install build-essential`
  - **macOS**: `xcode-select --install`
  - **Windows**: Install MinGW or use WSL with `build-essential`.
* Optionally, install Google Test for local testing: `sudo apt install libgtest-dev` (Linux).
* The `classroom.yml` file is at `.github/workflows/`. The `.github` folder is hidden on Linux but visible on the GitHub repository.
* Set `vars.C_GRADER_URL` in `classroom.yml` in the repository settings (Settings > Secrets and Variables > Actions > Variables) to your grader image (e.g., `ghcr.io/your-org/cpp-pytest:latest`).
* Set your AI feedback natural language in `classroom.yml` (e.g., `INPUT_EXPLANATION-IN: "English"`).

## Example Run:
* input
```
Enter a number: 5
```
* output
```
Factorial of 5 is 120
```

## Tips:
* Use `gdb` for debugging: Run `gdb ./factorial` and use commands like `break factorial` and `run`.
* Ensure your function handles edge cases like `n = 0` (should return 1).
* Avoid integer overflow by using `uint64_t` for the result.

__Happy coding!__

## Grading Criteria
| Criteria | Points |
|:--------:|:------:|
| Is the code written according to C/C++ syntax? | 3 |
| Does the code satisfy the requirements? | 2 |

## Submission
1. Modify the contents of the `exercise.cpp` file to write your program.
2. Use the GitHub online editor to commit and push your changes. (See below for detailed instructions)
3. At the Actions tab of your GitHub repository, please check the result.

## How to Use the GitHub Online Editor
* Press the <kbd>.</kbd> key while viewing the files in your repository on GitHub. This will launch a web version of VS Code.
* Make your changes to the `exercise.cpp` file.
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
  * Good: "Add unit tests for factorial function in exercise.cpp"
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
* The template for this assignment is registered as a part of #C-2025-016393 in the Korea Copyright Commission.