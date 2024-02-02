
#ifndef CLION_FLIGHT_H
#define CLION_FLIGHT_H

#include <ostream>
#include "Airplane.h"
#include "Time.h"


class Flight {
private:
    Airplane *air;
    bool international;
    bool local;
    Time depTime;    // AGGREGATION
    Time arrTime;   // AGGREGATION
    double fare;
    string route;
    string start;
    string destination;
    // status will be false if the admin blocks this flight
    bool status;
public:
    Flight();

    Flight(const Airplane &air, bool international, bool local, const Time &depTime, const Time &arrTime, double fare,
           const string &route, const string &start, const string &destination, bool status);

//    ~Flight();

    Airplane &getAir();

    friend ostream &operator<<(ostream &os, const Flight &flight);
//    void operator=(int i);

    void setAir(Airplane &air);

    bool isInternational() const;

    void setInternational(bool international);

    bool isLocal() const;

    void setLocal(bool local);

    Time &getDepTime() ;

    void setDepTime(const Time &depTime);

    Time &getArrTime() ;

    void setArrTime(const Time &arrTime);

    double getFare() const;

    void setFare(double fare);

    string &getRoute();

    void setRoute(const string &route);

    string getStart();

    void setStart(string start);

    string getDestination() ;

    void setDestination(string destination);

    bool getStatus() const;

    void setStatus(bool status);

};


#endif //CLION_FLIGHT_H
