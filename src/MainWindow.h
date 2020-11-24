#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Planner.h"

namespace Ui {
    class Planner;
}

class Planner : public QMainWindow
{
    Q_OBJECT

public:
    explicit Planner(QWidget* parent = Q_NULLPTR);
    ~Planner();

private:
    Ui::PlannerClass ui;

    static const int initWidth = 1080;
    static const int initHeight = 720;

    QWidget* centralWidget = new QWidget;
};
