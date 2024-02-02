//
// Created by Dell on 6/18/2021.
//

#include "City.h"

City::City(const string &name, Airport *airport, Airplane *airplane) : name(name), airport(airport),
                                                                       airplane(airplane) {}

City::City() {
    airplane = new Airplane[20];
    airport = new Airport[2]; // north south
}

//City::~City() {
//    delete [] airport;
//    delete [] airplane;
//}

string &City::getName() {
    return name;
}

void City::setName(string name) {
    City::name = name;
}

Airport &City::getAirport(int i) {
    return airport[i];
}

void City::setAirport(const Airport &airport,int i) {
    City::airport[i] = airport;
}

Airplane &City::getAirplane(int i) const {
    return airplane[i];
}

void City::setAirplane(const Airplane &airplane,int i) {
    City::airplane[i] = airplane;
}
