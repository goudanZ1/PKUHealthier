#include <QApplication>
#include <frontend/login.cpp>
#include "./backend/cafeteria.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login* loginpage=new Login;

    loginpage->show();
    return a.exec();
    // Man *pm = new Man();
    // pm->load();
    // pm->save();
}
