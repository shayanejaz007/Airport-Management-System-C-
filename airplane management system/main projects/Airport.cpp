//
// Created by Dell on 6/18/2021.
//

#include "Airport.h"

Airport::Airport() {
    countLandingFlight=0;
    revenueGenerated=0;
    runwayAvailable=5;
    arrivingFlight = new Flight [20];
    depFlight = new Flight [15];

}

Airport::Airport(double revenueGenerated, int countLandingFlight, int runwayAvailable,string side) {
    depFlight = new Flight [15];
    this->side=side;
    arrivingFlight = new Flight [20];
    this->runwayAvailable=runwayAvailable;
    this->revenueGenerated=revenueGenerated;
    this->countLandingFlight = countLandingFlight;
}

//Airport::~Airport() {
//    delete [] depFlight;
//    delete [] arrivingFlight;
//}

double Airport::getRevenueGenerated() const {
    return revenueGenerated;
}

void Airport::setRevenueGenerated(double revenueGenerated) {
    Airport::revenueGenerated = revenueGenerated;
}

Flight &Airport::getDepFlight(int i ) {
    return depFlight[i];
}

void Airport::setDepFlight(const Flight &F, int i) {
    this->depFlight[i] = F;
}

int Airport::getCountLandingFlight() const {
    return countLandingFlight;
}

void Airport::setCountLandingFlight(int countLandingFlight) {
    Airport::countLandingFlight = countLandingFlight;
}

Flight &Airport::getArrivingFlight(int i) {
    return arrivingFlight[i];
}

void Airport:: setArrivingFlight(const Flight &arrivingFlight,int i) {
    this->arrivingFlight[i] = arrivingFlight;
}

int Airport::getRunwayAvailable() const {
    return runwayAvailable;
}

void Airport::setRunwayAvailable(int runwayAvailable) {
    Airport::runwayAvailable = runwayAvailable;
}

 string &Airport::getSide(){
    return side;
}

void Airport::setSide(string side) {
    Airport::side = side;
}



