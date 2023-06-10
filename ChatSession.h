//
// Created by Razvan Uzum on 07.06.2023.
//

#ifndef OBERVERPATTERN_CHATSESSION_H
#define OBERVERPATTERN_CHATSESSION_H

#include "Subject.h"
#include <string>
#include <vector>
typedef std::pair< std::string, std::string > message;

class ChatSession : public Subject {
protected:
    std::vector<message> messageHistory;
public:
    ChatSession() {}
    void addMessage(std::string user, std::string msgText) {
        messageHistory.push_back(std::make_pair(user, msgText));
        notify();
    }
    std::vector<message> getMessages() {
        return messageHistory;
    }
    ~ChatSession() {}
};


#endif //OBERVERPATTERN_CHATSESSION_H
