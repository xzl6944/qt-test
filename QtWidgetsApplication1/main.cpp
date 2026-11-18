#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    //45465
    //测试强制 IPv4 配置是否生效
    QApplication app(argc, argv);
    QtWidgetsApplication1 window;
    window.show();
    return app.exec();
}
