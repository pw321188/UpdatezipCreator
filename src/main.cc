#include <QApplication>
#include "views/main_view_cb.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    /* set author data */
    app.setOrganizationName("Patryk Wasiewicz");
    app.setApplicationName("UpdatezipCreator");

    /* set application properties */
    app.setQuitOnLastWindowClosed(true);


    MainViewCb mw;
    mw.show();

    return app.exec();
}
