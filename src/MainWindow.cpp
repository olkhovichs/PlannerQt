#include "MainWindow.h"
#include "Menu.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent) {
    ui.setupUi(this);

    resize(initWidth, initHeight);
    setWindowTitle("Planner");
    setWindowIcon(QIcon("img\\windowIcon.png"));

    this->setCentralWidget(centralWidget);

    Menu menuBar;
    menuBar.setMenuBar();

    // set background color 
    /*QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    centralWidget->setAutoFillBackground(true);
    centralWidget->setPalette(pal);*/

}

MainWindow::~MainWindow() {}