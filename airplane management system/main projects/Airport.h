
#ifndef CLION_AIRPORT_H
#define CLION_AIRPORT_H
#include "Flight.h"

class Airport {
private:
    double revenueGenerated;
    Flight *depFlight;
    int countLandingFlight;
    Flight *arrivingFlight;
    int runwayAvailable;
    string side;

public:
    Airport();

    Airport(double revenueGenerated, int countLandingFlight,int runwayAvailable,string side);


    string &getSide();

    void setSide(string side);

    double getRevenueGenerated() const;

    void setRevenueGenerated(double revenueGenerated);

    Flight &getDepFlight(int i);

    void setDepFlight(const Flight &F, int i);

    int getCountLandingFlight() const;

    void setCountLandingFlight(int countLandingFlight);

    Flight &getArrivingFlight(int i);

    void setArrivingFlight(const Flight &arrivingFlight,int i);

    int getRunwayAvailable() const;

    void setRunwayAvailable(int runwayAvailable);

//    ~Airport();
};


#endif //CLION_AIRPORT_H
