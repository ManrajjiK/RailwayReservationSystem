#include <iostream>
#include "train.h"
#include "passenger.h"
#include "reservation.h"

using namespace std;

int main() {
    ReservationSystem system;

    // Add some dummy trains
    system.addTrain(Train(101, "Rajdhani Express", "Delhi", "Mumbai", 5));
    system.addTrain(Train(202, "Shatabdi Express", "Bhopal", "Delhi", 3));
    system.addTrain(Train(303, "Duronto Express", "Kolkata", "Chennai", 4));

    int choice;
    do {
        cout << "\n====== Railway Reservation System ======\n";
        cout << "1. Show Available Trains\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Show All Passengers\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            system.showTrains();
            break;

        case 2: {
            string name;
            int age, trainNo;
            cout << "Enter Passenger Name: ";
            cin >> ws;  // for whitespace
            getline(cin, name);
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Train No: ";
            cin >> trainNo;
            system.bookTicket(name, age, trainNo);
            break;
        }

        case 3: {
            int pnr;
            cout << "Enter PNR to Cancel: ";
            cin >> pnr;
            system.cancelTicket(pnr);
            break;
        }

        case 4:
            system.showAllPassengers();
            break;

        case 0:
            cout << "👋 Exiting... Thank you!\n";
            break;

        default:
            cout << "⚠️ Invalid Choice! Try Again.\n";
        }
    } while (choice != 0);

    return 0;
}
