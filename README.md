# Hangman in C++ 🎮

A classic console-based Hangman game developed in C++, featuring an interactive ASCII art interface. It includes multiple difficulty levels, a category system (fruits, movies, video games, etc.), and a keyboard-navigable menu.

## ⚠️ Important Configuration (For Windows 11 Users)

The game uses window resizing commands (`mode con` and `SetConsoleWindowInfo`) to ensure the ASCII art renders at the exact size (130x45). 

Modern versions of Windows use the new **Windows Terminal** by default, which blocks these automatic window resizes. To enjoy the game without a distorted interface, make sure to configure the classic console:

1. Open any command line window or run the game.
2. If it opens with tabs at the top, click the down arrow (`v`) in the tab bar and select **Settings** (`Ctrl + ,`).
3. In the Startup section, look for **Default terminal application**.
4. Change the option to **Windows Console Host**.
5. Save the changes, close the window, and run the game again. You're all set!

## 🛠️ Technologies & Compilation
* **Language:** C++ (C++11 standard or higher).
* **Recommended Compiler:** Microsoft Visual C++ 2017 (MSVC) or MinGW (GNU GCC).
* **IDE:** Code::Blocks / Visual Studio.
