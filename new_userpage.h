#ifndef NEW_USERPAGE_H
#define NEW_USERPAGE_H

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include "custompage.h"
#include "Control.h"
#include "Load.h"
namespace Ui {
class new_Userpage;
}

class new_Userpage : public QWidget
{
    Q_OBJECT

public:
    explicit new_Userpage(QWidget *parent = nullptr);
    ~new_Userpage();

private slots:
    void on_sure_clicked();

    void on_in_id_editingFinished();

private:
    Ui::new_Userpage *ui;
    QString id;
    QLabel * id_info , *user_info, * key_info;
    QLineEdit * in_id, * in_key;
    QPushButton *sure;
};

#endif // NEW_USERPAGE_H
