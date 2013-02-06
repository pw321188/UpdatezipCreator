#ifndef MAIN_VIEW_H
#define MAIN_VIEW_H

#include <QtGui>

class MainView: public QMainWindow
{
    /* neccessary for events */
    Q_OBJECT

    private:

    public:

        QGridLayout *main_layout;

        QSize sizeHint () const
        {
            return QSize(650, 450);
        }

    protected:

        MainView(QWidget *parent = 0): QMainWindow(parent)
        {

        }


};

#endif /* MAIN_VIEW_H */
