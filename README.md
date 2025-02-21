# Simple Qt GUI Program

This project is a basic GUI application written in C++ using the Qt framework. The program creates a window with a button labeled **"Hello, GUI World!"**.

## Code Overview

The main source file (`main.cpp`) contains the following code:

```cpp
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    // Initialize the Qt application
    QApplication app(argc, argv);
    
    // Create a push button widget with text
    QPushButton button("Hello, GUI World!");
    button.resize(200, 100);  // Set the size of the button
    button.show();            // Display the button
    
    // Enter the main event loop
    return app.exec();
}
```

## Prerequisites

Before building the application, ensure you have the following installed:
- **Qt Framework:** You can download and install it from the [Qt website](https://www.qt.io/download).
- **qmake:** This is typically included with the Qt installation.
- A C++ compiler (e.g., `g++`).

## Building the Application

You can build the project using either **qmake** with a `.pro` file or **CMake**. Below are the instructions for both:

### Using qmake

1. **Create a project file (`gui.pro`):**

   ```pro
   QT += widgets
   CONFIG += c++11
   SOURCES += main.cpp
   ```

2. **Run qmake to generate a Makefile:**

   ```bash
   qmake gui.pro
   ```

3. **Build the project:**

   ```bash
   make
   ```

4. **Run the executable:**

   ```bash
   ./gui   # On Linux/macOS or gui.exe on Windows
   ```

### Using CMake

1. **Create a `CMakeLists.txt` file with the following content:**

   ```cmake
   cmake_minimum_required(VERSION 3.5)
   project(SimpleGUI)

   set(CMAKE_CXX_STANDARD 11)

   find_package(Qt5 COMPONENTS Widgets REQUIRED)

   add_executable(SimpleGUI main.cpp)
   target_link_libraries(SimpleGUI Qt5::Widgets)
   ```

2. **Build the project:**

   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. **Run the executable:**

   ```bash
   ./SimpleGUI   # On Linux/macOS or SimpleGUI.exe on Windows
   ```

## Running the Application

After building the project, execute the generated binary. You should see a window appear with a button labeled **"Hello, GUI World!"**. This simple example can be extended to create more complex GUI applications using Qt.
