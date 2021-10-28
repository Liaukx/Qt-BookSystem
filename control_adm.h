#ifndef CONTROL_ADM_H
#define CONTROL_ADM_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "add_book.h"
#include "delete_book.h"
#include "through_allbook.h"
namespace Ui {
class Control_adm;
}

class Control_adm : public QWidget
{
    Q_OBJECT

public:
    explicit Control_adm(QWidget *parent = nullptr);
    ~Control_adm();

private slots:
    void on_Add_clicked();
    void receiveLogin();
    void on_Delete_clicked();
    
    void on_Through_clicked();
    
    void on_Exit_clicked();
    
private:
    Ui::Control_adm *ui;
    QPushButton * Add,*Delete , *Through,*Exit;
    Add_book * add_book;
    Delete_book * delete_book;
    Through_allBook * through_allBook;
};

#endif // CONTROL_ADM_H
