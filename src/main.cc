#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationName("Patryk Wasiewicz");
    app.setApplicationName("UpdatezipCreator");

    return app.exec();
}
