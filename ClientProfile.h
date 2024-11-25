#ifndef CLIENTPROFILE_H
#define CLIENTPROFILE_H

#include <QWidget>

namespace Ui {
class ClientProfile;
}

class ClientProfile : public QWidget {
    Q_OBJECT

public:
    explicit ClientProfile(const QString &nickname, QWidget *parent = nullptr);
    ~ClientProfile();

private:
    Ui::ClientProfile *ui;
};

#endif // CLIENTPROFILE_H
