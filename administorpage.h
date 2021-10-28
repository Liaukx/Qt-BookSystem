#ifndef DIALOG_H
#define DIALOG_H

#include <QTextLine>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QString>
#include <QMessageBox>
#include "control_adm.h"
#include "control_custom.h"
namespace Ui {
class AdministorPage;
}

class AdministorPage : public QWidget
{
    Q_OBJECT

public:
    explicit AdministorPage(QWidget *parent = nullptr);
    ~AdministorPage();
private slots:
    void on_adm_sure_clicked();
private:
    Ui::AdministorPage *ui;
    QLineEdit * in_adm;
    QLabel * adm_info;
    QPushButton * adm_sure;
    Control_adm * new_adm;

};

#endif // DIALOG_H


