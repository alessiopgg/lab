//
// Created by Alessio on 24/09/2023.
//

#include "Activity.h"

Activity::Activity(string na, string no) : name(na), note(no), status(false) {}

const string &Activity::getName() const {
    return name;
}

void Activity::setName(const string &name) {
    Activity::name = name;
}

const string &Activity::getNote() const {
    return note;
}

void Activity::setNote(const string &note) {
    Activity::note = note;
}

bool Activity::isStatus() const {
    return status;
}

void Activity::setStatus(bool status) {
    Activity::status = status;
}
