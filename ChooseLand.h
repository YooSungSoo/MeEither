#ifndef CHOOSELAND_H
#define CHOOSELAND_H

#include <QWidget>
#include "ChatRoomList.h"

namespace Ui {
class ChooseLand;
}

class ChooseLand : public QWidget {
    Q_OBJECT

public:
    explicit ChooseLand(const QString &nickname, QWidget *parent = nullptr);
    ~ChooseLand();

private slots:
    void onContinentSelected();

private:
    Ui::ChooseLand *ui;
    QString nickname;
};

#endif // CHOOSELAND_H
