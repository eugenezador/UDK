#ifndef UDK_H
#define UDK_H

#include <QMainWindow>
#include "fight.h"
#include "expert.h"

QT_BEGIN_NAMESPACE
namespace Ui { class udk; }
QT_END_NAMESPACE

class udk : public QMainWindow
{
    Q_OBJECT

public:
    udk(QWidget *parent = nullptr);
    ~udk();

private slots:
    void on_expert_mode_clicked();

    void on_fight_mode_clicked();

private:
    Ui::udk *ui;

    Fight *fight_window;
    Expert *expert_window;
};
#endif // UDK_H
