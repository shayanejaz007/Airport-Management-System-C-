//
// Created by Dell on 6/18/2021.
//

#include "Time.h"


Time::Time(int hours, int min, int sec, int date, int mon, int year) {
    this->Hours = hours;
    this->Min = min;
    this->Sec=sec;
    this->Date=date;
    this->Mon=mon;
    this->Year= year;
}

int Time::getHours() const {
    return Hours;
}

void Time::setHours(int hours) {
    Hours = hours;
    while (this->Hours>=24){
        Hours = Hours - 24;
        Date++;
        while (this->Date>=30){
            Date = Date - 30;
            Mon++;
            while (Mon>12){
                Mon = Mon -12;
                Year++;
            }
        }
    }
}

int Time::getMin() const {
    return Min;
}

void Time::setMin(int min) {
    Min = min;
    while (this->Min>=60){
        Min = Min - 60;
        Hours++;
        while (this->Hours>=24){
            Hours = Hours - 24;
            Date++;
            while (this->Date>=30){
                Date = Date - 30;
                Mon++;
                while (Mon>12){
                    Mon = Mon -12;
                    Year++;
                }
            }
        }
    }
}

int Time::getSec() const {
    return Sec;
}

void Time::setSec(int sec) {
    Sec = sec;
    while (this->Sec>=60){
        Sec = Sec -60;
        Min++;
        while (this->Min>=60){
            Min = Min - 60;
            Hours++;
            while (this->Hours>=24){
                Hours = Hours - 24;
                Date++;
                while (this->Date>=30){
                    Date = Date - 30;
                    Mon++;
                    while (Mon>12){
                        Mon = Mon -12;
                        Year++;
                    }
                }
            }
        }
    }
}

int Time::getDate() const {
    return Date;
}

void Time::setDate(int date) {
    Date = date;
    while (this->Date>=30){
        Date = Date - 30;
        Mon++;
        while (Mon>12){
            Mon = Mon -12;
            Year++;
        }
    }
}

int Time::getMon() const {
    return Mon;
}

void Time::setMon(int mon) {
    Mon = mon;
    while (Mon>12){
        Mon = Mon -12;
        Year++;
    }
}

int Time::getYear() const {
    return Year;
}

void Time::setYear(int year) {
    Year = year;
}

Time::~Time() {

}

std::ostream &operator<<(std::ostream &os, const Time &time) {
    os << " " << time.Hours << " : " << time.Min << " : " << time.Sec << " Date: " << time.Date << " / "
       << time.Mon << " / " << time.Year;
    return os;
}

bool Time::operator>(const Time &T) {
    if (this->Date>T.Date){
        return true;
    }
    else if (this->Hours>T.Hours){
        return true;
    }
    else if (this->Min>T.Min){
        return true;
    }
    else if (this->Sec>T.getSec()){
        return true;
    }
}
