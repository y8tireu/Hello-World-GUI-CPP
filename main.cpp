#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    // Initialize the Qt application
    QApplication app(argc, argv);
    
    // Create a push button widget
    QPushButton button("Hello, GUI World!");
    button.resize(200, 100);  // Set the size of the button
    button.show();            // Display the button
    
    // Enter the main event loop
    return app.exec();
}

