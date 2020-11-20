#include "Planner.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Planner w;
    w.show();
    return a.exec();
}
