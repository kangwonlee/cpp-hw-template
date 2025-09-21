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
  - **`gcc` / `g++` **
    - **Linux**: Install `build-essential` using `sudo apt install build-essential`.
    - **macOS**: Install Xcode command-line tools with `xcode-select --install`.
    - **Windows**: Install MinGW or use WSL with `build-essential`.
  - **Visual Studio**:
    - Download and install Visual Studio with the "Desktop development with C++" workload.
3. **Compile and run**:
  - **Linux/macOS**/**Windows (MinGW)**:
    - Compile: `gcc -o hello src/main.c`
      - Run: `./hello`
        - On Windows (MinGW), use `hello.exe` instead.
    - Alternatively, use the provided `CMakeLists.txt`:
      ```sh
      cmake .
      make
      ./my_exec # Linux / OSX
      my_exec.exe # Windows (MinGW)
      ```
  - **Windows (Visual Studio)**:
    - Open or start your project in Visual Studio
    - "Build" > "Build Solution"
    - "Debug" > "Start Debugging"

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

``From here is common to all assignments.``

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

## Cloning Your Repository
You can work on your assignment locally by cloning your GitHub repository to your computer.
* If your repository is private and in the organization, you need a personal access token (PAT) to clone it. Please create a PAT with minimal scopes with limited expiration date (e.g., 1 day for college computer labs).
  * Follow [this guide](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/creating-a-personal-access-token) to create a PAT.
* If you are using MS Visual Studio, follow [this guide](https://learn.microsoft.com/en-us/visualstudio/version-control/git-with-visual-studio?view=vs-2022) to clone your repository.
* If you are using Git command line, follow these steps:
  1. Open a terminal (Command Prompt, PowerShell, or Git Bash).
  2. Navigate to the directory where you want to clone your repository.
  3. Configure Git to cache your credentials for a limited amount of time (e.g., 15 minutes):
    ```sh
    git config --global credential.helper 'cache --timeout=900'
    ```
  4. Clone your repository using the following command:
    ```sh
    git clone https://<your github id>@github.com/<organization>/<repository>
    ```
    Replace `<your github id>`, `<organization>`, and `<repository>` with your actual GitHub username, organization name, and repository name.
  5. If prompted for a password, enter your personal access token (PAT) instead of your GitHub password. (Never share your PAT with anyone.) (GitHub will not use passwords for authentication.)
  6. After cloning, navigate into your repository folder:
    ```sh
    pushd <repository>
    git config user.name "<your github id or name>"
    git config user.email "<your email>"
    ```
  7. You can now edit files locally and use Git commands to manage your changes.
  8. After making changes, use the following commands to commit and push your changes:
    ```sh
    git add <file>
    git commit -m "Your descriptive commit message"
    git push origin main
    ```
    Replace `<file>` with the name of the file you modified.
  9. If you are using a different branch, replace `main` with your branch name in the `git push` command.
  10. If you encounter any issues, refer to the [GitHub documentation](https://docs.github.com/en/get-started/quickstart/set-up-git) for troubleshooting.
  11. If you want to stop caching your credentials, you can run:
     ```sh
     git config --global --unset credential.helper
     ```
  12. After finishing your work, you can delete the cloned repository from your local machine.
     ```sh
     popd
     rmdir -rf <repository>
     ```

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
