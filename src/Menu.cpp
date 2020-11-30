#include "Menu.h"

Menu::Menu(QWidget* parent) :
	QWidget(parent) {
}

Menu::~Menu() {}

void Menu::setMenuBar() {
	menuPlanner = menuBar()->addMenu("Planner");
	menuPlanner->addAction(quitAll);

	MainWindow::connect(quitAll, &QAction::trigger, qApp, QApplication::quit);
}