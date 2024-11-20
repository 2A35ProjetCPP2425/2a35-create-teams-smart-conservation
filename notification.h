#ifndef NOTIFICATION_H
#define NOTIFICATION_H
#include <QTimer>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <windows.h>
#include <string>

class NotificationWidget : public QWidget
{
    Q_OBJECT

public:
   // explicit NotificationWidget(QWidget *parent = nullptr);
   // void setMessage(const QString &message);
    static void sendWindowsNotification(const std::wstring &title, const std::wstring &message);
private:
    QLabel *label;
    QVBoxLayout *layout;
};

#endif // NOTIFICATION_H
