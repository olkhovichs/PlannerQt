#pragma once

#include <QWidget>
#include <QMenu>
#include <QAction>

namespace Ui {
	class Menu;
}

class Menu : public QWidget {
	Q_OBJECT

public:
	explicit Menu();
	~Menu();

private:
	QMenu* menu = new QMenu;

	QAction* quitAll = new QAction("Quit", this);
};
