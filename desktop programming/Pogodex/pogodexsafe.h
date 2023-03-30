#ifndef POGODEXSAFE_H
#define POGODEXSAFE_H

#include <QMainWindow>

namespace Ui {
class pogodexsafe;
}

class pogodexsafe : public QMainWindow
{
    Q_OBJECT

public:
    explicit pogodexsafe(QWidget *parent = nullptr);
    ~pogodexsafe();

private:
    Ui::pogodexsafe *ui;
};

#endif // POGODEXSAFE_H
