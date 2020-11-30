#pragma once

#include "ui_Planner.h"
#include "MainWindow.h"

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QMenuBar>

class Menu : public QWidget, public MainWindow {
	Q_OBJECT

public:
	explicit Menu(QWidget* parent = Q_NULLPTR);
	~Menu();

	void setMenuBar();

	QMenu* menuPlanner = new QMenu;
	QAction* quitAll = new QAction("Quit");
};
