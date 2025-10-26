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
* Make your changes to the `main.c` (or `main.cpp`) file. (For some assignments, different filenames would be possible.)
* To commit your changes, click on the branch icon on the left sidebar (the third icon after the magnifying glass).
* Click the "+" sign next to the filename to stage your changes. (Staging prepares your changes for committing. It is like putting items in a box before shipping)
* Write a brief description of your changes in the text box above.
* Click "Commit & Push."
* Click "Back to Repository" on the branch icon to return to your repository.

## Writing Descriptive Git Commit Messages
* To help you develop better coding habits, we encourage descriptive Git commit messages when committing changes to your repository.
* A good commit message clearly explains what you changed and why, making it easier for you to understand your work later.

### Guidelines for Commit Messages
* Describe the change specifically, e.g., "Add factorial function to exercise.cpp" or "Fix overflow in factorial calculation".
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

## Setting Up WSL for C/C++ Development on Windows
<details>
<summary>Click to expand: Install and configure WSL and Ubuntu</summary>

To develop C/C++ programs in a Linux environment on Windows, you can use Windows Subsystem for Linux (WSL). Follow these steps to set up WSL and install necessary tools.

1. Update the Windows to the latest version.
1. **Enable WSL**:
    - Open Control Panel > Programs > Turn Windows features on or off.
    - Check "Windows Subsystem for Linux" and "Virtual Machine Platform". Click OK and restart your computer if prompted.
1. **Install WSL and Ubuntu**:
    - Open PowerShell as Administrator (search for "PowerShell" in the Start menu, right-click, and select "Run as administrator").
    - Run the command: `wsl --install`
        - This downloads and installs WSL.
    - Restart your computer when prompted.
    - Start the PowerShell again as an Administrator again.
    - Run the command: `wsl --set-default-version 2` (if you are not installing the WSL on a virtual machine)
    - Run the command: `wsl --list --online`
        - This shows available Linux distributions.
    - Run the command: `wsl --install Ubuntu-22.04`
        - This downloads and installs `Ubuntu-22.04` distribution for the WSL.
1. **Set Up Ubuntu**:
    - Set a Linux username and password (these are separate from your Windows account).
    - Enter `exit` command to close Ubuntu
    - Enter `exit` to close PowerShell
    - Restart Windows
1. **Install C/C++ Tools and Git**:
    - From Windows menu, start Ubuntu 22.04
    - In the Ubuntu terminal, run the following commands in order. Enter password when promoted.:
        ```bash
        sudo apt update
        sudo apt upgrade -y
        sudo apt install build-essential gdb git -y
        ```
        - `sudo apt update` updates the package list, `build-essential` includes `gcc`, `g++`, and `make`, `gdb` is for debugging, and `git` is for version control.
1. **Verify Installation**:
    - Run these commands to confirm the tools are installed:
        ```bash
        gcc --version
        g++ --version
        gdb --version
        git --version
        ```
    - If versions are displayed, the setup is complete.

</details>

## Cloning a GitHub Repository
<details>
<summary>Click to expand: Clone a repository using WSL</summary>

To work on your assignment, you need to clone the GitHub repository to your WSL environment.

1. **Open Ubuntu Terminal**:
    - Open the Ubuntu app (installed with WSL) from the Start menu.
    - Run `git --version` to ensure Git is installed.
    - Run `git config --global user.name "<your name here>"`
        - example : `git config --global user.name "John Doe"`
    - Run `git config --global user.email "<your email address here>"`
       - example : `git config --global user.email "john.doe@example.com"`
1. Configure credential helper
    - Run `git config --global credential.helper cache`
        - `git` will store entered password in the memory for 900 seconds.
        - See https://git-scm.com/docs/git-credential-cache for more details.
1. **Navigate to a Directory**:
    - Run `pushd /mnt/c/Users/<your windows username>/` to go to your Windows home directory.
    - Run `ls -l` to list files and folders.
        - If `source/` folder does not exist, run `mkdir source` to create the folder.
    - Run `pushd source` to go to the `source/` folder.
    - **Optional**
        - Run `ls -l` to list files and folders.
            - If `repos/` folder does not exist, run `mkdir repos` to create the folder.
        - Run `pushd repos` to go to the `repos/` folder.
1. **Start cloning the Repository**:
    - Run: `git clone https://<your-github-username>@github.com/<organization>/<repository>.git`
    - Example: `git clone https://student123@github.com/MyOrg/MyProject.git`
1. **Create a GitHub Personal Access Token (PAT)**:
    - Go to GitHub > Settings > Developer settings > Personal access tokens > Tokens (classic) > Generate new token.
    - Select the `repo` scope
    - Set a short expiration date (one day?)
    - Generate the token. Copy and save it securely (do not share it).
1. **Enter PAT to finalize to cloning the repository**:
    - When prompted for a password, paste your PAT.
1. **Verify Cloning**:
    - Run `pushd <repository>`
        - Example: `pushd MyProject`
    - Run `ls` to see the cloned project folder.

</details>

## Using Visual Studio 2022 with WSL
<details>
<summary>Click to expand: Open and debug projects in Visual Studio 2022</summary>

To edit, build, and debug your C/C++ project, connect Visual Studio 2022 to WSL.

1. **Install Linux Development Workload**:
    - Open Visual Studio Installer (search for it in the Start menu).
    - Ensure the "Linux and embedded development with C++" workload is installed. If not, select it, click "Modify," and install it.
2. **Open the Project in Visual Studio 2022**:
    - Launch Visual Studio 2022.
    - Go to `File > Open > Folder...`.
    - Enter the path to your project in WSL: `C:\Users\<your-windows-username>\<path to the repository>`
    - Example: `C:\Users\student\source\repos\MyProject`
    - Visual Studio will detect the WSL environment and connect (look for "Connecting to WSL" in the status bar).
3. **Build and Run**:
    - In the toolbar, select the WSL target from the "Startup Item" dropdown.
    - Click the green "Run" button to compile and run the code. Output appears in the "Linux Console" window.
4. **Debugging**:
    - Click next to a line number in the code editor to set a breakpoint (a red dot appears).
    - Start debugging by selecting "Debug" mode and clicking the green "Run" button.
    - Use <kbd>F10</kbd> (step over) or <kbd>F11</kbd> (step into) to execute code line by line.
    - Check variable values by hovering over them or using the "Watch" window.
    - View the call stack in the "Call Stack" window to see function relationships.

</details>

## NOTICE REGARDING STUDENT SUBMISSIONS
* Your submissions for this assignment may be used for various educational purposes. These purposes may include developing and improving educational tools, research, creating test cases, and training datasets.
* The submissions will be anonymized and used solely for educational or research purposes. No personally identifiable information will be shared.
* If you do not wish to have your submission used for any of these purposes, please inform the instructor before the assignment deadline.

## Acknowledgments
* Copyright © 2025 Kangwon Lee. Registered at the Korea Copyright Commission under #C-2025-027967 (as one of derivative works from original registration #C-2025-016393).
* Various LLMs and AI tools helped implement the templates for this assignment.
    - Google Gemini
    - xAI Grok
    - Claude.ai
    - Perplexity

``Until here is common to all assignments.``
