// passenger.h
#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
public:
    std::string name;
    int age;
    int pnr;
    int trainNo;
    bool isConfirmed;

    Passenger();
    Passenger(std::string n, int a, int tNo, int ticketNo);

    void display();
};

#endif
