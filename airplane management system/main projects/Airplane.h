//
// Created by Dell on 6/18/2021.
//

#ifndef CLION_AIRPLANE_H
#define CLION_AIRPLANE_H

#include <iostream>
using namespace std;

class Airplane {
private:
    int ID;
    int seatsAvailable;
    string CLASS;
    bool availability;
    bool economy;
    bool business;
public:
    Airplane(int i =0,int sA=0,bool a=true, string c=" ");

    int getSeatsAvailable() const;

    void setSeatsAvailable(int i);

    bool isEconomy() const;

    void setEconomy(bool economy);

    bool isBusiness() const;

    void setBusiness(bool business);

    string &getClass() ;

    friend ostream &operator<<(ostream &os, const Airplane &airplane);

    int getId() const;

    void setId(int id);

    void changeSeatsAvailable(int i);

    void setClass( string c);

    bool isAvailability() const;

    void setAvailability(bool availability);

//    ~Airplane();
};


#endif //CLION_AIRPLANE_H
