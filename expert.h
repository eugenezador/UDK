#ifndef EXPERT_H
#define EXPERT_H

#include <QDialog>

namespace Ui {
class Expert;
}

class Expert : public QDialog
{
    Q_OBJECT

public:
    explicit Expert(QWidget *parent = nullptr);
    ~Expert();

private:
    Ui::Expert *ui;
};

#endif // EXPERT_H
