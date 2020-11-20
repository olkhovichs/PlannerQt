#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Planner.h"

class Planner : public QMainWindow
{
    Q_OBJECT

public:
    Planner(QWidget *parent = Q_NULLPTR);

private:
    Ui::PlannerClass ui;
};
