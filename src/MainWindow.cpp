#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent) {
    ui.setupUi(this);

    resize(initWidth, initHeight);
    setWindowTitle("Planner");
    setWindowIcon(QIcon("img\\windowIcon.png"));

    this->setCentralWidget(centralWidget);

    setMenuBar();




    // set background color 
    /*QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    centralWidget->setAutoFillBackground(true);
    centralWidget->setPalette(pal);*/
}

MainWindow::~MainWindow() {}

void MainWindow::setMenuBar() {
    menuPlanner = menuBar()->addMenu("Planner");
    menuPlanner->addAction(quitPlanner);
    connect(quitPlanner, &QAction::triggered, qApp, QApplication::quit);
    //connect(quitButton, &QPushButton::clicked, qApp, &QApplication::quit);
}