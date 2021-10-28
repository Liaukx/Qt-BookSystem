#ifndef CUSTOMPAGE_H
#define CUSTOMPAGE_H

#include "Control.h"
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include "control_custom.h"


namespace Ui {
class Custompage;
}
class Control_custom;
class Custompage :public QWidget,public Control{
    Q_OBJECT

public:
    explicit Custompage(QWidget *parent = nullptr);
    ~Custompage();
    void custom_login();
    void new_custom_login();
private slots:
    void on_sure_clicked();

private:
    Ui::Custompage *ui;
    QLabel * id_info;
    QLineEdit *in_id;
    QPushButton * sure;
    QString id ;
    Control_custom * control_custom;
};

#endif // CUSTOMPAGE_H
