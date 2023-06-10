//
// Created by Razvan Uzum on 07.06.2023.
//

#ifndef OBERVERPATTERN_OBSERVER_H
#define OBERVERPATTERN_OBSERVER_H


class Observer {
public:
    Observer() {}
    virtual void update() = 0;
    virtual ~Observer() {}
};


#endif //OBERVERPATTERN_OBSERVER_H
