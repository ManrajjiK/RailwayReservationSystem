// reservation.h
#ifndef RESERVATION_H
#define RESERVATION_H

#include "train.h"
#include "passenger.h"
#include <vector>

class ReservationSystem {
private:
    std::vector<Train> trains;
    std::vector<Passenger> passengers;
    int nextPNR;

public:
    ReservationSystem();

    void addTrain(Train t);
    void showTrains();

    void bookTicket(std::string name, int age, int trainNo);
    void cancelTicket(int pnr);
    void showAllPassengers();
};

#endif
