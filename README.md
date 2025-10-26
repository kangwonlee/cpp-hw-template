# C/C++ Homework Template

## Purpose:
Learn to implement and test the dynamic memory management in C/C++.

## Description:
* Please implement following functions

| function name | input argument(s) | return value type | description |
|:-----------:|:-----------:|:-----------:|:-----------:|
| `allocate_integer` | integer `value` | a pointer to an int  | Allocate one integer and initialize with `value` |
| `deallocate_integer` | a pointer to an int | none | deallocate memory that the input argument is pointing to |

## Exercise files
* Please modify following files

| folder | file name | description |
|:-----------:|:-----------:|:-----------:|
| `src` | `exercise.c` | please implement functions here |
| `include` | `exercise.h` | please add function prototypes here |

## Instructions:
* Implement the files above.
* Set up a C/C++ compiler:
  - **Linux**: `sudo apt install build-essential`
  - **macOS**: `xcode-select --install`
  - **Windows**: Install MinGW or use WSL with `build-essential`.
* Optionally, consider install Google Test for local testing: `sudo apt install libgtest-dev` (Linux).
* The `build-test.yml` file is at `.github/workflows/`. The `.github` folder is hidden on Linux but visible on the GitHub repository.
* Set `vars.CPP_GRADER_???` in `build-test.yml` in the repository settings (Settings > Secrets and Variables > Actions > Variables) to your grader image (e.g., `ghcr.io/your-org/cpp-pytest:latest`).
* Set your AI feedback natural language in `build-test.yml` (e.g., `INPUT_EXPLANATION-IN: "English"`).

## Example Run:
* input
Please add sample console input for your program here.
```
<prompt>: <value>
```
* output
Please add sample console output for your program here.
```
<sample output>
```

## Tips:
* Consider using `gdb` or other debuggers: Run `gdb ./<executable name>` and use commands like `break <function name>` and `run`.
* Ensure your function handles edge cases.
* Avoid undefined behaviors for the result.

__Happy coding!__

## Grading Criteria
| Criteria | Points |
|:--------:|:------:|
| Is the build successful? | 2 |
| Does the code follow coding style? | 1 |
| Does the code pass the dynamic tests? | 2 |

``From here is common to all assignments.``

## Submission
1. Modify the contents of the required file per instructions.
2. Use the GitHub online editor to commit and push your changes. (See below for detailed instructions)
3. At the Actions tab of your GitHub repository, please check the result.

## How to Use the GitHub Online Editor
* Press the <kbd>.</kbd> key while viewing the files in your repository on GitHub. This will launch a web version of VS Code.
* Make your changes to the `main.c` (or `main.cpp`) file. (Some assignments may require changes to other files; please follow the specific instructions for each assignment.)
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

## Visual Studio 2022 Git Clone Instructions (For University Computer Labs)
* **Generate a GitHub Personal Access Token (PAT)**: Go to GitHub Settings > Developer Settings > Personal Access Tokens > Generate Token. Select the `repo` scope.
* **Clone in Visual Studio 2022**:
  1. Open VS 2022 > Git > Clone Repository.
  2. Enter the GitHub URL[](https://github.com/username/repository.git).
  3. For authentication, use your GitHub username and the PAT as the password.
     * If issues arise, use the format https://<PAT>@github.com/username/repository and delete the repository completely before leaving the lab.
  4. Choose a clone location and click Clone.
* **Authentication in University Computer Labs**:
  * Use a PAT for public computers. Avoid logging into GitHub via browser or VS to prevent credential caching risks.
  * Enter the PAT and log out/end the session immediately after use.
  * Use Git Credential Manager: In VS Settings > Git > Credential Manager, store the PAT (temporarily only).
* **Protect Your GitHub Account After Class**:
  * Delete/regenerate the PAT immediately (GitHub Settings > Tokens > Delete).
  * Verify 2FA is enabled (SMS/app).
  * Check account activity logs (Settings > Security Log).
  * Log out of the computer and clear browser cache/cookies.
  * Contact GitHub support if suspicious activity is detected.

## NOTICE REGARDING STUDENT SUBMISSIONS
* Your submissions for this assignment may be used for various educational purposes. These purposes may include developing and improving educational tools, research, creating test cases, and training datasets.
* The submissions will be anonymized and used solely for educational or research purposes. No personally identifiable information will be shared.
* If you do not wish to have your submission used for any of these purposes, please inform the instructor before the assignment deadline.

## Acknowledgments
- Copyright © 2025 Kangwon Lee. Registered at the Korea Copyright Commission under #C-2025-027967 (as one of derivative works from original registration #C-2025-016393).
* Various LLMs and AI tools helped implementing the templates for this assignment.
  * Google Gemini Flash / Pro 2.5
  * xAI Grok3
  * Claude.ai 4.0 Sonnet
  * Perplexity Sonar

``Until here is common to all assignments.``
