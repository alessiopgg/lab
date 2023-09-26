//
// Created by Alessio on 24/09/2023.
//

#include "List.h"

List::List(const multimap<int, Activity> &list) : list(list), numberOfActivity(0) {}

void List::addActivity() {
    //TODO:metodo per aggiungere un'attività alla lista, a cui dobbiamo dare un nome,note...
    // idea creare un interfaccia per inserirlo a schermo,una sorta di casella che poi lo associa agli attributi

    string name, note;//variabili da assegnare alla creazione

    Activity activity(name, note); //crea nuova attività
    list.insert(make_pair(getNumberOfActivity() + 1, activity));
    setNumberOfActivity(getNumberOfActivity() + 1);//aggiorna numero attività
}

int List::getNumberOfActivity() const {
    return numberOfActivity;
}

void List::setNumberOfActivity(int numberOfActivity) {
    List::numberOfActivity = numberOfActivity;
}
