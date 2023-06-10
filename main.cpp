#include <iostream>
#include "chatwindow.h"
#include <QtWidgets/QApplication>
#include "ChatSession.h"

int main(int argc, char** argv) {
    QApplication a(argc, argv);
    ChatSession* newChatSession = new ChatSession();
    ChatWindow* cw = new ChatWindow(newChatSession);
    ChatWindow* cw2 = new ChatWindow(newChatSession);
    ChatWindow* cw3 = new ChatWindow(newChatSession);
    cw->show();
    cw2->show();
    cw3->show();
    return a.exec();
//    return 0;
}
