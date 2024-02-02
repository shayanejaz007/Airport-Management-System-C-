
#include "Flight.h"

Flight::Flight() {
//    air = NULL;
    international= local = false;
//    depTime = arrTime = NULL;
    fare = 0;
    route = start = destination = " ";
    status = true;
}

Flight::Flight(const Airplane &air, bool international, bool local, const Time &depTime, const Time &arrTime,
               double fare, const string &route, const string &start, const string &destination, bool status)  {
    *this->air=(air);
    this->international=(international);
    this-> local=(local);
    this->depTime=(depTime);
    this-> arrTime=(arrTime);
    this-> fare=(fare);
    this->route=(route);
    this->start=(start);
    this->destination=(destination);
    this->status=(status);
}

//Flight::~Flight() {
//    status=0;
//}

Airplane &Flight::getAir() {
    return *air;
}

void Flight::setAir(Airplane &air) {
    this->air = &air;
}

bool Flight::isInternational()const{
    return international;
}

void Flight::setInternational(bool international) {
    Flight::international = international;
}

bool Flight::isLocal() const {
    return local;
}

void Flight::setLocal(bool local) {
    Flight::local = local;
}

Time &Flight::getDepTime()  {
    return depTime;
}

void Flight::setDepTime(const Time &depTime) {
    Flight::depTime = depTime;
}

Time &Flight::getArrTime()  {
    return arrTime;
}

void Flight::setArrTime(const Time &arrTime) {
    Flight::arrTime = arrTime;
}

double Flight::getFare() const {
    return fare;
}

void Flight::setFare(double fare) {
    if (fare<0){
        fare = fare*-1;
    }
    Flight::fare = fare;
}

string &Flight::getRoute() {
    return route;
}

void Flight::setRoute(const string &route) {
    Flight::route = route;
}

string Flight::getStart()  {
    return start;
}

void Flight::setStart(string start) {
    Flight::start = start;
}

string Flight::getDestination() {
    return destination;
}

void Flight::setDestination(string destination) {
    Flight::destination = destination;
}

bool Flight::getStatus() const  {
    return status;
}

void Flight::setStatus(bool status) {
    Flight::status = status;
}

ostream &operator<<(ostream &os, const Flight &flight) {
    if (flight.international){
        if (flight.air->isBusiness()){
            os <<" International flight "<<" Business class "<<" Seats available: "<<flight.air->getSeatsAvailable()<< " Departure Time: " << flight.depTime << " Arrival Time: " << flight.arrTime << " fare: " << flight.fare << " route: "
           << flight.route << " Start: " << flight.start << " Destination: " << flight.destination << " status: "
           << flight.status;
        }
        else{
            os <<" International flight "<<" Economy class "<<" Seats available: "<<flight.air->getSeatsAvailable()<< " Departure Time: " << flight.depTime << " Arrival Time: " << flight.arrTime << " fare: " << flight.fare << " route: "
               << flight.route << " Start: " << flight.start << " Destination: " << flight.destination << " status: "
               << flight.status;
        }
    }
    else if(flight.local){
        if (flight.air->isBusiness()){
            os <<" Local flight "<<" Business class "<<" Seats available: "<<flight.air->getSeatsAvailable()<< " Departure Time: " << flight.depTime << " Arrival Time: " << flight.arrTime << " fare: " << flight.fare << " route: "
               << flight.route << " Start: " << flight.start << " Destination: " << flight.destination << " status: "
               << flight.status;
        }
        else{
            os <<" Local flight "<<" Economy class "<<" Seats available: "<<flight.air->getSeatsAvailable()<< " Departure Time: " << flight.depTime << " Arrival Time: " << flight.arrTime << " fare: " << flight.fare << " route: "
               << flight.route << " Start: " << flight.start << " Destination: " << flight.destination << " status: "
               << flight.status;
        }
    }
    return os;
}
