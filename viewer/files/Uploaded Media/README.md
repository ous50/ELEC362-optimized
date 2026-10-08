# ELEC362-optimized

This repo stores my ELEC362 notes and optimized codes for students not using MSVC toolchain and Windows system.

## Preparartion
**You dont' need to install any other toolchain if you are using lab computers.**

MSVC toolchain is equipped with Visual Studio IDE, which has been deployed in the lab computers in UoLiv.

>[!WARNING]
>If you are using windows system as a beginner, **it is strongly recommended to use MSVC toolchain and Visual Studio IDE, as per the course recommendation.** 
>However, if you are using Linux or MacOS system, or you are an advanced user who wants to use other toolchains, you can follow the steps below to prepare your environment.

### For G++ windows users


 It is recommended to use [Mingw-w64](https://www.mingw-w64.org/) as your g++ compiler. You can download the installer from [here](https://sourceforge.net/projects/mingw-w64/files/latest/download). 

>[!NOTE]
> There's another popular choice for g++ windows users, [MSYS2](https://www.msys2.org/), which is a more complete development environment. However, it is not recommended for beginners as it requires more configuration and may cause compatibility issues with some libraries. I would recommend using WSL (Windows Subsystem for Linux) if you want to use MSYS2, as it is more stable and easier to use.

After installation, add the `bin` folder of your Mingw-w64 installation to your system PATH.

If you are using scoop to manage your packages, you can install Mingw-w64 by running the following command in PowerShell:

```powershell
scoop install mingw
```

```powershell
sudo scoop install -g mingw #if you want to install it globally
```

>[!NOTE]
> - Make sure to restart your terminal after installation to apply the changes to the PATH.
> - If you are in a network with restricted access, you may need to configure your proxy settings/use a different source (e.g. [ous' scoop-cn bucket](https://github.com/ous50/scoop-cn)) for scoop to work properly.

### For macOS users

If you use
