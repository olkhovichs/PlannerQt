#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
    ui.setupUi(this);

    resize(initWidth, initHeight);
    setWindowTitle("Planner");
    setWindowIcon(QIcon("img\\windowIcon.png"));

    this->setCentralWidget(centralWidget);
}

MainWindow::~MainWindow() {};