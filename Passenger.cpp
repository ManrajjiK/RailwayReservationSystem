// passenger.cpp
#include "passenger.h"
#include <iostream>
using namespace std;

Passenger::Passenger() {}

Passenger::Passenger(string n, int a, int tNo, int ticketNo) {
    name = n;
    age = a;
    trainNo = tNo;
    pnr = ticketNo;
    isConfirmed = true;
}

void Passenger::display() {
    cout << "PNR: " << pnr
         << " | Name: " << name
         << " | Age: " << age
         << " | Train No: " << trainNo
         << " | Status: " << (isConfirmed ? "Confirmed" : "Cancelled") << endl;
}
