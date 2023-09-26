//
// Created by Alessio on 24/09/2023.
//

#ifndef LAB_LIST_H
#define LAB_LIST_H

#include "Activity.h"
#include<map>

class List {
private:
    multimap<int, Activity> list;
    int numberOfActivity;

public:

    explicit List(const multimap<int, Activity> &list);

    void addActivity();

    int getNumberOfActivity() const;

    void setNumberOfActivity(int numberOfActivity);

};


#endif //LAB_LIST_H
