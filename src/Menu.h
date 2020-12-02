#pragma once

#include "ui_Planner.h"

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QMenuBar>

class Menu : public QMenu {
	Q_OBJECT

public:
	explicit Menu(QMenu* parent = Q_NULLPTR);
	~Menu();
};