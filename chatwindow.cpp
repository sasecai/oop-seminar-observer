//
// Created by Razvan Uzum on 07.06.2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ChatWindow.h" resolved

#include "chatwindow.h"
#include "ui_ChatWindow.h"
#include "ChatSession.h"
#include <string>
using namespace std;

ChatWindow::ChatWindow(ChatSession* chatSesh, QWidget *parent) :
        QWidget(parent), ui(new Ui::ChatWindow), chatSession(chatSesh) {
    ui->setupUi(this);
    this->chatSession->registerObserver(this);
}

ChatWindow::~ChatWindow() {
    this->chatSession->unregisterObserver(this);
    delete ui;
}

void ChatWindow::update() {
    vector<message> messageHistory = this->chatSession->getMessages();
//    this->ui->listView->reset();
    this->ui->listWidget->clear();
    for(auto message : messageHistory)
        this->ui->listWidget->addItem(
                QString::fromStdString( message.first + ": " + message.second ));
}

void ChatWindow::sendMessage() {
    string user = this->ui->usernameLineEdit->text().toStdString();
    string message = this->ui->messageLineEdit->text().toStdString();
    this->chatSession->addMessage(user, message);
    this->ui->messageLineEdit->setText(QString());
//    (Subject*)(this->chatSession)->registerObserver((Observer*)this);
//    this->chatSession->notify();
}