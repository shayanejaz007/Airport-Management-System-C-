//
// Created by Dell on 6/18/2021.
//

#ifndef CLION_CITY_H
#define CLION_CITY_H
#include <iostream>
#include "Airport.h"
using namespace std;

class City {
private:
    string name;
    Airport *airport;
    Airplane *airplane;
public:

    City();
    City(const string &name, Airport *airport, Airplane *airplane);

    string &getName();

    void setName(string name);

    Airport &getAirport(int i);

    void setAirport(const Airport &airport,int i);

    Airplane &getAirplane(int i) const;

    void setAirplane(const Airplane &airplane,int i);

//    ~City();
};


#endif //CLION_CITY_H
