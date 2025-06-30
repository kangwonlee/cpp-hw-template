# C Hello World Assignment

## Purpose:
Learn the basics of C programming by creating a simple program that prints "Hello World" to the console.

## Description:
This assignment introduces you to writing, compiling, and running a basic C program. You will create a program that outputs the string "Hello World" to the console.

## Exercise Files:
| Folder | File Name | Description |
|:------:|:---------:|:-----------:|
| `src`  | `main.c` | Implement the main function to print "Hello World" |

## Instructions:
1. **Implement the program**:
   - In `src/main.c`, write a C program that uses `printf` to output "Hello World" followed by a newline (`\n`).
2. **Set up a C compiler**:
   - **Linux**: Install `build-essential` using `sudo apt install build-essential`.
   - **macOS**: Install Xcode command-line tools with `xcode-select --install`.
   - **Windows**: Install MinGW or use WSL with `build-essential`.
3. **Compile and run**:
   - Compile: `gcc -o hello src/main.c`
   - Run: `./hello`
4. **Optional testing**:
   - Install Google Test for unit testing: `sudo apt install libgtest-dev` (Linux).
   - Check the `.github/workflows/build-test.yml` for CI setup.

## Example Run:
* **Input**: None (no user input required).
* **Output**:
```
Hello World
```

## Tips:
- Ensure you include `<stdio.h>` in `main.c` for `printf`.
- Use `gdb` for debugging: `gdb ./hello`, then set breakpoints with `break main` and run with `run`.
- Check for compilation errors and ensure the output matches exactly "Hello World" with a newline.
- Avoid extra spaces or characters in the output.

**Happy coding!**

## Grading Criteria
| Criteria | Points |
|:--------:|:------:|
| Is the build successful? | 2 |
| Does the code follow coding style? | 1 |
| Does the code print "Hello World" correctly? | 2 |

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
* The template for this assignment is registered as a part of #C-2025-016393 in the Korea Copyright Commission.
* Various LLMs and AI tools helped implemeting the templates for this assignment.
  * Google Gemini Flash / Pro 2.5
  * xAI Grok3
  * Perplexity Sonar
  * Claude.ai 4.0 Sonnet

``Until here is common to all assignments.``
