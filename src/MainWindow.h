#pragma once

#include <QtWidgets/QMainWindow>

#include <QPalette>

#include "ui_Planner.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = Q_NULLPTR);
    ~MainWindow();

private:
    Ui::PlannerClass ui;

    static const int initWidth = 1080;
    static const int initHeight = 720;

    QWidget* centralWidget = new QWidget;
};
