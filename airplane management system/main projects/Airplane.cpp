//
// Created by Dell on 6/18/2021.
//

#include "Airplane.h"


Airplane::Airplane(int i, int sA,bool a, string c) {
    this->ID=i;
    this->seatsAvailable=sA;
    this->CLASS=c;
    this->availability=a;

}

int Airplane::getSeatsAvailable() const {
    return seatsAvailable;
}

void Airplane::setSeatsAvailable(int i) {
    this->seatsAvailable = this->seatsAvailable+i;
}

 string &Airplane::getClass()  {
    return CLASS;
}

void Airplane::setClass(string c) {
    CLASS =c;
}

ostream &operator<<(ostream &os, const Airplane &airplane) {
    os << "ID: " << airplane.ID << " seatsAvailable: " << airplane.seatsAvailable << " CLASS: " << airplane.CLASS;
    return os;
}

int Airplane::getId() const {
    return ID;
}

void Airplane::setId(int id) {
    ID = id;
}

void Airplane::changeSeatsAvailable(int i) {
    this->seatsAvailable = i;
}

bool Airplane::isAvailability() const {
    return availability;
}

void Airplane::setAvailability(bool availability) {
    Airplane::availability = availability;
}

bool Airplane::isEconomy() const {
    return economy;
}

void Airplane::setEconomy(bool economy) {
    Airplane::economy = economy;
}

bool Airplane::isBusiness() const {
    return business;
}

void Airplane::setBusiness(bool business) {
    Airplane::business = business;
}

//Airplane::~Airplane() {
//
//}
