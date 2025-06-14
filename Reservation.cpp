// reservation.cpp
#include "reservation.h"
#include <iostream>
using namespace std;

ReservationSystem::ReservationSystem() {
    nextPNR = 1001; // Starting PNR
}

void ReservationSystem::addTrain(Train t) {
    trains.push_back(t);
}

void ReservationSystem::showTrains() {
    cout << "\nAvailable Trains:\n";
    for (auto &t : trains) {
        t.display();
    }
}

void ReservationSystem::bookTicket(string name, int age, int trainNo) {
    for (auto &t : trains) {
        if (t.trainNo == trainNo) {
            if (t.bookSeat()) {
                Passenger p(name, age, trainNo, nextPNR++);
                passengers.push_back(p);
                cout << "✅ Ticket Booked! Your PNR is: " << p.pnr << endl;
            } else {
                cout << "❌ Sorry! No seats available.\n";
            }
            return;
        }
    }
    cout << "❌ Train Not Found.\n";
}

void ReservationSystem::cancelTicket(int pnr) {
    for (auto &p : passengers) {
        if (p.pnr == pnr && p.isConfirmed) {
            p.isConfirmed = false;

            // Seat wapas add karna
            for (auto &t : trains) {
                if (t.trainNo == p.trainNo) {
                    t.cancelSeat();
                    break;
                }
            }

            cout << "🗑️ Ticket Cancelled for PNR: " << pnr << endl;
            return;
        }
    }
    cout << "⚠️ Ticket not found or already cancelled.\n";
}

void ReservationSystem::showAllPassengers() {
    cout << "\n📜 Passenger List:\n";
    for (auto &p : passengers) {
        p.display();
    }
}
