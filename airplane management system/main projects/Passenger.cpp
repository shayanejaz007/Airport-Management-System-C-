

#include "Passenger.h"

int Passenger::count_passengers=0;

Passenger::Passenger() {
    name="";
    userName="";
    password="";
    total_expenditure=0;
    count_flights=0;
    flights_attended = new Flight[20];
}

Flight& Passenger::setFlightsAttended(const Flight &flightsAttended,int i) {
    flights_attended[i] = flightsAttended;
    count_flights++;
    return this->flights_attended[i];
}

void Passenger::showHistory() {
    for (int i = 0; i <count_flights ; ++i) {
        cout<<flights_attended[i]<<endl;
    }
}

double Passenger::getMoneyOnHand() const {
    return moneyOnHand;
}

void Passenger::setMoneyOnHand(double moneyOnHand) {
    Passenger::moneyOnHand = moneyOnHand;
}

int Passenger::getPassportNo() const {
    return PassportNo;
}

void Passenger::setPassportNo(int passportNo) {
    PassportNo = passportNo;
}

int Passenger::getCountFlights() const {
    return count_flights;
}

void Passenger::setCountFlights(int countFlights) {
    count_flights = countFlights;
}

double Passenger::getTotalExpenditure() const {
    return total_expenditure;
}

void Passenger::setTotalExpenditure(double totalExpenditure) {
    total_expenditure = totalExpenditure;
}

bool Passenger::isVisa() const {
    return visa;
}

void Passenger::setVisa(bool visa) {
    Passenger::visa = visa;
}

bool Passenger::isEligibleDiscount() const {
    return eligible_discount;
}

void Passenger::setEligibleDiscount(bool eligibleDiscount) {
    eligible_discount = eligibleDiscount;
}

int Passenger::getCountPassengers() {
    return Passenger::count_passengers;
}

void Passenger::setCountPassengers(int countPassengers) {
    Passenger::count_passengers = countPassengers;
}

Flight &Passenger::getFlightsAttended(int i) const {
    return flights_attended[i];
}

Passenger::~Passenger() {
    delete [] flights_attended;
}


