#include "notification.h"
#include <shellapi.h>
/*NotificationWidget::NotificationWidget(QWidget *parent) : QWidget(parent)
{
    label = new QLabel(this);
    layout = new QVBoxLayout(this);
    layout->addWidget(label);
    setLayout(layout);
}

void NotificationWidget::setMessage(const QString &message)
{
    label->setText(message);
adjustSize();
    int x = parentWidget()->width() - width() - 740;
    int y = 10;
    move(x, y);

    QTimer::singleShot(5000, this, &QWidget::close);
}
*/

void NotificationWidget::sendWindowsNotification(const std::wstring &title, const std::wstring &message) {
    // Define and configure the notification
    NOTIFYICONDATA nid = {};
    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.hWnd = NULL; // No associated window
    nid.uFlags = NIF_INFO; // Use the balloon tip for notification

    // Set the title and message
    wcsncpy_s(nid.szInfoTitle, title.c_str(), sizeof(nid.szInfoTitle) / sizeof(WCHAR));
    wcsncpy_s(nid.szInfo, message.c_str(), sizeof(nid.szInfo) / sizeof(WCHAR));

    // Set the notification timeout and type
    nid.uTimeout = 5000; // Duration in milliseconds (5 seconds)
    nid.dwInfoFlags = NIIF_INFO; // Information icon

    // Display the notification
    Shell_NotifyIcon(NIM_ADD, &nid);

    // Clean up the notification (optional but recommended)
    Shell_NotifyIcon(NIM_DELETE, &nid);
}
