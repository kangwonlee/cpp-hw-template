# C++ User Input Arithmetic Assignment

## Purpose:
Learn to handle user input in C++ using `cin` and `cout`, perform type conversion, and execute arithmetic operations with formatted output.

## Description:
This assignment introduces C++ programming for mechanical engineering freshmen by incorporating user input. You will write a program that prompts the user to enter two integers and two floating-point numbers, performs arithmetic operations (addition, subtraction, and multiplication), and prints the results in a specific format.

## Exercise Files:
| Folder | File Name   | Description |
|:------:|:-----------:|:-----------:|
| `src`  | `main.cpp`  | Implement the main function to handle input, perform arithmetic, and print results |

## Math Operators:
| Operator | Description       | Example       |
|:--------:|:-----------------:|:-------------:|
| `+`      | Addition          | `a + b`       |
| `-`      | Subtraction       | `a - b`       |
| `*`      | Multiplication    | `a * b`       |

## Instructions:
1. **Implement the program**:
   - In `src/main.cpp`, write a C++ program that:
     - **Prompts the user**:
       - Use `cout` to display clear prompts before reading input:
         - For integers: `"Enter two integers (a b): "`
         - For floats: `"Enter two floats (c d): "`
       - This ensures the user knows to input two numbers separated by a space.
     - Uses `cin` to read inputs.
     - Stores `a` and `b` as `int` and `c` and `d` as `float`.
     - **First Separator**: Right after reading inputs for `a`, `b`, `c`, and `d`, print a separator line using `cout << "##########\n";`.
     - Performs arithmetic operations (`+`, `-`, `*`) on `a` and `b`, then on `c` and `d`.
     - **Second Separator**: Print another separator line using `cout << "##########\n";` between `int` and `float` results.
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
     - Use `std::fixed` and `std::setprecision(2)` for `float` outputs to ensure two decimal places.
   - Include `<iostream>` for `cin` and `cout`, and `<iomanip>` for `fixed` and `setprecision`.
   - Use `using namespace std;` to simplify code for beginners.
2. **Set up a C++ compiler**:
   - **Linux**: Install `build-essential` using `sudo apt install build-essential`.
   - **macOS**: Install Xcode command-line tools with `xcode-select --install`.
   - **Windows**: Install MinGW or Visual Studio (Community Edition).
3. **Compile and run**:
   - Compile: `g++ -o input_arithmetic src/main.cpp` (or use Visual Studio IDE).
   - Run: `./input_arithmetic`

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
- Use `cin` to read inputs: `cin >> a >> b;` for two integers.
- For `float` output, include `<iomanip>` and use `cout << fixed << setprecision(2);`.
- Debug with `gdb`: `gdb ./input_arithmetic`, set `break main`, then `run`.
  - Visual Studio Code also has a debugger.

**Happy coding!**

## Grading Criteria:
| Criteria | Points |
|:--------:|:------:|
| Is the build successful? | 2 |
| Does the code follow coding style? | 1 |
| Does the result match the expectation? | 2 |

``From here is common to all assignments.``

## Submission
1. Modify the contents of the required file per instructions.
    * Only modify `main.c` (or `main.cpp`) file in most of the cases.
    * Do not change files unless explicitly instructed so.
    * Especially ones under `.github/` folder and `README.md` must be preserved.
1. Use the GitHub online editor to commit and push your changes. (See below for detailed instructions)
1. At the Actions tab of your GitHub repository, please check the result.
    * The Actions tab shows whether your code passes automated tests.

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

1. Update the Windows (11 or higher) to the latest version.
    - Open Settings > Windows Update > Check for updates.
1. **Enable WSL**:
    - Open Control Panel > Programs > Turn Windows features on or off.
    - Check "Windows Subsystem for Linux" and "Virtual Machine Platform". Click OK and restart your computer if prompted.
1. **Install WSL and Ubuntu**:
    - Open PowerShell as Administrator (search for "PowerShell" in the Start menu, right-click, and select "Run as administrator").
    - Ensure you have an internet connection.
    - Run the command: `wsl --install`
        - This downloads and installs WSL.
    - Restart your computer when prompted.
    - Start the PowerShell again as an Administrator again.
    - **Optional**
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
    - In the Ubuntu terminal, run the following commands in order. When prompted for a password in Ubuntu, enter the Linux password you set during Ubuntu setup.:
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
        - In WSL, `/mnt/c/` corresponds to the `C:\` drive in Windows.
        - In Windows, `\\wsl$\Ubuntu-22.04\` will access the WSL file system.
    - Run `ls -l` to list files and folders.
        - If `source/` folder does not exist, run `mkdir source` to create the folder.
    - Run `pushd source` to go to the `source/` folder.
    - **Optional**
        - Run `ls -l` to list files and folders.
            - If `repos/` folder does not exist, run `mkdir repos` to create the folder.
        - Run `pushd repos` to go to the `repos/` folder.
1. **Start cloning the Repository**:
    - Go to your assignment repository on GitHub in a web browser.
    - Copy the repository URL (starting from `https`).
    - Run: `git clone https://<your-github-username>@github.com/<organization>/<repository>.git`
        - As the repository URL can be complicated, you may paste the copied URL after `git clone `.
        - Example: `git clone https://student123@github.com/MyOrg/MyProject.git` for repository url `https://github.com/MyOrg/MyProject.git`.
    - When prompted for a username, enter your GitHub username.
    - When prompted for a password, follow the next step to create a Personal Access Token (PAT).
1. **Create a GitHub Personal Access Token (PAT)**:
    - Go to GitHub > Settings > Developer settings > Personal access tokens > Tokens (classic) > Generate new token.
    - Select the `repo` scope
    - Set a short expiration date (one day?)
    - Generate the token. Copy and store it securely (do not share it).
        - As it will not be shown again, you may consider to store it in a password manager or a secure note.
        - Never store this in a plain text file.
    - **If used in a shared or public computer, before leaving the computer, make sure to delete it from the GitHub.com Developer settings.**
1. **Enter PAT to finalize to cloning the repository**:
    - When prompted for a password, paste your PAT.
1. **Verify Cloning**:
    - Run `pushd <repository>`
        - Example: `pushd MyProject`
    - Run `ls` to see the cloned project folder.
1. You can now edit files locally and use Git commands to manage your changes.
1. After making changes, use the following commands to commit and push your changes:
    ```sh
    git add <file>
    git commit -m "Your descriptive commit message"
    git push origin main
    ```
    * Replace `<file>` with the name of the file you modified.
    * If you are using a different branch, replace `main` with your branch name in the `git push` command.
1. If you encounter any issues, refer to the [GitHub documentation](https://docs.github.com/en/get-started/quickstart/set-up-git) for troubleshooting.
1. If you want to stop caching your credentials, you can run:
    ```sh
    git config --global --unset credential.helper
    ```
1. After finishing your work, you can delete the cloned repository from your local machine.
    ```sh
    popd
    rmdir -rf <repository>
    ```

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
