//
// Created by Dell on 6/18/2021.
//

#ifndef CLION_TIME_H
#define CLION_TIME_H


#include <ostream>

class Time {
private:
    int Hours;
    int Min;
    int Sec;
    int Date;
    int Mon;
    int Year;
public:
    Time(int hours=0, int min=0, int sec=0, int date=0, int mon=0, int year=0);

     ~Time();

    int getHours() const;

    void setHours(int hours);

    int getMin() const;

    void setMin(int min);

    int getSec() const;

    void setSec(int sec);

    int getDate() const;

    void setDate(int date);

    int getMon() const;

    void setMon(int mon);

    int getYear() const;
    void setYear(int year);
    bool operator>(const Time &T);
    friend std::ostream &operator<<(std::ostream &os, const Time &time);

};


#endif //CLION_TIME_H
