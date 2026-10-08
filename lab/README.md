## Compile and run a lab

Start in the repository root, then change into the relevant week's directory. These examples use Week 2.

### Windows PowerShell

```powershell
cd lab/week2
g++ -Wall -Wextra calculate-square.cpp -o calculate-square.exe
if ($LASTEXITCODE -eq 0) { .\calculate-square.exe }
```

The final line runs the program only if compilation succeeded.

### Linux or MSYS2 UCRT64

```bash
cd lab/week2
g++ -Wall -Wextra calculate-square.cpp -o calculate-square && ./calculate-square
```

### macOS

```bash
cd lab/week2
clang++ -Wall -Wextra calculate-square.cpp -o calculate-square && ./calculate-square
```

or 

```bash
cd lab/week2
g++ -Wall -Wextra calculate-square.cpp -o calculate-square && ./calculate-square
```

`-Wall -Wextra` enables useful compiler warnings. Each example above builds one source file into one executable; later exercises with additional libraries may need different build commands.

## Input and output files

The Week 2 program asks for an input filename. Press Enter to use `W2_ExerciseData.csv`, or enter another filename or path, for example:

```text
../week1/W1_ExerciseData.csv
```

Relative paths are resolved from the program's **current working directory**, not automatically from the location of the source file or executable. Running the program from `lab/week2` makes the example above point to the Week 1 data file.

The current program writes to `result.csv` in the working directory and overwrites its previous contents. Choose a different file as input; do not use `result.csv` as both input and output.