# ELEC362-optimized

My ELEC362 notes and adapted C++ lab code, with setup instructions for students using compilers other than MSVC or operating systems other than Windows.

This is a personal learning repository. The examples and notes are a work in progress; “optimized” here mainly means making the code easier to work with outside the lab environment, rather than promising better performance.

## Preparation

**If you are using the lab computers, you can use the existing Visual Studio setup. You do not need to install another toolchain.**

> [!TIP]
> If you are new to C++ and use Windows, following the course's Visual Studio and MSVC setup will make it easier to follow demonstrations and get help in the lab. The alternatives below are for working on your own computer.

An editor, a compiler, and a shell do different jobs: the editor is where you write code, the compiler builds it, and the shell is where you run commands. Installing an editor alone does not necessarily install a C++ compiler.

### Windows with GCC / MinGW-w64

Choose one of the following routes.

#### If you already use Scoop

Install the [MinGW package](https://github.com/ScoopInstaller/Main/blob/master/bucket/mingw.json) from PowerShell:

```powershell
scoop install mingw
```

Open a new terminal and check that the compiler is available:

```powershell
g++ --version
```

A normal per-user installation is enough for these exercises; a global installation is not required. If you do not have Scoop, see the [Scoop installation instructions](https://scoop.sh/) or use MSYS2 below.

> [!NOTE]
> If downloads are blocked on your network, check your proxy settings or package source. My [scoop-cn bucket](https://github.com/ous50/scoop-cn) is another resource for users working with restricted network access.

#### Using MSYS2

[MSYS2](https://www.msys2.org/) provides a Windows development environment and a package manager. It does not require WSL.

For an x64 Windows setup, follow the official installer instructions, open **MSYS2 UCRT64**, and install GCC:

```bash
pacman -S mingw-w64-ucrt-x86_64-gcc
g++ --version
```

You can compile and run the exercises in that terminal. To use this compiler from PowerShell instead, add the installation's `ucrt64\bin` directory to your user `PATH` (normally `C:\msys64\ucrt64\bin`) and open a new PowerShell window.

If you already have another GCC installation, check `Get-Command g++` in PowerShell to see which one you are using.

### macOS

Install Apple's Command Line Tools from Terminal:

```bash
xcode-select --install
```

Complete the installation dialog, then check the C++ compiler:

```bash
clang++ --version
```

You may also use `g++` since it is also supported by apple clang:

```bash
g++ --version
```

Use `clang++` for the examples below. You do not need to install the full Xcode IDE for these command-line exercises. See [Apple's installation guide](https://developer.apple.com/documentation/xcode/installing-the-command-line-tools) for details.

### Linux

On Ubuntu or Debian, install GCC and the usual build tools:

```bash
sudo apt update
sudo apt install build-essential
g++ --version
```

On other distributions, install the C++ compiler through your distribution's package manager. Package names and installation commands may differ.

If you use WSL with Ubuntu, run these commands inside Ubuntu and follow the Linux build instructions below.

## Repository layout

- `lab/week1/` — Week 1 exercises and data.
- `lab/week2/` — Week 2 exercises, data, and [my notes](lab/week2/note.md).
- `viewer/` and `index.html` — course-material viewer and its supporting files.

