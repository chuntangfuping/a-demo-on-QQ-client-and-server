#include "widget.h"
#include "QApplication"
#include "drawer.h"
#include "logindialog.h"
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Drawer drawer;
    drawer.resize(550,700);

    if(!createConnection()||!createXml())return 0;

    LoginDialog dlg;
    if(dlg.exec()==QDialog::Accepted){
        //w.show();
        drawer.show();
        return a.exec();
    }else{
        return 0;
    }

    //return a.exec();
}
