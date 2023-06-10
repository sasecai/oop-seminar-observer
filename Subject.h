//
// Created by Razvan Uzum on 07.06.2023.
//

#ifndef OBERVERPATTERN_SUBJECT_H
#define OBERVERPATTERN_SUBJECT_H

//#include "ChatSession.h"
#include "Observer.h"
#include <vector>
class Subject{
private:
    std::vector<Observer*> observers;
public:
    Subject();
    void registerObserver(Observer* obs) {
        observers.push_back(obs);
    }
    void unregisterObserver(Observer* obs) {
//        observers.erase(obs);
        for(std::vector<Observer*>::iterator it = observers.begin(); it != observers.end(); it ++) {
            if(*it == obs) {
                observers.erase(it);
                break;
            }
        }
    }
    void notify() {
        for(auto u : observers) {
            u->update();
        }
    }
    virtual ~Subject();
};


#endif //OBERVERPATTERN_SUBJECT_H
