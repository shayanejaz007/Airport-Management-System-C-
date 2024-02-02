//
// Created by Dell on 6/20/2021.
//

#ifndef CLION_PASSENGER_H
#define CLION_PASSENGER_H
#include "User.h"
#include "Flight.h"
class Passenger : public User{
private:
    double moneyOnHand;
    int PassportNo;
    Flight *flights_attended;
    int count_flights;
    double total_expenditure;
    bool visa;
    bool eligible_discount;
    static int count_passengers;
public:
    // constructors destrucors bhi rehty hain
    // still kaafi functions likhnay valay rehty hain including cancel flight discount or is trh ky
    // see register for that
    Passenger();

    virtual ~Passenger();

    Flight& setFlightsAttended(const Flight &flightsAttended,int i);

    Flight &getFlightsAttended(int i) const;

    void showHistory();

    static int getCountPassengers();

    static void setCountPassengers(int countPassengers);

    double getMoneyOnHand() const;

    void setMoneyOnHand(double moneyOnHand);

    int getPassportNo() const;

    void setPassportNo(int passportNo);

    int getCountFlights() const;

    void setCountFlights(int countFlights);

    double getTotalExpenditure() const;

    void setTotalExpenditure(double totalExpenditure);

    bool isVisa() const;

    void setVisa(bool visa);

    bool isEligibleDiscount() const;

    void setEligibleDiscount(bool eligibleDiscount);

};


#endif //CLION_PASSENGER_H
