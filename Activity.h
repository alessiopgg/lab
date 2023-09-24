//
// Created by Alessio on 24/09/2023.
//

#include<iostream>

#ifndef LAB_ACTIVITY_H
#define LAB_ACTIVITY_H


using namespace std;

class Activity {
private:
    string name;
    string note;
    bool status;

public:
    Activity(string name, string note);

    const string &getName() const;

    void setName(const string &name);

    const string &getNote() const;

    void setNote(const string &note);

    bool isStatus() const;

    void setStatus(bool status);

};


#endif //LAB_ACTIVITY_H
