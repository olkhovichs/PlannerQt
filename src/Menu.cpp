#include "Menu.h"

Menu::Menu(QWidget* parent) :
	QWidget(parent) {
}

Menu::~Menu() {}

void Menu::setMenuBar() {
	menuPlanner = menuBar()->addMenu("Planner");
	menuPlanner->addAction(quitAll);

	QMenu::connect(quitAll, &QAction::trigger, qApp, QApplication::quit);
}