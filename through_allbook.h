#ifndef THROUGH_ALLBOOK_H
#define THROUGH_ALLBOOK_H

#include <QWidget>
#include <QTextEdit>
#include <Control.h>
namespace Ui {
class Through_allBook;
}

class Through_allBook : public QWidget,public Control
{
    Q_OBJECT

public:
    explicit Through_allBook(QWidget *parent = nullptr);
    ~Through_allBook();

private slots:
    void on_Quit_clicked();

private:
    Ui::Through_allBook *ui;
    QTextEdit * win;
};

#endif // THROUGH_ALLBOOK_H
