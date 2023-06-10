//
// Created by Razvan Uzum on 07.06.2023.
//

#ifndef OBERVERPATTERN_CHATWINDOW_H
#define OBERVERPATTERN_CHATWINDOW_H

#include <QWidget>
#include "ChatSession.h"
#include "Observer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ChatWindow; }
QT_END_NAMESPACE

class ChatWindow : public QWidget, public Observer {
    Q_OBJECT

public:
    explicit ChatWindow(ChatSession* chatSesh, QWidget *parent = nullptr);

    ~ChatWindow() override;

private:
    Ui::ChatWindow *ui;
    ChatSession* chatSession;
public slots:
    void update() override;
    void sendMessage();
};


#endif //OBERVERPATTERN_CHATWINDOW_H
